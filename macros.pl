#!/usr/bin/perl
## --------------------------------------------------------------------------
##   
##   Copyright 1996-2009 The NASM Authors - All Rights Reserved
##   See the file AUTHORS included with the NASM distribution for
##   the specific copyright holders.
##
##   Redistribution and use in source and binary forms, with or without
##   modification, are permitted provided that the following
##   conditions are met:
##
##   * Redistributions of source code must retain the above copyright
##     notice, this list of conditions and the following disclaimer.
##   * Redistributions in binary form must reproduce the above
##     copyright notice, this list of conditions and the following
##     disclaimer in the documentation and/or other materials provided
##     with the distribution.
##     
##     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND
##     CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
##     INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
##     MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
##     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
##     CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
##     SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
##     NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
##     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
##     HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
##     CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
##     OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
##     EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
##
## --------------------------------------------------------------------------

#
# macros.pl   produce macros.c from standard.mac
#

require 'phash.ph';
require 'pptok.ph';

use bytes;

my $fname;
my $line = 0;
my $index      = 0;
my $tasm_count = 0;

#
# Print out a string as a character array
#
sub charcify(@) {
    my $l = '';
    my $c, $o;
    foreach $o (unpack("C*", join('',@_))) {
	$c = pack("C", $o);
	if ($o < 32 || $o > 126 || $c eq '"' || $c eq "\\") {
	    $l .= sprintf("%3d,", $o);
	} else {
	    $c =~ s/\'/\\'/;	# << sanitize single quote. 
	    $l .= "\'".$c."\',";
	}
    }
    return $l;
}


#
# Generate macros.c
#
open(OUT,"> macros.c\0") or die "unable to open macros.c\n";

print OUT "/*\n";
print OUT " * Do not edit - this file auto-generated by macros.pl from:\n";
print OUT " *   ", join("\n *   ", @ARGV), "\n";
print OUT " */\n";
print OUT "\n";
print OUT "#include \"tables.h\"\n";
print OUT "#include \"nasmlib.h\"\n";
print OUT "#include \"hashtbl.h\"\n";
print OUT "#include \"output/outform.h\"\n";
print OUT "\n";
print OUT "#if 1\n";
print OUT "const unsigned char nasm_stdmac[] = {";

my $npkg = 0;
my @pkg_list   = ();
my %pkg_number = ();
my $pkg;
my @out_list   = ();
my $outfmt;
my $lastname;
my $z;

