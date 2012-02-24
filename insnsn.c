/* This file is auto-generated from insns.dat by insns.pl - don't edit it */

#include "tables.h"

const char * const nasm_insn_names[] = {
	"aaa",
	"aad",
	"aam",
	"aas",
	"adc",
	"add",
	"addpd",
	"addps",
	"addsd",
	"addss",
	"addsubpd",
	"addsubps",
	"aesdec",
	"aesdeclast",
	"aesenc",
	"aesenclast",
	"aesimc",
	"aeskeygenassist",
	"and",
	"andn",
	"andnpd",
	"andnps",
	"andpd",
	"andps",
	"arpl",
	"bb0_reset",
	"bb1_reset",
	"bextr",
	"blendpd",
	"blendps",
	"blendvpd",
	"blendvps",
	"blsi",
	"blsmsk",
	"blsr",
	"bound",
	"bsf",
	"bsr",
	"bswap",
	"bt",
	"btc",
	"btr",
	"bts",
	"bzhi",
	"call",
	"cbw",
	"cdq",
	"cdqe",
	"clc",
	"cld",
	"clflush",
	"clgi",
	"cli",
	"clts",
	"cmc",
	"cmp",
	"cmpeqpd",
	"cmpeqps",
	"cmpeqsd",
	"cmpeqss",
	"cmplepd",
	"cmpleps",
	"cmplesd",
	"cmpless",
	"cmpltpd",
	"cmpltps",
	"cmpltsd",
	"cmpltss",
	"cmpneqpd",
	"cmpneqps",
	"cmpneqsd",
	"cmpneqss",
	"cmpnlepd",
	"cmpnleps",
	"cmpnlesd",
	"cmpnless",
	"cmpnltpd",
	"cmpnltps",
	"cmpnltsd",
	"cmpnltss",
	"cmpordpd",
	"cmpordps",
	"cmpordsd",
	"cmpordss",
	"cmppd",
	"cmpps",
	"cmpsb",
	"cmpsd",
	"cmpsq",
	"cmpss",
	"cmpsw",
	"cmpunordpd",
	"cmpunordps",
	"cmpunordsd",
	"cmpunordss",
	"cmpxchg",
	"cmpxchg16b",
	"cmpxchg486",
	"cmpxchg8b",
	"comisd",
	"comiss",
	"cpuid",
	"cpu_read",
	"cpu_write",
	"cqo",
	"crc32",
	"cvtdq2pd",
	"cvtdq2ps",
	"cvtpd2dq",
	"cvtpd2pi",
	"cvtpd2ps",
	"cvtpi2pd",
	"cvtpi2ps",
	"cvtps2dq",
	"cvtps2pd",
	"cvtps2pi",
	"cvtsd2si",
	"cvtsd2ss",
	"cvtsi2sd",
	"cvtsi2ss",
	"cvtss2sd",
	"cvtss2si",
	"cvttpd2dq",
	"cvttpd2pi",
	"cvttps2dq",
	"cvttps2pi",
	"cvttsd2si",
	"cvttss2si",
	"cwd",
	"cwde",
	"daa",
	"das",
	"db",
	"dd",
	"dec",
	"div",
	"divpd",
	"divps",
	"divsd",
	"divss",
	"dmint",
	"do",
	"dppd",
	"dpps",
	"dq",
	"dt",
	"dw",
	"dy",
	"emms",
	"enter",
	"equ",
	"extractps",
	"extrq",
	"f2xm1",
	"fabs",
	"fadd",
	"faddp",
	"fbld",
	"fbstp",
	"fchs",
	"fclex",
	"fcmovb",
	"fcmovbe",
	"fcmove",
	"fcmovnb",
	"fcmovnbe",
	"fcmovne",
	"fcmovnu",
	"fcmovu",
	"fcom",
	"fcomi",
	"fcomip",
	"fcomp",
	"fcompp",
	"fcos",
	"fdecstp",
	"fdisi",
	"fdiv",
	"fdivp",
	"fdivr",
	"fdivrp",
	"femms",
	"feni",
	"ffree",
	"ffreep",
	"fiadd",
	"ficom",
	"ficomp",
	"fidiv",
	"fidivr",
	"fild",
	"fimul",
	"fincstp",
	"finit",
	"fist",
	"fistp",
	"fisttp",
	"fisub",
	"fisubr",
	"fld",
	"fld1",
	"fldcw",
	"fldenv",
	"fldl2e",
	"fldl2t",
	"fldlg2",
	"fldln2",
	"fldpi",
	"fldz",
	"fmul",
	"fmulp",
	"fnclex",
	"fndisi",
	"fneni",
	"fninit",
	"fnop",
	"fnsave",
	"fnstcw",
	"fnstenv",
	"fnstsw",
	"fpatan",
	"fprem",
	"fprem1",
	"fptan",
	"frndint",
	"frstor",
	"fsave",
	"fscale",
	"fsetpm",
	"fsin",
	"fsincos",
	"fsqrt",
	"fst",
	"fstcw",
	"fstenv",
	"fstp",
	"fstsw",
	"fsub",
	"fsubp",
	"fsubr",
	"fsubrp",
	"ftst",
	"fucom",
	"fucomi",
	"fucomip",
	"fucomp",
	"fucompp",
	"fwait",
	"fxam",
	"fxch",
	"fxrstor",
	"fxrstor64",
	"fxsave",
	"fxsave64",
	"fxtract",
	"fyl2x",
	"fyl2xp1",
	"getsec",
	"haddpd",
	"haddps",
	"hint_nop0",
	"hint_nop1",
	"hint_nop10",
	"hint_nop11",
	"hint_nop12",
	"hint_nop13",
	"hint_nop14",
	"hint_nop15",
	"hint_nop16",
	"hint_nop17",
	"hint_nop18",
	"hint_nop19",
	"hint_nop2",
	"hint_nop20",
	"hint_nop21",
	"hint_nop22",
	"hint_nop23",
	"hint_nop24",
	"hint_nop25",
	"hint_nop26",
	"hint_nop27",
	"hint_nop28",
	"hint_nop29",
	"hint_nop3",
	"hint_nop30",
	"hint_nop31",
	"hint_nop32",
	"hint_nop33",
	"hint_nop34",
	"hint_nop35",
	"hint_nop36",
	"hint_nop37",
	"hint_nop38",
	"hint_nop39",
	"hint_nop4",
	"hint_nop40",
	"hint_nop41",
	"hint_nop42",
	"hint_nop43",
	"hint_nop44",
	"hint_nop45",
	"hint_nop46",
	"hint_nop47",
	"hint_nop48",
	"hint_nop49",
	"hint_nop5",
	"hint_nop50",
	"hint_nop51",
	"hint_nop52",
	"hint_nop53",
	"hint_nop54",
	"hint_nop55",
	"hint_nop56",
	"hint_nop57",
	"hint_nop58",
	"hint_nop59",
	"hint_nop6",
	"hint_nop60",
	"hint_nop61",
	"hint_nop62",
	"hint_nop63",
	"hint_nop7",
	"hint_nop8",
	"hint_nop9",
	"hlt",
	"hsubpd",
	"hsubps",
	"ibts",
	"icebp",
	"idiv",
	"imul",
	"in",
	"inc",
	"incbin",
	"insb",
	"insd",
	"insertps",
	"insertq",
	"insw",
	"int",
	"int01",
	"int03",
	"int1",
	"int3",
	"into",
	"invd",
	"invept",
	"invlpg",
	"invlpga",
	"invpcid",
	"invvpid",
	"iret",
	"iretd",
	"iretq",
	"iretw",
	"jcxz",
	"jecxz",
	"jmp",
	"jmpe",
	"jrcxz",
	"lahf",
	"lar",
	"lddqu",
	"ldmxcsr",
	"lds",
	"lea",
	"leave",
	"les",
	"lfence",
	"lfs",
	"lgdt",
	"lgs",
	"lidt",
	"lldt",
	"llwpcb",
	"lmsw",
	"loadall",
	"loadall286",
	"lodsb",
	"lodsd",
	"lodsq",
	"lodsw",
	"loop",
	"loope",
	"loopne",
	"loopnz",
	"loopz",
	"lsl",
	"lss",
	"ltr",
	"lwpins",
	"lwpval",
	"lzcnt",
	"maskmovdqu",
	"maskmovq",
	"maxpd",
	"maxps",
	"maxsd",
	"maxss",
	"mfence",
	"minpd",
	"minps",
	"minsd",
	"minss",
	"monitor",
	"montmul",
	"mov",
	"movapd",
	"movaps",
	"movbe",
	"movd",
	"movddup",
	"movdq2q",
	"movdqa",
	"movdqu",
	"movhlps",
	"movhpd",
	"movhps",
	"movlhps",
	"movlpd",
	"movlps",
	"movmskpd",
	"movmskps",
	"movntdq",
	"movntdqa",
	"movnti",
	"movntpd",
	"movntps",
	"movntq",
	"movntsd",
	"movntss",
	"movq",
	"movq2dq",
	"movsb",
	"movsd",
	"movshdup",
	"movsldup",
	"movsq",
	"movss",
	"movsw",
	"movsx",
	"movsxd",
	"movupd",
	"movups",
	"movzx",
	"mpsadbw",
	"mul",
	"mulpd",
	"mulps",
	"mulsd",
	"mulss",
	"mulx",
	"mwait",
	"neg",
	"nop",
	"not",
	"or",
	"orpd",
	"orps",
	"out",
	"outsb",
	"outsd",
	"outsw",
	"pabsb",
	"pabsd",
	"pabsw",
	"packssdw",
	"packsswb",
	"packusdw",
	"packuswb",
	"paddb",
	"paddd",
	"paddq",
	"paddsb",
	"paddsiw",
	"paddsw",
	"paddusb",
	"paddusw",
	"paddw",
	"palignr",
	"pand",
	"pandn",
	"pause",
	"paveb",
	"pavgb",
	"pavgusb",
	"pavgw",
	"pblendvb",
	"pblendw",
	"pclmulhqhqdq",
	"pclmulhqlqdq",
	"pclmullqhqdq",
	"pclmullqlqdq",
	"pclmulqdq",
	"pcmpeqb",
	"pcmpeqd",
	"pcmpeqq",
	"pcmpeqw",
	"pcmpestri",
	"pcmpestrm",
	"pcmpgtb",
	"pcmpgtd",
	"pcmpgtq",
	"pcmpgtw",
	"pcmpistri",
	"pcmpistrm",
	"pdep",
	"pdistib",
	"pext",
	"pextrb",
	"pextrd",
	"pextrq",
	"pextrw",
	"pf2id",
	"pf2iw",
	"pfacc",
	"pfadd",
	"pfcmpeq",
	"pfcmpge",
	"pfcmpgt",
	"pfmax",
	"pfmin",
	"pfmul",
	"pfnacc",
	"pfpnacc",
	"pfrcp",
	"pfrcpit1",
	"pfrcpit2",
	"pfrcpv",
	"pfrsqit1",
	"pfrsqrt",
	"pfrsqrtv",
	"pfsub",
	"pfsubr",
	"phaddd",
	"phaddsw",
	"phaddw",
	"phminposuw",
	"phsubd",
	"phsubsw",
	"phsubw",
	"pi2fd",
	"pi2fw",
	"pinsrb",
	"pinsrd",
	"pinsrq",
	"pinsrw",
	"pmachriw",
	"pmaddubsw",
	"pmaddwd",
	"pmagw",
	"pmaxsb",
	"pmaxsd",
	"pmaxsw",
	"pmaxub",
	"pmaxud",
	"pmaxuw",
	"pminsb",
	"pminsd",
	"pminsw",
	"pminub",
	"pminud",
	"pminuw",
	"pmovmskb",
	"pmovsxbd",
	"pmovsxbq",
	"pmovsxbw",
	"pmovsxdq",
	"pmovsxwd",
	"pmovsxwq",
	"pmovzxbd",
	"pmovzxbq",
	"pmovzxbw",
	"pmovzxdq",
	"pmovzxwd",
	"pmovzxwq",
	"pmuldq",
	"pmulhriw",
	"pmulhrsw",
	"pmulhrwa",
	"pmulhrwc",
	"pmulhuw",
	"pmulhw",
	"pmulld",
	"pmullw",
	"pmuludq",
	"pmvgezb",
	"pmvlzb",
	"pmvnzb",
	"pmvzb",
	"pop",
	"popa",
	"popad",
	"popaw",
	"popcnt",
	"popf",
	"popfd",
	"popfq",
	"popfw",
	"por",
	"prefetch",
	"prefetchnta",
	"prefetcht0",
	"prefetcht1",
	"prefetcht2",
	"prefetchw",
	"psadbw",
	"pshufb",
	"pshufd",
	"pshufhw",
	"pshuflw",
	"pshufw",
	"psignb",
	"psignd",
	"psignw",
	"pslld",
	"pslldq",
	"psllq",
	"psllw",
	"psrad",
	"psraw",
	"psrld",
	"psrldq",
	"psrlq",
	"psrlw",
	"psubb",
	"psubd",
	"psubq",
	"psubsb",
	"psubsiw",
	"psubsw",
	"psubusb",
	"psubusw",
	"psubw",
	"pswapd",
	"ptest",
	"punpckhbw",
	"punpckhdq",
	"punpckhqdq",
	"punpckhwd",
	"punpcklbw",
	"punpckldq",
	"punpcklqdq",
	"punpcklwd",
	"push",
	"pusha",
	"pushad",
	"pushaw",
	"pushf",
	"pushfd",
	"pushfq",
	"pushfw",
	"pxor",
	"rcl",
	"rcpps",
	"rcpss",
	"rcr",
	"rdfsbase",
	"rdgsbase",
	"rdm",
	"rdmsr",
	"rdpmc",
	"rdrand",
	"rdshr",
	"rdtsc",
	"rdtscp",
	"resb",
	"resd",
	"reso",
	"resq",
	"rest",
	"resw",
	"resy",
	"ret",
	"retf",
	"retn",
	"rol",
	"ror",
	"rorx",
	"roundpd",
	"roundps",
	"roundsd",
	"roundss",
	"rsdc",
	"rsldt",
	"rsm",
	"rsqrtps",
	"rsqrtss",
	"rsts",
	"sahf",
	"sal",
	"salc",
	"sar",
	"sarx",
	"sbb",
	"scasb",
	"scasd",
	"scasq",
	"scasw",
	"sfence",
	"sgdt",
	"shl",
	"shld",
	"shlx",
	"shr",
	"shrd",
	"shrx",
	"shufpd",
	"shufps",
	"sidt",
	"skinit",
	"sldt",
	"slwpcb",
	"smi",
	"smint",
	"smintold",
	"smsw",
	"sqrtpd",
	"sqrtps",
	"sqrtsd",
	"sqrtss",
	"stc",
	"std",
	"stgi",
	"sti",
	"stmxcsr",
	"stosb",
	"stosd",
	"stosq",
	"stosw",
	"str",
	"sub",
	"subpd",
	"subps",
	"subsd",
	"subss",
	"svdc",
	"svldt",
	"svts",
	"swapgs",
	"syscall",
	"sysenter",
	"sysexit",
	"sysret",
	"test",
	"tzcnt",
	"ucomisd",
	"ucomiss",
	"ud0",
	"ud1",
	"ud2",
	"ud2a",
	"ud2b",
	"umov",
	"unpckhpd",
	"unpckhps",
	"unpcklpd",
	"unpcklps",
	"vaddpd",
	"vaddps",
	"vaddsd",
	"vaddss",
	"vaddsubpd",
	"vaddsubps",
	"vaesdec",
	"vaesdeclast",
	"vaesenc",
	"vaesenclast",
	"vaesimc",
	"vaeskeygenassist",
	"vandnpd",
	"vandnps",
	"vandpd",
	"vandps",
	"vblendpd",
	"vblendps",
	"vblendvpd",
	"vblendvps",
	"vbroadcastf128",
	"vbroadcasti128",
	"vbroadcastsd",
	"vbroadcastss",
	"vcmpeqpd",
	"vcmpeqps",
	"vcmpeqsd",
	"vcmpeqss",
	"vcmpeq_ospd",
	"vcmpeq_osps",
	"vcmpeq_ossd",
	"vcmpeq_osss",
	"vcmpeq_uqpd",
	"vcmpeq_uqps",
	"vcmpeq_uqsd",
	"vcmpeq_uqss",
	"vcmpeq_uspd",
	"vcmpeq_usps",
	"vcmpeq_ussd",
	"vcmpeq_usss",
	"vcmpfalsepd",
	"vcmpfalseps",
	"vcmpfalsesd",
	"vcmpfalsess",
	"vcmpfalse_oqpd",
	"vcmpfalse_oqps",
	"vcmpfalse_oqsd",
	"vcmpfalse_oqss",
	"vcmpfalse_ospd",
	"vcmpfalse_osps",
	"vcmpfalse_ossd",
	"vcmpfalse_osss",
	"vcmpgepd",
	"vcmpgeps",
	"vcmpgesd",
	"vcmpgess",
	"vcmpge_oqpd",
	"vcmpge_oqps",
	"vcmpge_oqsd",
	"vcmpge_oqss",
	"vcmpge_ospd",
	"vcmpge_osps",
	"vcmpge_ossd",
	"vcmpge_osss",
	"vcmpgtpd",
	"vcmpgtps",
	"vcmpgtsd",
	"vcmpgtss",
	"vcmpgt_oqpd",
	"vcmpgt_oqps",
	"vcmpgt_oqsd",
	"vcmpgt_oqss",
	"vcmpgt_ospd",
	"vcmpgt_osps",
	"vcmpgt_ossd",
	"vcmpgt_osss",
	"vcmplepd",
	"vcmpleps",
	"vcmplesd",
	"vcmpless",
	"vcmple_oqpd",
	"vcmple_oqps",
	"vcmple_oqsd",
	"vcmple_oqss",
	"vcmple_ospd",
	"vcmple_osps",
	"vcmple_ossd",
	"vcmple_osss",
	"vcmpltpd",
	"vcmpltps",
	"vcmpltsd",
	"vcmpltss",
	"vcmplt_oqpd",
	"vcmplt_oqps",
	"vcmplt_oqsd",
	"vcmplt_oqss",
	"vcmplt_ospd",
	"vcmplt_osps",
	"vcmplt_ossd",
	"vcmplt_osss",
	"vcmpneqpd",
	"vcmpneqps",
	"vcmpneqsd",
	"vcmpneqss",
	"vcmpneq_oqpd",
	"vcmpneq_oqps",
	"vcmpneq_oqsd",
	"vcmpneq_oqss",
	"vcmpneq_ospd",
	"vcmpneq_osps",
	"vcmpneq_ossd",
	"vcmpneq_osss",
	"vcmpneq_uqpd",
	"vcmpneq_uqps",
	"vcmpneq_uqsd",
	"vcmpneq_uqss",
	"vcmpneq_uspd",
	"vcmpneq_usps",
	"vcmpneq_ussd",
	"vcmpneq_usss",
	"vcmpngepd",
	"vcmpngeps",
	"vcmpngesd",
	"vcmpngess",
	"vcmpnge_uqpd",
	"vcmpnge_uqps",
	"vcmpnge_uqsd",
	"vcmpnge_uqss",
	"vcmpnge_uspd",
	"vcmpnge_usps",
	"vcmpnge_ussd",
	"vcmpnge_usss",
	"vcmpngtpd",
	"vcmpngtps",
	"vcmpngtsd",
	"vcmpngtss",
	"vcmpngt_uqpd",
	"vcmpngt_uqps",
	"vcmpngt_uqsd",
	"vcmpngt_uqss",
	"vcmpngt_uspd",
	"vcmpngt_usps",
	"vcmpngt_ussd",
	"vcmpngt_usss",
	"vcmpnlepd",
	"vcmpnleps",
	"vcmpnlesd",
	"vcmpnless",
	"vcmpnle_uqpd",
	"vcmpnle_uqps",
	"vcmpnle_uqsd",
	"vcmpnle_uqss",
	"vcmpnle_uspd",
	"vcmpnle_usps",
	"vcmpnle_ussd",
	"vcmpnle_usss",
	"vcmpnltpd",
	"vcmpnltps",
	"vcmpnltsd",
	"vcmpnltss",
	"vcmpnlt_uqpd",
	"vcmpnlt_uqps",
	"vcmpnlt_uqsd",
	"vcmpnlt_uqss",
	"vcmpnlt_uspd",
	"vcmpnlt_usps",
	"vcmpnlt_ussd",
	"vcmpnlt_usss",
	"vcmpordpd",
	"vcmpordps",
	"vcmpordsd",
	"vcmpordss",
	"vcmpord_qpd",
	"vcmpord_qps",
	"vcmpord_qsd",
	"vcmpord_qss",
	"vcmpord_spd",
	"vcmpord_sps",
	"vcmpord_ssd",
	"vcmpord_sss",
	"vcmppd",
	"vcmpps",
	"vcmpsd",
	"vcmpss",
	"vcmptruepd",
	"vcmptrueps",
	"vcmptruesd",
	"vcmptruess",
	"vcmptrue_uqpd",
	"vcmptrue_uqps",
	"vcmptrue_uqsd",
	"vcmptrue_uqss",
	"vcmptrue_uspd",
	"vcmptrue_usps",
	"vcmptrue_ussd",
	"vcmptrue_usss",
	"vcmpunordpd",
	"vcmpunordps",
	"vcmpunordsd",
	"vcmpunordss",
	"vcmpunord_qpd",
	"vcmpunord_qps",
	"vcmpunord_qsd",
	"vcmpunord_qss",
	"vcmpunord_spd",
	"vcmpunord_sps",
	"vcmpunord_ssd",
	"vcmpunord_sss",
	"vcomisd",
	"vcomiss",
	"vcvtdq2pd",
	"vcvtdq2ps",
	"vcvtpd2dq",
	"vcvtpd2ps",
	"vcvtph2ps",
	"vcvtps2dq",
	"vcvtps2pd",
	"vcvtps2ph",
	"vcvtsd2si",
	"vcvtsd2ss",
	"vcvtsi2sd",
	"vcvtsi2ss",
	"vcvtss2sd",
	"vcvtss2si",
	"vcvttpd2dq",
	"vcvttps2dq",
	"vcvttsd2si",
	"vcvttss2si",
	"vdivpd",
	"vdivps",
	"vdivsd",
	"vdivss",
	"vdppd",
	"vdpps",
	"verr",
	"verw",
	"vextractf128",
	"vextracti128",
	"vextractps",
	"vfmadd123pd",
	"vfmadd123ps",
	"vfmadd123sd",
	"vfmadd123ss",
	"vfmadd132pd",
	"vfmadd132ps",
	"vfmadd132sd",
	"vfmadd132ss",
	"vfmadd213pd",
	"vfmadd213ps",
	"vfmadd213sd",
	"vfmadd213ss",
	"vfmadd231pd",
	"vfmadd231ps",
	"vfmadd231sd",
	"vfmadd231ss",
	"vfmadd312pd",
	"vfmadd312ps",
	"vfmadd312sd",
	"vfmadd312ss",
	"vfmadd321pd",
	"vfmadd321ps",
	"vfmadd321sd",
	"vfmadd321ss",
	"vfmaddpd",
	"vfmaddps",
	"vfmaddsd",
	"vfmaddss",
	"vfmaddsub123pd",
	"vfmaddsub123ps",
	"vfmaddsub132pd",
	"vfmaddsub132ps",
	"vfmaddsub213pd",
	"vfmaddsub213ps",
	"vfmaddsub231pd",
	"vfmaddsub231ps",
	"vfmaddsub312pd",
	"vfmaddsub312ps",
	"vfmaddsub321pd",
	"vfmaddsub321ps",
	"vfmaddsubpd",
	"vfmaddsubps",
	"vfmsub123pd",
	"vfmsub123ps",
	"vfmsub123sd",
	"vfmsub123ss",
	"vfmsub132pd",
	"vfmsub132ps",
	"vfmsub132sd",
	"vfmsub132ss",
	"vfmsub213pd",
	"vfmsub213ps",
	"vfmsub213sd",
	"vfmsub213ss",
	"vfmsub231pd",
	"vfmsub231ps",
	"vfmsub231sd",
	"vfmsub231ss",
	"vfmsub312pd",
	"vfmsub312ps",
	"vfmsub312sd",
	"vfmsub312ss",
	"vfmsub321pd",
	"vfmsub321ps",
	"vfmsub321sd",
	"vfmsub321ss",
	"vfmsubadd123pd",
	"vfmsubadd123ps",
	"vfmsubadd132pd",
	"vfmsubadd132ps",
	"vfmsubadd213pd",
	"vfmsubadd213ps",
	"vfmsubadd231pd",
	"vfmsubadd231ps",
	"vfmsubadd312pd",
	"vfmsubadd312ps",
	"vfmsubadd321pd",
	"vfmsubadd321ps",
	"vfmsubaddpd",
	"vfmsubaddps",
	"vfmsubpd",
	"vfmsubps",
	"vfmsubsd",
	"vfmsubss",
	"vfnmadd123pd",
	"vfnmadd123ps",
	"vfnmadd123sd",
	"vfnmadd123ss",
	"vfnmadd132pd",
	"vfnmadd132ps",
	"vfnmadd132sd",
	"vfnmadd132ss",
	"vfnmadd213pd",
	"vfnmadd213ps",
	"vfnmadd213sd",
	"vfnmadd213ss",
	"vfnmadd231pd",
	"vfnmadd231ps",
	"vfnmadd231sd",
	"vfnmadd231ss",
	"vfnmadd312pd",
	"vfnmadd312ps",
	"vfnmadd312sd",
	"vfnmadd312ss",
	"vfnmadd321pd",
	"vfnmadd321ps",
	"vfnmadd321sd",
	"vfnmadd321ss",
	"vfnmaddpd",
	"vfnmaddps",
	"vfnmaddsd",
	"vfnmaddss",
	"vfnmsub123pd",
	"vfnmsub123ps",
	"vfnmsub123sd",
	"vfnmsub123ss",
	"vfnmsub132pd",
	"vfnmsub132ps",
	"vfnmsub132sd",
	"vfnmsub132ss",
	"vfnmsub213pd",
	"vfnmsub213ps",
	"vfnmsub213sd",
	"vfnmsub213ss",
	"vfnmsub231pd",
	"vfnmsub231ps",
	"vfnmsub231sd",
	"vfnmsub231ss",
	"vfnmsub312pd",
	"vfnmsub312ps",
	"vfnmsub312sd",
	"vfnmsub312ss",
	"vfnmsub321pd",
	"vfnmsub321ps",
	"vfnmsub321sd",
	"vfnmsub321ss",
	"vfnmsubpd",
	"vfnmsubps",
	"vfnmsubsd",
	"vfnmsubss",
	"vfrczpd",
	"vfrczps",
	"vfrczsd",
	"vfrczss",
	"vgatherdpd",
	"vgatherdps",
	"vgatherqpd",
	"vgatherqps",
	"vhaddpd",
	"vhaddps",
	"vhsubpd",
	"vhsubps",
	"vinsertf128",
	"vinserti128",
	"vinsertps",
	"vlddqu",
	"vldmxcsr",
	"vldqqu",
	"vmaskmovdqu",
	"vmaskmovpd",
	"vmaskmovps",
	"vmaxpd",
	"vmaxps",
	"vmaxsd",
	"vmaxss",
	"vmcall",
	"vmclear",
	"vminpd",
	"vminps",
	"vminsd",
	"vminss",
	"vmlaunch",
	"vmload",
	"vmmcall",
	"vmovapd",
	"vmovaps",
	"vmovd",
	"vmovddup",
	"vmovdqa",
	"vmovdqu",
	"vmovhlps",
	"vmovhpd",
	"vmovhps",
	"vmovlhps",
	"vmovlpd",
	"vmovlps",
	"vmovmskpd",
	"vmovmskps",
	"vmovntdq",
	"vmovntdqa",
	"vmovntpd",
	"vmovntps",
	"vmovntqq",
	"vmovq",
	"vmovqqa",
	"vmovqqu",
	"vmovsd",
	"vmovshdup",
	"vmovsldup",
	"vmovss",
	"vmovupd",
	"vmovups",
	"vmpsadbw",
	"vmptrld",
	"vmptrst",
	"vmread",
	"vmresume",
	"vmrun",
	"vmsave",
	"vmulpd",
	"vmulps",
	"vmulsd",
	"vmulss",
	"vmwrite",
	"vmxoff",
	"vmxon",
	"vorpd",
	"vorps",
	"vpabsb",
	"vpabsd",
	"vpabsw",
	"vpackssdw",
	"vpacksswb",
	"vpackusdw",
	"vpackuswb",
	"vpaddb",
	"vpaddd",
	"vpaddq",
	"vpaddsb",
	"vpaddsw",
	"vpaddusb",
	"vpaddusw",
	"vpaddw",
	"vpalignr",
	"vpand",
	"vpandn",
	"vpavgb",
	"vpavgw",
	"vpblendd",
	"vpblendvb",
	"vpblendw",
	"vpbroadcastb",
	"vpbroadcastd",
	"vpbroadcastq",
	"vpbroadcastw",
	"vpclmulhqhqdq",
	"vpclmulhqlqdq",
	"vpclmullqhqdq",
	"vpclmullqlqdq",
	"vpclmulqdq",
	"vpcmov",
	"vpcmpeqb",
	"vpcmpeqd",
	"vpcmpeqq",
	"vpcmpeqw",
	"vpcmpestri",
	"vpcmpestrm",
	"vpcmpgtb",
	"vpcmpgtd",
	"vpcmpgtq",
	"vpcmpgtw",
	"vpcmpistri",
	"vpcmpistrm",
	"vpcomb",
	"vpcomd",
	"vpcomq",
	"vpcomub",
	"vpcomud",
	"vpcomuq",
	"vpcomuw",
	"vpcomw",
	"vperm2f128",
	"vperm2i128",
	"vpermd",
	"vpermilpd",
	"vpermilps",
	"vpermpq",
	"vpermps",
	"vpextrb",
	"vpextrd",
	"vpextrq",
	"vpextrw",
	"vpgatherdd",
	"vpgatherdq",
	"vpgatherqd",
	"vpgatherqq",
	"vphaddbd",
	"vphaddbq",
	"vphaddbw",
	"vphaddd",
	"vphadddq",
	"vphaddsw",
	"vphaddubd",
	"vphaddubq",
	"vphaddubw",
	"vphaddudq",
	"vphadduwd",
	"vphadduwq",
	"vphaddw",
	"vphaddwd",
	"vphaddwq",
	"vphminposuw",
	"vphsubbw",
	"vphsubd",
	"vphsubdq",
	"vphsubsw",
	"vphsubw",
	"vphsubwd",
	"vpinsrb",
	"vpinsrd",
	"vpinsrq",
	"vpinsrw",
	"vpmacsdd",
	"vpmacsdqh",
	"vpmacsdql",
	"vpmacssdd",
	"vpmacssdqh",
	"vpmacssdql",
	"vpmacsswd",
	"vpmacssww",
	"vpmacswd",
	"vpmacsww",
	"vpmadcsswd",
	"vpmadcswd",
	"vpmaddubsw",
	"vpmaddwd",
	"vpmaskmovd",
	"vpmaskmovq",
	"vpmaxsb",
	"vpmaxsd",
	"vpmaxsw",
	"vpmaxub",
	"vpmaxud",
	"vpmaxuw",
	"vpminsb",
	"vpminsd",
	"vpminsw",
	"vpminub",
	"vpminud",
	"vpminuw",
	"vpmovmskb",
	"vpmovsxbd",
	"vpmovsxbq",
	"vpmovsxbw",
	"vpmovsxdq",
	"vpmovsxwd",
	"vpmovsxwq",
	"vpmovzxbd",
	"vpmovzxbq",
	"vpmovzxbw",
	"vpmovzxdq",
	"vpmovzxwd",
	"vpmovzxwq",
	"vpmuldq",
	"vpmulhrsw",
	"vpmulhuw",
	"vpmulhw",
	"vpmulld",
	"vpmullw",
	"vpmuludq",
	"vpor",
	"vpperm",
	"vprotb",
	"vprotd",
	"vprotq",
	"vprotw",
	"vpsadbw",
	"vpshab",
	"vpshad",
	"vpshaq",
	"vpshaw",
	"vpshlb",
	"vpshld",
	"vpshlq",
	"vpshlw",
	"vpshufb",
	"vpshufd",
	"vpshufhw",
	"vpshuflw",
	"vpsignb",
	"vpsignd",
	"vpsignw",
	"vpslld",
	"vpslldq",
	"vpsllq",
	"vpsllvd",
	"vpsllvq",
	"vpsllw",
	"vpsrad",
	"vpsravd",
	"vpsraw",
	"vpsrld",
	"vpsrldq",
	"vpsrlq",
	"vpsrlvd",
	"vpsrlvq",
	"vpsrlw",
	"vpsubb",
	"vpsubd",
	"vpsubq",
	"vpsubsb",
	"vpsubsw",
	"vpsubusb",
	"vpsubusw",
	"vpsubw",
	"vptest",
	"vpunpckhbw",
	"vpunpckhdq",
	"vpunpckhqdq",
	"vpunpckhwd",
	"vpunpcklbw",
	"vpunpckldq",
	"vpunpcklqdq",
	"vpunpcklwd",
	"vpxor",
	"vrcpps",
	"vrcpss",
	"vroundpd",
	"vroundps",
	"vroundsd",
	"vroundss",
	"vrsqrtps",
	"vrsqrtss",
	"vshufpd",
	"vshufps",
	"vsqrtpd",
	"vsqrtps",
	"vsqrtsd",
	"vsqrtss",
	"vstmxcsr",
	"vsubpd",
	"vsubps",
	"vsubsd",
	"vsubss",
	"vtestpd",
	"vtestps",
	"vucomisd",
	"vucomiss",
	"vunpckhpd",
	"vunpckhps",
	"vunpcklpd",
	"vunpcklps",
	"vxorpd",
	"vxorps",
	"vzeroall",
	"vzeroupper",
	"wbinvd",
	"wrfsbase",
	"wrgsbase",
	"wrmsr",
	"wrshr",
	"xadd",
	"xbts",
	"xchg",
	"xcryptcbc",
	"xcryptcfb",
	"xcryptctr",
	"xcryptecb",
	"xcryptofb",
	"xgetbv",
	"xlat",
	"xlatb",
	"xor",
	"xorpd",
	"xorps",
	"xrstor",
	"xrstor64",
	"xsave",
	"xsave64",
	"xsaveopt",
	"xsaveopt64",
	"xsetbv",
	"xsha1",
	"xsha256",
	"xstore",
	"cmov",
	"j",
	"set"
};