foreach $fname ( @ARGV ) {
    open(INPUT,"< $fname\0") or die "$0: $fname: $!\n";
    while (<INPUT>) {
	$line++;
	chomp;
	while (/^(.*)\\$/) {
	    $_ = $1;
	    $_ .= <INPUT>;
	    chomp;
	    $line++;
	}
	if (m/^\s*\*END\*TASM\*MACROS\*\s*$/) {
	    $tasm_count = $index;
	    print OUT "    /* End of TASM macros */\n";
	} elsif (m/^OUT:\s*(.*\S)\s*$/) {
	    undef $pkg;
	    my @out_alias = split(/\s+/, $1);
	    printf OUT "        /* %4d */ 0\n", $index++;
	    print OUT "};\n#endif\n";
	    $index = 0;
	    print OUT "\n";
	    my $pfx = '#if';
	    foreach my $al (@out_alias) {
		print OUT $pfx, " defined(OF_\U${al}\E)";
		$pfx = ' ||';
	    }
	    printf OUT "\nconst unsigned char %s_stdmac[] = {\n", $out_alias[0];
	    print  OUT "    /* From $fname */\n";
	    $lastname = $fname;
	    push(@out_list, $out_alias[0]);
	    $out_index{$out_alias[0]} = $index;
	} elsif (m/^USE:\s*(\S+)\s*$/) {
	    $pkg = $1;
	    if (defined($pkg_number{$pkg})) {
		die "$0: $fname: duplicate package: $pkg\n";
	    }
	    printf OUT "        /* %4d */ 0\n", $index++;
	    print OUT "};\n#endif\n";
	    $index = 0;
	    print OUT "\n#if 1\n";
	    printf OUT "static const unsigned char nasm_stdmac_%s[] = {\n", $pkg;
	    print  OUT "    /* From $fname */\n";
	    $lastname = $fname;
	    push(@pkg_list, $pkg);
	    $pkg_number{$pkg} = $npkg++;
	    $z = pack("C", $pptok_hash{'%define'}+128)."__USE_\U$pkg\E__";
	    printf OUT "        /* %4d */ %s0,\n", $index, charcify($z);
	    $index += length($z)+1;
	} elsif (m/^\s*((\s*([^\"\';\s]+|\"[^\"]*\"|\'[^\']*\'))*)\s*(;.*)?$/) {
	    my $s1, $s2, $pd, $ws;
	    $s1 = $1;
	    $s2 = '';
	    while ($s1 =~ /(\%[a-zA-Z_][a-zA-Z0-9_]*)((\s+)(.*)|)$/) {
		$s2 .= "$'";
		$pd = $1;
		$ws = $3;
		$s1 = $4;
		if (defined($pptok_hash{$pd}) &&
		    $pptok_hash{$pd} <= 127) {
		    $s2 .= pack("C", $pptok_hash{$pd}+128);
		} else {
		    $s2 .= $pd.$ws;
		}
	    }
	    $s2 .= $s1;
	    if (length($s2) > 0) {
		if ($lastname ne $fname) {
		    print OUT "\n    /* From $fname */\n";
		    $lastname = $fname;
		}	
		printf OUT "        /* %4d */ %s0,\n",
		    $index, charcify($s2);
		$index += length($s2)+1;
	    }
	} else {
	    die "$fname:$line:  error unterminated quote";
	}
    }
    close(INPUT);
}
printf OUT "        /* %4d */ 0\n};\n#endif\n\n", $index++;
print OUT "const unsigned char * const nasm_stdmac_after_tasm = ",
    "&nasm_stdmac[$tasm_count];\n\n";

my @hashinfo = gen_perfect_hash(\%pkg_number);
if (!@hashinfo) {
    die "$0: no hash found\n";
}
# Paranoia...
verify_hash_table(\%pkg_number, \@hashinfo);
my ($n, $sv, $g) = @hashinfo;
die if ($n & ($n-1));

print OUT "const unsigned char *nasm_stdmac_find_package(const char *package)\n";
print OUT "{\n";
print OUT "    static const struct {\n";
print OUT "         const char *package;\n";
print OUT "         const unsigned char *macros;\n";
print OUT "    } packages[$npkg] = {\n";
foreach $pkg (@pkg_list) {
    printf OUT "        { \"%s\", nasm_stdmac_%s },\n",
	$pkg, $pkg;
}
print OUT "    };\n";

# Put a large value in unused slots.  This makes it extremely unlikely
# that any combination that involves unused slot will pass the range test.
# This speeds up rejection of unrecognized tokens, i.e. identifiers.
print OUT "#define UNUSED 16383\n";

print OUT "    static const int16_t hash1[$n] = {\n";
for ($i = 0; $i < $n; $i++) {
    my $h = ${$g}[$i*2+0];
    print OUT "        ", defined($h) ? $h : 'UNUSED', ",\n";
}
print OUT "    };\n";

print OUT "    static const int16_t hash2[$n] = {\n";
for ($i = 0; $i < $n; $i++) {
    my $h = ${$g}[$i*2+1];
    print OUT "        ", defined($h) ? $h : 'UNUSED', ",\n";
}
print OUT "    };\n";

print OUT  "    uint32_t k1, k2;\n";
print OUT  "    uint64_t crc;\n";
# For correct overflow behavior, "ix" should be unsigned of the same
# width as the hash arrays.
print OUT  "    uint16_t ix;\n";
print OUT  "\n";

printf OUT "    crc = crc64i(UINT64_C(0x%08x%08x), package);\n",
    $$sv[0], $$sv[1];
print  OUT "    k1 = (uint32_t)crc;\n";
print  OUT "    k2 = (uint32_t)(crc >> 32);\n";
print  OUT "\n";
printf OUT "    ix = hash1[k1 & 0x%x] + hash2[k2 & 0x%x];\n", $n-1, $n-1;
printf OUT "    if (ix >= %d)\n", scalar(@pkg_list);
print OUT  "        return NULL;\n";
print OUT  "\n";
print OUT  "    if (nasm_stricmp(packages[ix].package, package))\n";
print OUT  "        return NULL;\n";
print OUT  "\n";
print OUT  "    return packages[ix].macros;\n";
print OUT  "}\n";

close(OUT);
