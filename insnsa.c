/* This file auto-generated from insns.dat by insns.pl - don't edit it */

#include "nasm.h"
#include "insns.h"

static const struct itemplate instrux_AAA[] = {
    {I_AAA, 0, {0,0,0,0,0}, nasm_bytecodes+21801, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAD[] = {
    {I_AAD, 0, {0,0,0,0,0}, nasm_bytecodes+20757, IF_8086|IF_NOLONG},
    {I_AAD, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+20761, IF_8086|IF_SB|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAM[] = {
    {I_AAM, 0, {0,0,0,0,0}, nasm_bytecodes+20765, IF_8086|IF_NOLONG},
    {I_AAM, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+20769, IF_8086|IF_SB|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_AAS[] = {
    {I_AAS, 0, {0,0,0,0,0}, nasm_bytecodes+21804, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADC[] = {
    {I_ADC, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20773, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20773, IF_8086},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18862, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18862, IF_8086},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18867, IF_386|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18867, IF_386},
    {I_ADC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18872, IF_X64|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18872, IF_X64},
    {I_ADC, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+10189, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+10189, IF_8086},
    {I_ADC, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18877, IF_8086|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18877, IF_8086},
    {I_ADC, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18882, IF_386|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18882, IF_386},
    {I_ADC, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18887, IF_X64|IF_SM},
    {I_ADC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18887, IF_X64},
    {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15310, IF_8086},
    {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15316, IF_386},
    {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15322, IF_X64},
    {I_ADC, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+20777, IF_8086|IF_SM},
    {I_ADC, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+15310, IF_8086|IF_SM},
    {I_ADC, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18892, IF_8086|IF_SM},
    {I_ADC, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+15316, IF_386|IF_SM},
    {I_ADC, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18897, IF_386|IF_SM},
    {I_ADC, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+15322, IF_X64|IF_SM},
    {I_ADC, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18902, IF_X64|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18907, IF_8086|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+15328, IF_8086|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+15334, IF_386|IF_SM},
    {I_ADC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+15340, IF_X64|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18907, IF_8086|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15328, IF_8086|IF_SM},
    {I_ADC, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15334, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADD[] = {
    {I_ADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20781, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20781, IF_8086},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18912, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18912, IF_8086},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18917, IF_386|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18917, IF_386},
    {I_ADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18922, IF_X64|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18922, IF_X64},
    {I_ADD, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+13892, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+13892, IF_8086},
    {I_ADD, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18927, IF_8086|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18927, IF_8086},
    {I_ADD, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18932, IF_386|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18932, IF_386},
    {I_ADD, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18937, IF_X64|IF_SM},
    {I_ADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18937, IF_X64},
    {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15346, IF_8086},
    {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15352, IF_386},
    {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15358, IF_X64},
    {I_ADD, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+20785, IF_8086|IF_SM},
    {I_ADD, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+15346, IF_8086|IF_SM},
    {I_ADD, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18942, IF_8086|IF_SM},
    {I_ADD, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+15352, IF_386|IF_SM},
    {I_ADD, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18947, IF_386|IF_SM},
    {I_ADD, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+15358, IF_X64|IF_SM},
    {I_ADD, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18952, IF_X64|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+18957, IF_8086|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+15364, IF_8086|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+15370, IF_386|IF_SM},
    {I_ADD, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+15376, IF_X64|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+18957, IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15364, IF_8086|IF_SM},
    {I_ADD, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15370, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDPD[] = {
    {I_ADDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17278, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDPS[] = {
    {I_ADDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16558, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSD[] = {
    {I_ADDSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17284, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSS[] = {
    {I_ADDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16564, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSUBPD[] = {
    {I_ADDSUBPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17554, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ADDSUBPS[] = {
    {I_ADDSUBPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17560, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESDEC[] = {
    {I_AESDEC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8716, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESDECLAST[] = {
    {I_AESDECLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8723, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESENC[] = {
    {I_AESENC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8702, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESENCLAST[] = {
    {I_AESENCLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8709, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESIMC[] = {
    {I_AESIMC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8730, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AESKEYGENASSIST[] = {
    {I_AESKEYGENASSIST, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4290, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_AND[] = {
    {I_AND, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20789, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20789, IF_8086},
    {I_AND, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18962, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18962, IF_8086},
    {I_AND, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18967, IF_386|IF_SM},
    {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18967, IF_386},
    {I_AND, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18972, IF_X64|IF_SM},
    {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18972, IF_X64},
    {I_AND, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+14172, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14172, IF_8086},
    {I_AND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+18977, IF_8086|IF_SM},
    {I_AND, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+18977, IF_8086},
    {I_AND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+18982, IF_386|IF_SM},
    {I_AND, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+18982, IF_386},
    {I_AND, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+18987, IF_X64|IF_SM},
    {I_AND, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+18987, IF_X64},
    {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15382, IF_8086},
    {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15388, IF_386},
    {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15394, IF_X64},
    {I_AND, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+20793, IF_8086|IF_SM},
    {I_AND, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+15382, IF_8086|IF_SM},
    {I_AND, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+18992, IF_8086|IF_SM},
    {I_AND, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+15388, IF_386|IF_SM},
    {I_AND, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+18997, IF_386|IF_SM},
    {I_AND, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+15394, IF_X64|IF_SM},
    {I_AND, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+19002, IF_X64|IF_SM},
    {I_AND, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+19007, IF_8086|IF_SM},
    {I_AND, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+15400, IF_8086|IF_SM},
    {I_AND, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+15406, IF_386|IF_SM},
    {I_AND, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+15412, IF_X64|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+19007, IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15400, IF_8086|IF_SM},
    {I_AND, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15406, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDN[] = {
    {I_ANDN, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, nasm_bytecodes+15142, IF_FUTURE|IF_BMI1},
    {I_ANDN, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, nasm_bytecodes+15149, IF_LONG|IF_FUTURE|IF_BMI1},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDNPD[] = {
    {I_ANDNPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17290, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDNPS[] = {
    {I_ANDNPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16570, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDPD[] = {
    {I_ANDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17296, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ANDPS[] = {
    {I_ANDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16576, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_ARPL[] = {
    {I_ARPL, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20797, IF_286|IF_PROT|IF_SM|IF_NOLONG},
    {I_ARPL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20797, IF_286|IF_PROT|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_BB0_RESET[] = {
    {I_BB0_RESET, 0, {0,0,0,0,0}, nasm_bytecodes+20801, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_BB1_RESET[] = {
    {I_BB1_RESET, 0, {0,0,0,0,0}, nasm_bytecodes+20805, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_BEXTR[] = {
    {I_BEXTR, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, nasm_bytecodes+15156, IF_FUTURE|IF_BMI1},
    {I_BEXTR, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, nasm_bytecodes+15163, IF_LONG|IF_FUTURE|IF_BMI1},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDPD[] = {
    {I_BLENDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4122, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDPS[] = {
    {I_BLENDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4130, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDVPD[] = {
    {I_BLENDVPD, 3, {XMMREG,RM_XMM,XMM0,0,0}, nasm_bytecodes+8422, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLENDVPS[] = {
    {I_BLENDVPS, 3, {XMMREG,RM_XMM,XMM0,0,0}, nasm_bytecodes+8429, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSI[] = {
    {I_BLSI, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+15170, IF_FUTURE|IF_BMI1},
    {I_BLSI, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+15177, IF_LONG|IF_FUTURE|IF_BMI1},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSMSK[] = {
    {I_BLSMSK, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+15184, IF_FUTURE|IF_BMI1},
    {I_BLSMSK, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+15191, IF_LONG|IF_FUTURE|IF_BMI1},
    ITEMPLATE_END
};

static const struct itemplate instrux_BLSR[] = {
    {I_BLSR, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+15198, IF_FUTURE|IF_BMI1},
    {I_BLSR, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+15205, IF_LONG|IF_FUTURE|IF_BMI1},
    ITEMPLATE_END
};

static const struct itemplate instrux_BOUND[] = {
    {I_BOUND, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+19012, IF_186|IF_NOLONG},
    {I_BOUND, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+19017, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSF[] = {
    {I_BSF, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15418, IF_386|IF_SM},
    {I_BSF, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15418, IF_386},
    {I_BSF, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15424, IF_386|IF_SM},
    {I_BSF, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15424, IF_386},
    {I_BSF, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15430, IF_X64|IF_SM},
    {I_BSF, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15430, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSR[] = {
    {I_BSR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15436, IF_386|IF_SM},
    {I_BSR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15436, IF_386},
    {I_BSR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15442, IF_386|IF_SM},
    {I_BSR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15442, IF_386},
    {I_BSR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15448, IF_X64|IF_SM},
    {I_BSR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15448, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_BSWAP[] = {
    {I_BSWAP, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15454, IF_486},
    {I_BSWAP, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+15460, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_BT[] = {
    {I_BT, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15466, IF_386|IF_SM},
    {I_BT, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15466, IF_386},
    {I_BT, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15472, IF_386|IF_SM},
    {I_BT, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15472, IF_386},
    {I_BT, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15478, IF_X64|IF_SM},
    {I_BT, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15478, IF_X64},
    {I_BT, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7218, IF_386|IF_SB},
    {I_BT, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7225, IF_386|IF_SB},
    {I_BT, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7232, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTC[] = {
    {I_BTC, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15484, IF_386|IF_SM},
    {I_BTC, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15484, IF_386},
    {I_BTC, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15490, IF_386|IF_SM},
    {I_BTC, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15490, IF_386},
    {I_BTC, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15496, IF_X64|IF_SM},
    {I_BTC, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15496, IF_X64},
    {I_BTC, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7239, IF_386|IF_SB},
    {I_BTC, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7246, IF_386|IF_SB},
    {I_BTC, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7253, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTR[] = {
    {I_BTR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15502, IF_386|IF_SM},
    {I_BTR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15502, IF_386},
    {I_BTR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15508, IF_386|IF_SM},
    {I_BTR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15508, IF_386},
    {I_BTR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15514, IF_X64|IF_SM},
    {I_BTR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15514, IF_X64},
    {I_BTR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7260, IF_386|IF_SB},
    {I_BTR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7267, IF_386|IF_SB},
    {I_BTR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7274, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BTS[] = {
    {I_BTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15520, IF_386|IF_SM},
    {I_BTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15520, IF_386},
    {I_BTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15526, IF_386|IF_SM},
    {I_BTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15526, IF_386},
    {I_BTS, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15532, IF_X64|IF_SM},
    {I_BTS, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15532, IF_X64},
    {I_BTS, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+7281, IF_386|IF_SB},
    {I_BTS, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+7288, IF_386|IF_SB},
    {I_BTS, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+7295, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_BZHI[] = {
    {I_BZHI, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, nasm_bytecodes+15212, IF_FUTURE|IF_BMI2},
    {I_BZHI, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, nasm_bytecodes+15219, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CALL[] = {
    {I_CALL, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19022, IF_8086},
    {I_CALL, 1, {IMMEDIATE|NEAR,0,0,0,0}, nasm_bytecodes+19022, IF_8086},
    {I_CALL, 1, {IMMEDIATE|FAR,0,0,0,0}, nasm_bytecodes+15538, IF_8086|IF_NOLONG},
    {I_CALL, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+19027, IF_8086},
    {I_CALL, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+19027, IF_8086},
    {I_CALL, 1, {IMMEDIATE|BITS16|FAR,0,0,0,0}, nasm_bytecodes+15544, IF_8086|IF_NOLONG},
    {I_CALL, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+19032, IF_386},
    {I_CALL, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+19032, IF_386},
    {I_CALL, 1, {IMMEDIATE|BITS32|FAR,0,0,0,0}, nasm_bytecodes+15550, IF_386|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+15556, IF_8086|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+15562, IF_8086|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15562, IF_8086|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+15568, IF_386|IF_NOLONG},
    {I_CALL, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15568, IF_386|IF_NOLONG},
    {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+19037, IF_8086|IF_NOLONG},
    {I_CALL, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+19042, IF_X64},
    {I_CALL, 1, {MEMORY|BITS16|FAR,0,0,0,0}, nasm_bytecodes+19047, IF_8086},
    {I_CALL, 1, {MEMORY|BITS32|FAR,0,0,0,0}, nasm_bytecodes+19052, IF_386},
    {I_CALL, 1, {MEMORY|BITS64|FAR,0,0,0,0}, nasm_bytecodes+19042, IF_X64},
    {I_CALL, 1, {MEMORY|NEAR,0,0,0,0}, nasm_bytecodes+19057, IF_8086},
    {I_CALL, 1, {MEMORY|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+19062, IF_8086},
    {I_CALL, 1, {MEMORY|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+19067, IF_386|IF_NOLONG},
    {I_CALL, 1, {MEMORY|BITS64|NEAR,0,0,0,0}, nasm_bytecodes+19072, IF_X64},
    {I_CALL, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19062, IF_8086},
    {I_CALL, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19067, IF_386|IF_NOLONG},
    {I_CALL, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19077, IF_X64},
    {I_CALL, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19057, IF_8086},
    {I_CALL, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19062, IF_8086},
    {I_CALL, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19067, IF_386|IF_NOLONG},
    {I_CALL, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19077, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CBW[] = {
    {I_CBW, 0, {0,0,0,0,0}, nasm_bytecodes+20809, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CDQ[] = {
    {I_CDQ, 0, {0,0,0,0,0}, nasm_bytecodes+20813, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_CDQE[] = {
    {I_CDQE, 0, {0,0,0,0,0}, nasm_bytecodes+20817, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLC[] = {
    {I_CLC, 0, {0,0,0,0,0}, nasm_bytecodes+20549, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLD[] = {
    {I_CLD, 0, {0,0,0,0,0}, nasm_bytecodes+21807, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLFLUSH[] = {
    {I_CLFLUSH, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20702, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLGI[] = {
    {I_CLGI, 0, {0,0,0,0,0}, nasm_bytecodes+19082, IF_X64|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLI[] = {
    {I_CLI, 0, {0,0,0,0,0}, nasm_bytecodes+21810, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CLTS[] = {
    {I_CLTS, 0, {0,0,0,0,0}, nasm_bytecodes+20821, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMC[] = {
    {I_CMC, 0, {0,0,0,0,0}, nasm_bytecodes+21813, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMP[] = {
    {I_CMP, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20825, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20825, IF_8086},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19087, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19087, IF_8086},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19092, IF_386|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19092, IF_386},
    {I_CMP, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19097, IF_X64|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19097, IF_X64},
    {I_CMP, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+14130, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14130, IF_8086},
    {I_CMP, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+19102, IF_8086|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19102, IF_8086},
    {I_CMP, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+19107, IF_386|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19107, IF_386},
    {I_CMP, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+19112, IF_X64|IF_SM},
    {I_CMP, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19112, IF_X64},
    {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15574, IF_8086},
    {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15580, IF_386},
    {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15586, IF_X64},
    {I_CMP, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+20829, IF_8086|IF_SM},
    {I_CMP, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+15574, IF_8086|IF_SM},
    {I_CMP, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+19117, IF_8086|IF_SM},
    {I_CMP, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+15580, IF_386|IF_SM},
    {I_CMP, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+19122, IF_386|IF_SM},
    {I_CMP, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+15586, IF_X64|IF_SM},
    {I_CMP, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+19127, IF_X64|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+19132, IF_8086|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+15592, IF_8086|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+15598, IF_386|IF_SM},
    {I_CMP, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+15604, IF_X64|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+19132, IF_8086|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15592, IF_8086|IF_SM},
    {I_CMP, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15598, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQPD[] = {
    {I_CMPEQPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3946, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQPS[] = {
    {I_CMPEQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3770, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQSD[] = {
    {I_CMPEQSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3954, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPEQSS[] = {
    {I_CMPEQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3778, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLEPD[] = {
    {I_CMPLEPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3962, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLEPS[] = {
    {I_CMPLEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3786, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLESD[] = {
    {I_CMPLESD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3970, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLESS[] = {
    {I_CMPLESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3794, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTPD[] = {
    {I_CMPLTPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3978, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTPS[] = {
    {I_CMPLTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3802, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTSD[] = {
    {I_CMPLTSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3986, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPLTSS[] = {
    {I_CMPLTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3810, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQPD[] = {
    {I_CMPNEQPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+3994, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQPS[] = {
    {I_CMPNEQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3818, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQSD[] = {
    {I_CMPNEQSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4002, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNEQSS[] = {
    {I_CMPNEQSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3826, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLEPD[] = {
    {I_CMPNLEPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4010, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLEPS[] = {
    {I_CMPNLEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3834, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLESD[] = {
    {I_CMPNLESD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4018, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLESS[] = {
    {I_CMPNLESS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3842, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTPD[] = {
    {I_CMPNLTPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4026, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTPS[] = {
    {I_CMPNLTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3850, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTSD[] = {
    {I_CMPNLTSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4034, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPNLTSS[] = {
    {I_CMPNLTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3858, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDPD[] = {
    {I_CMPORDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4042, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDPS[] = {
    {I_CMPORDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3866, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDSD[] = {
    {I_CMPORDSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4050, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPORDSS[] = {
    {I_CMPORDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3874, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPPD[] = {
    {I_CMPPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+8128, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPPS[] = {
    {I_CMPPS, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7855, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    {I_CMPPS, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+7855, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSB[] = {
    {I_CMPSB, 0, {0,0,0,0,0}, nasm_bytecodes+20833, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSD[] = {
    {I_CMPSD, 0, {0,0,0,0,0}, nasm_bytecodes+19137, IF_386},
    {I_CMPSD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+8135, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSQ[] = {
    {I_CMPSQ, 0, {0,0,0,0,0}, nasm_bytecodes+19142, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSS[] = {
    {I_CMPSS, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7862, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    {I_CMPSS, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+7862, IF_KATMAI|IF_SSE|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPSW[] = {
    {I_CMPSW, 0, {0,0,0,0,0}, nasm_bytecodes+19147, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDPD[] = {
    {I_CMPUNORDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4058, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDPS[] = {
    {I_CMPUNORDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3882, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDSD[] = {
    {I_CMPUNORDSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+4066, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPUNORDSS[] = {
    {I_CMPUNORDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+3890, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG[] = {
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19152, IF_PENT|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19152, IF_PENT},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15610, IF_PENT|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15610, IF_PENT},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15616, IF_PENT|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15616, IF_PENT},
    {I_CMPXCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15622, IF_X64|IF_SM},
    {I_CMPXCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15622, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG16B[] = {
    {I_CMPXCHG16B, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15640, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG486[] = {
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19157, IF_486|IF_SM|IF_UNDOC},
    {I_CMPXCHG486, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+19157, IF_486|IF_UNDOC},
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15628, IF_486|IF_SM|IF_UNDOC},
    {I_CMPXCHG486, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15628, IF_486|IF_UNDOC},
    {I_CMPXCHG486, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15634, IF_486|IF_SM|IF_UNDOC},
    {I_CMPXCHG486, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15634, IF_486|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMPXCHG8B[] = {
    {I_CMPXCHG8B, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+15641, IF_PENT},
    ITEMPLATE_END
};

static const struct itemplate instrux_COMISD[] = {
    {I_COMISD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17302, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_COMISS[] = {
    {I_COMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16582, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPUID[] = {
    {I_CPUID, 0, {0,0,0,0,0}, nasm_bytecodes+20837, IF_PENT},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPU_READ[] = {
    {I_CPU_READ, 0, {0,0,0,0,0}, nasm_bytecodes+20841, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CPU_WRITE[] = {
    {I_CPU_WRITE, 0, {0,0,0,0,0}, nasm_bytecodes+20845, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CQO[] = {
    {I_CQO, 0, {0,0,0,0,0}, nasm_bytecodes+20849, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CRC32[] = {
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+4227, IF_SSE42},
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+4210, IF_SSE42},
    {I_CRC32, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+4218, IF_SSE42},
    {I_CRC32, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+4226, IF_SSE42|IF_X64},
    {I_CRC32, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+4234, IF_SSE42|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTDQ2PD[] = {
    {I_CVTDQ2PD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17308, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTDQ2PS[] = {
    {I_CVTDQ2PS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17314, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2DQ[] = {
    {I_CVTPD2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17320, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2PI[] = {
    {I_CVTPD2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+17326, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPD2PS[] = {
    {I_CVTPD2PS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17332, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPI2PD[] = {
    {I_CVTPI2PD, 2, {XMMREG,RM_MMX,0,0,0}, nasm_bytecodes+17338, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPI2PS[] = {
    {I_CVTPI2PS, 2, {XMMREG,RM_MMX|BITS64,0,0,0}, nasm_bytecodes+16588, IF_KATMAI|IF_SSE|IF_MMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2DQ[] = {
    {I_CVTPS2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17344, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2PD[] = {
    {I_CVTPS2PD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17350, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTPS2PI[] = {
    {I_CVTPS2PI, 2, {MMXREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+16594, IF_KATMAI|IF_SSE|IF_MMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSD2SI[] = {
    {I_CVTSD2SI, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+8143, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+8143, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTSD2SI, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8142, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+8142, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSD2SS[] = {
    {I_CVTSD2SS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17356, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSI2SD[] = {
    {I_CVTSI2SD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+8150, IF_WILLAMETTE|IF_SSE2|IF_SD|IF_AR1},
    {I_CVTSI2SD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8150, IF_WILLAMETTE|IF_SSE2|IF_SD|IF_AR1},
    {I_CVTSI2SD, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8149, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSI2SS[] = {
    {I_CVTSI2SS, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+7870, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSI2SS, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+7870, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSI2SS, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+7869, IF_X64|IF_SSE|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSS2SD[] = {
    {I_CVTSS2SD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17362, IF_WILLAMETTE|IF_SSE2|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTSS2SI[] = {
    {I_CVTSS2SI, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+7877, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSS2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+7877, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSS2SI, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+7876, IF_X64|IF_SSE|IF_SD|IF_AR1},
    {I_CVTSS2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+7876, IF_X64|IF_SSE|IF_SD|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPD2DQ[] = {
    {I_CVTTPD2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17374, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPD2PI[] = {
    {I_CVTTPD2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+17368, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPS2DQ[] = {
    {I_CVTTPS2DQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17380, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTPS2PI[] = {
    {I_CVTTPS2PI, 2, {MMXREG,RM_XMM,0,0,0}, nasm_bytecodes+16600, IF_KATMAI|IF_SSE|IF_MMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTSD2SI[] = {
    {I_CVTTSD2SI, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+8157, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+8157, IF_WILLAMETTE|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8156, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    {I_CVTTSD2SI, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+8156, IF_X64|IF_SSE2|IF_SQ|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CVTTSS2SI[] = {
    {I_CVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM,0,0,0}, nasm_bytecodes+7884, IF_KATMAI|IF_SSE|IF_SD|IF_AR1},
    {I_CVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM,0,0,0}, nasm_bytecodes+7883, IF_X64|IF_SSE|IF_SD|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_CWD[] = {
    {I_CWD, 0, {0,0,0,0,0}, nasm_bytecodes+20853, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_CWDE[] = {
    {I_CWDE, 0, {0,0,0,0,0}, nasm_bytecodes+20857, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_DAA[] = {
    {I_DAA, 0, {0,0,0,0,0}, nasm_bytecodes+21816, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_DAS[] = {
    {I_DAS, 0, {0,0,0,0,0}, nasm_bytecodes+21819, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_DB[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DD[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DEC[] = {
    {I_DEC, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+20861, IF_8086|IF_NOLONG},
    {I_DEC, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+20865, IF_386|IF_NOLONG},
    {I_DEC, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+20869, IF_8086},
    {I_DEC, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19162, IF_8086},
    {I_DEC, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19167, IF_386},
    {I_DEC, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19172, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIV[] = {
    {I_DIV, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+20873, IF_8086},
    {I_DIV, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19177, IF_8086},
    {I_DIV, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19182, IF_386},
    {I_DIV, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19187, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVPD[] = {
    {I_DIVPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17386, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVPS[] = {
    {I_DIVPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16606, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVSD[] = {
    {I_DIVSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17392, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_DIVSS[] = {
    {I_DIVSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16612, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_DMINT[] = {
    {I_DMINT, 0, {0,0,0,0,0}, nasm_bytecodes+20877, IF_P6|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_DO[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DPPD[] = {
    {I_DPPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4138, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_DPPS[] = {
    {I_DPPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4146, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_DQ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DT[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DW[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_DY[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_EMMS[] = {
    {I_EMMS, 0, {0,0,0,0,0}, nasm_bytecodes+20881, IF_PENT|IF_MMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_ENTER[] = {
    {I_ENTER, 2, {IMMEDIATE,IMMEDIATE,0,0,0}, nasm_bytecodes+19192, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_EQU[] = {
    {I_EQU, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+3960, IF_8086},
    {I_EQU, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+3960, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_EXTRACTPS[] = {
    {I_EXTRACTPS, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+1, IF_SSE41},
    {I_EXTRACTPS, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+0, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_EXTRQ[] = {
    {I_EXTRQ, 3, {XMMREG,IMMEDIATE,IMMEDIATE,0,0}, nasm_bytecodes+4106, IF_SSE4A|IF_AMD},
    {I_EXTRQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17626, IF_SSE4A|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_F2XM1[] = {
    {I_F2XM1, 0, {0,0,0,0,0}, nasm_bytecodes+20885, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FABS[] = {
    {I_FABS, 0, {0,0,0,0,0}, nasm_bytecodes+20889, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FADD[] = {
    {I_FADD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+20893, IF_8086|IF_FPU},
    {I_FADD, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+20897, IF_8086|IF_FPU},
    {I_FADD, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+19197, IF_8086|IF_FPU},
    {I_FADD, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19202, IF_8086|IF_FPU},
    {I_FADD, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19197, IF_8086|IF_FPU},
    {I_FADD, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19207, IF_8086|IF_FPU},
    {I_FADD, 0, {0,0,0,0,0}, nasm_bytecodes+20901, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FADDP[] = {
    {I_FADDP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19212, IF_8086|IF_FPU},
    {I_FADDP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19212, IF_8086|IF_FPU},
    {I_FADDP, 0, {0,0,0,0,0}, nasm_bytecodes+20901, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FBLD[] = {
    {I_FBLD, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+20905, IF_8086|IF_FPU},
    {I_FBLD, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20905, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FBSTP[] = {
    {I_FBSTP, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+20909, IF_8086|IF_FPU},
    {I_FBSTP, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20909, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCHS[] = {
    {I_FCHS, 0, {0,0,0,0,0}, nasm_bytecodes+20913, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCLEX[] = {
    {I_FCLEX, 0, {0,0,0,0,0}, nasm_bytecodes+19217, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVB[] = {
    {I_FCMOVB, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19222, IF_P6|IF_FPU},
    {I_FCMOVB, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19227, IF_P6|IF_FPU},
    {I_FCMOVB, 0, {0,0,0,0,0}, nasm_bytecodes+20917, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVBE[] = {
    {I_FCMOVBE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19232, IF_P6|IF_FPU},
    {I_FCMOVBE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19237, IF_P6|IF_FPU},
    {I_FCMOVBE, 0, {0,0,0,0,0}, nasm_bytecodes+20921, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVE[] = {
    {I_FCMOVE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19242, IF_P6|IF_FPU},
    {I_FCMOVE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19247, IF_P6|IF_FPU},
    {I_FCMOVE, 0, {0,0,0,0,0}, nasm_bytecodes+20925, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNB[] = {
    {I_FCMOVNB, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19252, IF_P6|IF_FPU},
    {I_FCMOVNB, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19257, IF_P6|IF_FPU},
    {I_FCMOVNB, 0, {0,0,0,0,0}, nasm_bytecodes+20929, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNBE[] = {
    {I_FCMOVNBE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19262, IF_P6|IF_FPU},
    {I_FCMOVNBE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19267, IF_P6|IF_FPU},
    {I_FCMOVNBE, 0, {0,0,0,0,0}, nasm_bytecodes+20933, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNE[] = {
    {I_FCMOVNE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19272, IF_P6|IF_FPU},
    {I_FCMOVNE, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19277, IF_P6|IF_FPU},
    {I_FCMOVNE, 0, {0,0,0,0,0}, nasm_bytecodes+20937, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVNU[] = {
    {I_FCMOVNU, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19282, IF_P6|IF_FPU},
    {I_FCMOVNU, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19287, IF_P6|IF_FPU},
    {I_FCMOVNU, 0, {0,0,0,0,0}, nasm_bytecodes+20941, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCMOVU[] = {
    {I_FCMOVU, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19292, IF_P6|IF_FPU},
    {I_FCMOVU, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19297, IF_P6|IF_FPU},
    {I_FCMOVU, 0, {0,0,0,0,0}, nasm_bytecodes+20945, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOM[] = {
    {I_FCOM, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+20949, IF_8086|IF_FPU},
    {I_FCOM, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+20953, IF_8086|IF_FPU},
    {I_FCOM, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19302, IF_8086|IF_FPU},
    {I_FCOM, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19307, IF_8086|IF_FPU},
    {I_FCOM, 0, {0,0,0,0,0}, nasm_bytecodes+20957, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMI[] = {
    {I_FCOMI, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19312, IF_P6|IF_FPU},
    {I_FCOMI, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19317, IF_P6|IF_FPU},
    {I_FCOMI, 0, {0,0,0,0,0}, nasm_bytecodes+20961, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMIP[] = {
    {I_FCOMIP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19322, IF_P6|IF_FPU},
    {I_FCOMIP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19327, IF_P6|IF_FPU},
    {I_FCOMIP, 0, {0,0,0,0,0}, nasm_bytecodes+20965, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMP[] = {
    {I_FCOMP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+20969, IF_8086|IF_FPU},
    {I_FCOMP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+20973, IF_8086|IF_FPU},
    {I_FCOMP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19332, IF_8086|IF_FPU},
    {I_FCOMP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19337, IF_8086|IF_FPU},
    {I_FCOMP, 0, {0,0,0,0,0}, nasm_bytecodes+20977, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOMPP[] = {
    {I_FCOMPP, 0, {0,0,0,0,0}, nasm_bytecodes+20981, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FCOS[] = {
    {I_FCOS, 0, {0,0,0,0,0}, nasm_bytecodes+20985, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDECSTP[] = {
    {I_FDECSTP, 0, {0,0,0,0,0}, nasm_bytecodes+20989, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDISI[] = {
    {I_FDISI, 0, {0,0,0,0,0}, nasm_bytecodes+19342, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIV[] = {
    {I_FDIV, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+20993, IF_8086|IF_FPU},
    {I_FDIV, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+20997, IF_8086|IF_FPU},
    {I_FDIV, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+19347, IF_8086|IF_FPU},
    {I_FDIV, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19352, IF_8086|IF_FPU},
    {I_FDIV, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19347, IF_8086|IF_FPU},
    {I_FDIV, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19357, IF_8086|IF_FPU},
    {I_FDIV, 0, {0,0,0,0,0}, nasm_bytecodes+21001, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVP[] = {
    {I_FDIVP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19362, IF_8086|IF_FPU},
    {I_FDIVP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19362, IF_8086|IF_FPU},
    {I_FDIVP, 0, {0,0,0,0,0}, nasm_bytecodes+21001, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVR[] = {
    {I_FDIVR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21005, IF_8086|IF_FPU},
    {I_FDIVR, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21009, IF_8086|IF_FPU},
    {I_FDIVR, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+19367, IF_8086|IF_FPU},
    {I_FDIVR, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19367, IF_8086|IF_FPU},
    {I_FDIVR, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19372, IF_8086|IF_FPU},
    {I_FDIVR, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19377, IF_8086|IF_FPU},
    {I_FDIVR, 0, {0,0,0,0,0}, nasm_bytecodes+21013, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FDIVRP[] = {
    {I_FDIVRP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19382, IF_8086|IF_FPU},
    {I_FDIVRP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19382, IF_8086|IF_FPU},
    {I_FDIVRP, 0, {0,0,0,0,0}, nasm_bytecodes+21013, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FEMMS[] = {
    {I_FEMMS, 0, {0,0,0,0,0}, nasm_bytecodes+21017, IF_PENT|IF_3DNOW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FENI[] = {
    {I_FENI, 0, {0,0,0,0,0}, nasm_bytecodes+19387, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FFREE[] = {
    {I_FFREE, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19392, IF_8086|IF_FPU},
    {I_FFREE, 0, {0,0,0,0,0}, nasm_bytecodes+21021, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FFREEP[] = {
    {I_FFREEP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19397, IF_286|IF_FPU|IF_UNDOC},
    {I_FFREEP, 0, {0,0,0,0,0}, nasm_bytecodes+21025, IF_286|IF_FPU|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIADD[] = {
    {I_FIADD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21029, IF_8086|IF_FPU},
    {I_FIADD, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21033, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FICOM[] = {
    {I_FICOM, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21037, IF_8086|IF_FPU},
    {I_FICOM, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21041, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FICOMP[] = {
    {I_FICOMP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21045, IF_8086|IF_FPU},
    {I_FICOMP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21049, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIDIV[] = {
    {I_FIDIV, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21053, IF_8086|IF_FPU},
    {I_FIDIV, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21057, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIDIVR[] = {
    {I_FIDIVR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21061, IF_8086|IF_FPU},
    {I_FIDIVR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21065, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FILD[] = {
    {I_FILD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21069, IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21073, IF_8086|IF_FPU},
    {I_FILD, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21077, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIMUL[] = {
    {I_FIMUL, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21081, IF_8086|IF_FPU},
    {I_FIMUL, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21085, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FINCSTP[] = {
    {I_FINCSTP, 0, {0,0,0,0,0}, nasm_bytecodes+21089, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FINIT[] = {
    {I_FINIT, 0, {0,0,0,0,0}, nasm_bytecodes+19402, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FIST[] = {
    {I_FIST, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21093, IF_8086|IF_FPU},
    {I_FIST, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21097, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISTP[] = {
    {I_FISTP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21101, IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21105, IF_8086|IF_FPU},
    {I_FISTP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21109, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISTTP[] = {
    {I_FISTTP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21113, IF_PRESCOTT|IF_FPU},
    {I_FISTTP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21117, IF_PRESCOTT|IF_FPU},
    {I_FISTTP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21121, IF_PRESCOTT|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISUB[] = {
    {I_FISUB, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21125, IF_8086|IF_FPU},
    {I_FISUB, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21129, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FISUBR[] = {
    {I_FISUBR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21133, IF_8086|IF_FPU},
    {I_FISUBR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+21137, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLD[] = {
    {I_FLD, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21141, IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21145, IF_8086|IF_FPU},
    {I_FLD, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+21149, IF_8086|IF_FPU},
    {I_FLD, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19407, IF_8086|IF_FPU},
    {I_FLD, 0, {0,0,0,0,0}, nasm_bytecodes+21153, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLD1[] = {
    {I_FLD1, 0, {0,0,0,0,0}, nasm_bytecodes+21157, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDCW[] = {
    {I_FLDCW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+21161, IF_8086|IF_FPU|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDENV[] = {
    {I_FLDENV, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+21165, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDL2E[] = {
    {I_FLDL2E, 0, {0,0,0,0,0}, nasm_bytecodes+21169, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDL2T[] = {
    {I_FLDL2T, 0, {0,0,0,0,0}, nasm_bytecodes+21173, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDLG2[] = {
    {I_FLDLG2, 0, {0,0,0,0,0}, nasm_bytecodes+21177, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDLN2[] = {
    {I_FLDLN2, 0, {0,0,0,0,0}, nasm_bytecodes+21181, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDPI[] = {
    {I_FLDPI, 0, {0,0,0,0,0}, nasm_bytecodes+21185, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FLDZ[] = {
    {I_FLDZ, 0, {0,0,0,0,0}, nasm_bytecodes+21189, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FMUL[] = {
    {I_FMUL, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21193, IF_8086|IF_FPU},
    {I_FMUL, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21197, IF_8086|IF_FPU},
    {I_FMUL, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+19412, IF_8086|IF_FPU},
    {I_FMUL, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19412, IF_8086|IF_FPU},
    {I_FMUL, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19417, IF_8086|IF_FPU},
    {I_FMUL, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19422, IF_8086|IF_FPU},
    {I_FMUL, 0, {0,0,0,0,0}, nasm_bytecodes+21201, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FMULP[] = {
    {I_FMULP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19427, IF_8086|IF_FPU},
    {I_FMULP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19427, IF_8086|IF_FPU},
    {I_FMULP, 0, {0,0,0,0,0}, nasm_bytecodes+21201, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNCLEX[] = {
    {I_FNCLEX, 0, {0,0,0,0,0}, nasm_bytecodes+19218, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNDISI[] = {
    {I_FNDISI, 0, {0,0,0,0,0}, nasm_bytecodes+19343, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNENI[] = {
    {I_FNENI, 0, {0,0,0,0,0}, nasm_bytecodes+19388, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNINIT[] = {
    {I_FNINIT, 0, {0,0,0,0,0}, nasm_bytecodes+19403, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNOP[] = {
    {I_FNOP, 0, {0,0,0,0,0}, nasm_bytecodes+21205, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSAVE[] = {
    {I_FNSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19433, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTCW[] = {
    {I_FNSTCW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19443, IF_8086|IF_FPU|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTENV[] = {
    {I_FNSTENV, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19448, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FNSTSW[] = {
    {I_FNSTSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19458, IF_8086|IF_FPU|IF_SW},
    {I_FNSTSW, 1, {REG_AX,0,0,0,0}, nasm_bytecodes+19463, IF_286|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPATAN[] = {
    {I_FPATAN, 0, {0,0,0,0,0}, nasm_bytecodes+21209, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPREM[] = {
    {I_FPREM, 0, {0,0,0,0,0}, nasm_bytecodes+21213, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPREM1[] = {
    {I_FPREM1, 0, {0,0,0,0,0}, nasm_bytecodes+21217, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FPTAN[] = {
    {I_FPTAN, 0, {0,0,0,0,0}, nasm_bytecodes+21221, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FRNDINT[] = {
    {I_FRNDINT, 0, {0,0,0,0,0}, nasm_bytecodes+21225, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FRSTOR[] = {
    {I_FRSTOR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+21229, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSAVE[] = {
    {I_FSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19432, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSCALE[] = {
    {I_FSCALE, 0, {0,0,0,0,0}, nasm_bytecodes+21233, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSETPM[] = {
    {I_FSETPM, 0, {0,0,0,0,0}, nasm_bytecodes+21237, IF_286|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSIN[] = {
    {I_FSIN, 0, {0,0,0,0,0}, nasm_bytecodes+21241, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSINCOS[] = {
    {I_FSINCOS, 0, {0,0,0,0,0}, nasm_bytecodes+21245, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSQRT[] = {
    {I_FSQRT, 0, {0,0,0,0,0}, nasm_bytecodes+21249, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FST[] = {
    {I_FST, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21253, IF_8086|IF_FPU},
    {I_FST, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21257, IF_8086|IF_FPU},
    {I_FST, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19437, IF_8086|IF_FPU},
    {I_FST, 0, {0,0,0,0,0}, nasm_bytecodes+21261, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTCW[] = {
    {I_FSTCW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19442, IF_8086|IF_FPU|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTENV[] = {
    {I_FSTENV, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19447, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTP[] = {
    {I_FSTP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21265, IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21269, IF_8086|IF_FPU},
    {I_FSTP, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+21273, IF_8086|IF_FPU},
    {I_FSTP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19452, IF_8086|IF_FPU},
    {I_FSTP, 0, {0,0,0,0,0}, nasm_bytecodes+21277, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSTSW[] = {
    {I_FSTSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19457, IF_8086|IF_FPU|IF_SW},
    {I_FSTSW, 1, {REG_AX,0,0,0,0}, nasm_bytecodes+19462, IF_286|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUB[] = {
    {I_FSUB, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21281, IF_8086|IF_FPU},
    {I_FSUB, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21285, IF_8086|IF_FPU},
    {I_FSUB, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+19467, IF_8086|IF_FPU},
    {I_FSUB, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19467, IF_8086|IF_FPU},
    {I_FSUB, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19472, IF_8086|IF_FPU},
    {I_FSUB, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19477, IF_8086|IF_FPU},
    {I_FSUB, 0, {0,0,0,0,0}, nasm_bytecodes+21289, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBP[] = {
    {I_FSUBP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19482, IF_8086|IF_FPU},
    {I_FSUBP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19482, IF_8086|IF_FPU},
    {I_FSUBP, 0, {0,0,0,0,0}, nasm_bytecodes+21289, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBR[] = {
    {I_FSUBR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+21293, IF_8086|IF_FPU},
    {I_FSUBR, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+21297, IF_8086|IF_FPU},
    {I_FSUBR, 1, {FPUREG|TO,0,0,0,0}, nasm_bytecodes+19487, IF_8086|IF_FPU},
    {I_FSUBR, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19487, IF_8086|IF_FPU},
    {I_FSUBR, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19492, IF_8086|IF_FPU},
    {I_FSUBR, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19497, IF_8086|IF_FPU},
    {I_FSUBR, 0, {0,0,0,0,0}, nasm_bytecodes+21301, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FSUBRP[] = {
    {I_FSUBRP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19502, IF_8086|IF_FPU},
    {I_FSUBRP, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19502, IF_8086|IF_FPU},
    {I_FSUBRP, 0, {0,0,0,0,0}, nasm_bytecodes+21301, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FTST[] = {
    {I_FTST, 0, {0,0,0,0,0}, nasm_bytecodes+21305, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOM[] = {
    {I_FUCOM, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19507, IF_386|IF_FPU},
    {I_FUCOM, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19512, IF_386|IF_FPU},
    {I_FUCOM, 0, {0,0,0,0,0}, nasm_bytecodes+21309, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMI[] = {
    {I_FUCOMI, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19517, IF_P6|IF_FPU},
    {I_FUCOMI, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19522, IF_P6|IF_FPU},
    {I_FUCOMI, 0, {0,0,0,0,0}, nasm_bytecodes+21313, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMIP[] = {
    {I_FUCOMIP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19527, IF_P6|IF_FPU},
    {I_FUCOMIP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19532, IF_P6|IF_FPU},
    {I_FUCOMIP, 0, {0,0,0,0,0}, nasm_bytecodes+21317, IF_P6|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMP[] = {
    {I_FUCOMP, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19537, IF_386|IF_FPU},
    {I_FUCOMP, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19542, IF_386|IF_FPU},
    {I_FUCOMP, 0, {0,0,0,0,0}, nasm_bytecodes+21321, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FUCOMPP[] = {
    {I_FUCOMPP, 0, {0,0,0,0,0}, nasm_bytecodes+21325, IF_386|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FWAIT[] = {
    {I_FWAIT, 0, {0,0,0,0,0}, nasm_bytecodes+21311, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXAM[] = {
    {I_FXAM, 0, {0,0,0,0,0}, nasm_bytecodes+21329, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXCH[] = {
    {I_FXCH, 1, {FPUREG,0,0,0,0}, nasm_bytecodes+19547, IF_8086|IF_FPU},
    {I_FXCH, 2, {FPUREG,FPU0,0,0,0}, nasm_bytecodes+19547, IF_8086|IF_FPU},
    {I_FXCH, 2, {FPU0,FPUREG,0,0,0}, nasm_bytecodes+19552, IF_8086|IF_FPU},
    {I_FXCH, 0, {0,0,0,0,0}, nasm_bytecodes+21333, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXRSTOR[] = {
    {I_FXRSTOR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16799, IF_P6|IF_SSE|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXRSTOR64[] = {
    {I_FXRSTOR64, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16798, IF_X64|IF_SSE|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXSAVE[] = {
    {I_FXSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16805, IF_P6|IF_SSE|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXSAVE64[] = {
    {I_FXSAVE64, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16804, IF_X64|IF_SSE|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FXTRACT[] = {
    {I_FXTRACT, 0, {0,0,0,0,0}, nasm_bytecodes+21337, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FYL2X[] = {
    {I_FYL2X, 0, {0,0,0,0,0}, nasm_bytecodes+21341, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_FYL2XP1[] = {
    {I_FYL2XP1, 0, {0,0,0,0,0}, nasm_bytecodes+21345, IF_8086|IF_FPU},
    ITEMPLATE_END
};

static const struct itemplate instrux_GETSEC[] = {
    {I_GETSEC, 0, {0,0,0,0,0}, nasm_bytecodes+21797, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_HADDPD[] = {
    {I_HADDPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17566, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_HADDPS[] = {
    {I_HADDPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17572, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP0[] = {
    {I_HINT_NOP0, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17728, IF_P6|IF_UNDOC},
    {I_HINT_NOP0, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17734, IF_P6|IF_UNDOC},
    {I_HINT_NOP0, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17740, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP1[] = {
    {I_HINT_NOP1, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17746, IF_P6|IF_UNDOC},
    {I_HINT_NOP1, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17752, IF_P6|IF_UNDOC},
    {I_HINT_NOP1, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17758, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP10[] = {
    {I_HINT_NOP10, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17908, IF_P6|IF_UNDOC},
    {I_HINT_NOP10, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17914, IF_P6|IF_UNDOC},
    {I_HINT_NOP10, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17920, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP11[] = {
    {I_HINT_NOP11, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17926, IF_P6|IF_UNDOC},
    {I_HINT_NOP11, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17932, IF_P6|IF_UNDOC},
    {I_HINT_NOP11, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17938, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP12[] = {
    {I_HINT_NOP12, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17944, IF_P6|IF_UNDOC},
    {I_HINT_NOP12, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17950, IF_P6|IF_UNDOC},
    {I_HINT_NOP12, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17956, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP13[] = {
    {I_HINT_NOP13, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17962, IF_P6|IF_UNDOC},
    {I_HINT_NOP13, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17968, IF_P6|IF_UNDOC},
    {I_HINT_NOP13, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17974, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP14[] = {
    {I_HINT_NOP14, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17980, IF_P6|IF_UNDOC},
    {I_HINT_NOP14, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17986, IF_P6|IF_UNDOC},
    {I_HINT_NOP14, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17992, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP15[] = {
    {I_HINT_NOP15, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17998, IF_P6|IF_UNDOC},
    {I_HINT_NOP15, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18004, IF_P6|IF_UNDOC},
    {I_HINT_NOP15, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18010, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP16[] = {
    {I_HINT_NOP16, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18016, IF_P6|IF_UNDOC},
    {I_HINT_NOP16, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18022, IF_P6|IF_UNDOC},
    {I_HINT_NOP16, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18028, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP17[] = {
    {I_HINT_NOP17, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18034, IF_P6|IF_UNDOC},
    {I_HINT_NOP17, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18040, IF_P6|IF_UNDOC},
    {I_HINT_NOP17, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18046, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP18[] = {
    {I_HINT_NOP18, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18052, IF_P6|IF_UNDOC},
    {I_HINT_NOP18, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18058, IF_P6|IF_UNDOC},
    {I_HINT_NOP18, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18064, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP19[] = {
    {I_HINT_NOP19, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18070, IF_P6|IF_UNDOC},
    {I_HINT_NOP19, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18076, IF_P6|IF_UNDOC},
    {I_HINT_NOP19, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18082, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP2[] = {
    {I_HINT_NOP2, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17764, IF_P6|IF_UNDOC},
    {I_HINT_NOP2, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17770, IF_P6|IF_UNDOC},
    {I_HINT_NOP2, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17776, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP20[] = {
    {I_HINT_NOP20, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18088, IF_P6|IF_UNDOC},
    {I_HINT_NOP20, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18094, IF_P6|IF_UNDOC},
    {I_HINT_NOP20, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18100, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP21[] = {
    {I_HINT_NOP21, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18106, IF_P6|IF_UNDOC},
    {I_HINT_NOP21, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18112, IF_P6|IF_UNDOC},
    {I_HINT_NOP21, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18118, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP22[] = {
    {I_HINT_NOP22, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18124, IF_P6|IF_UNDOC},
    {I_HINT_NOP22, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18130, IF_P6|IF_UNDOC},
    {I_HINT_NOP22, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18136, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP23[] = {
    {I_HINT_NOP23, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18142, IF_P6|IF_UNDOC},
    {I_HINT_NOP23, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18148, IF_P6|IF_UNDOC},
    {I_HINT_NOP23, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18154, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP24[] = {
    {I_HINT_NOP24, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18160, IF_P6|IF_UNDOC},
    {I_HINT_NOP24, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18166, IF_P6|IF_UNDOC},
    {I_HINT_NOP24, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18172, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP25[] = {
    {I_HINT_NOP25, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18178, IF_P6|IF_UNDOC},
    {I_HINT_NOP25, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18184, IF_P6|IF_UNDOC},
    {I_HINT_NOP25, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18190, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP26[] = {
    {I_HINT_NOP26, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18196, IF_P6|IF_UNDOC},
    {I_HINT_NOP26, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18202, IF_P6|IF_UNDOC},
    {I_HINT_NOP26, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18208, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP27[] = {
    {I_HINT_NOP27, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18214, IF_P6|IF_UNDOC},
    {I_HINT_NOP27, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18220, IF_P6|IF_UNDOC},
    {I_HINT_NOP27, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18226, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP28[] = {
    {I_HINT_NOP28, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18232, IF_P6|IF_UNDOC},
    {I_HINT_NOP28, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18238, IF_P6|IF_UNDOC},
    {I_HINT_NOP28, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18244, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP29[] = {
    {I_HINT_NOP29, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18250, IF_P6|IF_UNDOC},
    {I_HINT_NOP29, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18256, IF_P6|IF_UNDOC},
    {I_HINT_NOP29, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18262, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP3[] = {
    {I_HINT_NOP3, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17782, IF_P6|IF_UNDOC},
    {I_HINT_NOP3, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17788, IF_P6|IF_UNDOC},
    {I_HINT_NOP3, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17794, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP30[] = {
    {I_HINT_NOP30, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18268, IF_P6|IF_UNDOC},
    {I_HINT_NOP30, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18274, IF_P6|IF_UNDOC},
    {I_HINT_NOP30, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18280, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP31[] = {
    {I_HINT_NOP31, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18286, IF_P6|IF_UNDOC},
    {I_HINT_NOP31, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18292, IF_P6|IF_UNDOC},
    {I_HINT_NOP31, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18298, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP32[] = {
    {I_HINT_NOP32, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18304, IF_P6|IF_UNDOC},
    {I_HINT_NOP32, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18310, IF_P6|IF_UNDOC},
    {I_HINT_NOP32, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18316, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP33[] = {
    {I_HINT_NOP33, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18322, IF_P6|IF_UNDOC},
    {I_HINT_NOP33, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18328, IF_P6|IF_UNDOC},
    {I_HINT_NOP33, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18334, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP34[] = {
    {I_HINT_NOP34, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18340, IF_P6|IF_UNDOC},
    {I_HINT_NOP34, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18346, IF_P6|IF_UNDOC},
    {I_HINT_NOP34, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18352, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP35[] = {
    {I_HINT_NOP35, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18358, IF_P6|IF_UNDOC},
    {I_HINT_NOP35, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18364, IF_P6|IF_UNDOC},
    {I_HINT_NOP35, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18370, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP36[] = {
    {I_HINT_NOP36, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18376, IF_P6|IF_UNDOC},
    {I_HINT_NOP36, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18382, IF_P6|IF_UNDOC},
    {I_HINT_NOP36, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18388, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP37[] = {
    {I_HINT_NOP37, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18394, IF_P6|IF_UNDOC},
    {I_HINT_NOP37, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18400, IF_P6|IF_UNDOC},
    {I_HINT_NOP37, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18406, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP38[] = {
    {I_HINT_NOP38, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18412, IF_P6|IF_UNDOC},
    {I_HINT_NOP38, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18418, IF_P6|IF_UNDOC},
    {I_HINT_NOP38, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18424, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP39[] = {
    {I_HINT_NOP39, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18430, IF_P6|IF_UNDOC},
    {I_HINT_NOP39, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18436, IF_P6|IF_UNDOC},
    {I_HINT_NOP39, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18442, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP4[] = {
    {I_HINT_NOP4, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17800, IF_P6|IF_UNDOC},
    {I_HINT_NOP4, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17806, IF_P6|IF_UNDOC},
    {I_HINT_NOP4, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17812, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP40[] = {
    {I_HINT_NOP40, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18448, IF_P6|IF_UNDOC},
    {I_HINT_NOP40, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18454, IF_P6|IF_UNDOC},
    {I_HINT_NOP40, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18460, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP41[] = {
    {I_HINT_NOP41, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18466, IF_P6|IF_UNDOC},
    {I_HINT_NOP41, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18472, IF_P6|IF_UNDOC},
    {I_HINT_NOP41, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18478, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP42[] = {
    {I_HINT_NOP42, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18484, IF_P6|IF_UNDOC},
    {I_HINT_NOP42, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18490, IF_P6|IF_UNDOC},
    {I_HINT_NOP42, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18496, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP43[] = {
    {I_HINT_NOP43, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18502, IF_P6|IF_UNDOC},
    {I_HINT_NOP43, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18508, IF_P6|IF_UNDOC},
    {I_HINT_NOP43, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18514, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP44[] = {
    {I_HINT_NOP44, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18520, IF_P6|IF_UNDOC},
    {I_HINT_NOP44, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18526, IF_P6|IF_UNDOC},
    {I_HINT_NOP44, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18532, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP45[] = {
    {I_HINT_NOP45, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18538, IF_P6|IF_UNDOC},
    {I_HINT_NOP45, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18544, IF_P6|IF_UNDOC},
    {I_HINT_NOP45, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18550, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP46[] = {
    {I_HINT_NOP46, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18556, IF_P6|IF_UNDOC},
    {I_HINT_NOP46, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18562, IF_P6|IF_UNDOC},
    {I_HINT_NOP46, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18568, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP47[] = {
    {I_HINT_NOP47, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18574, IF_P6|IF_UNDOC},
    {I_HINT_NOP47, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18580, IF_P6|IF_UNDOC},
    {I_HINT_NOP47, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18586, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP48[] = {
    {I_HINT_NOP48, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18592, IF_P6|IF_UNDOC},
    {I_HINT_NOP48, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18598, IF_P6|IF_UNDOC},
    {I_HINT_NOP48, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18604, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP49[] = {
    {I_HINT_NOP49, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18610, IF_P6|IF_UNDOC},
    {I_HINT_NOP49, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18616, IF_P6|IF_UNDOC},
    {I_HINT_NOP49, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18622, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP5[] = {
    {I_HINT_NOP5, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17818, IF_P6|IF_UNDOC},
    {I_HINT_NOP5, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17824, IF_P6|IF_UNDOC},
    {I_HINT_NOP5, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17830, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP50[] = {
    {I_HINT_NOP50, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18628, IF_P6|IF_UNDOC},
    {I_HINT_NOP50, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18634, IF_P6|IF_UNDOC},
    {I_HINT_NOP50, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18640, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP51[] = {
    {I_HINT_NOP51, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18646, IF_P6|IF_UNDOC},
    {I_HINT_NOP51, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18652, IF_P6|IF_UNDOC},
    {I_HINT_NOP51, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18658, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP52[] = {
    {I_HINT_NOP52, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18664, IF_P6|IF_UNDOC},
    {I_HINT_NOP52, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18670, IF_P6|IF_UNDOC},
    {I_HINT_NOP52, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18676, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP53[] = {
    {I_HINT_NOP53, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18682, IF_P6|IF_UNDOC},
    {I_HINT_NOP53, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18688, IF_P6|IF_UNDOC},
    {I_HINT_NOP53, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18694, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP54[] = {
    {I_HINT_NOP54, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18700, IF_P6|IF_UNDOC},
    {I_HINT_NOP54, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18706, IF_P6|IF_UNDOC},
    {I_HINT_NOP54, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18712, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP55[] = {
    {I_HINT_NOP55, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18718, IF_P6|IF_UNDOC},
    {I_HINT_NOP55, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18724, IF_P6|IF_UNDOC},
    {I_HINT_NOP55, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18730, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP56[] = {
    {I_HINT_NOP56, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16066, IF_P6|IF_UNDOC},
    {I_HINT_NOP56, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16072, IF_P6|IF_UNDOC},
    {I_HINT_NOP56, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16078, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP57[] = {
    {I_HINT_NOP57, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18736, IF_P6|IF_UNDOC},
    {I_HINT_NOP57, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18742, IF_P6|IF_UNDOC},
    {I_HINT_NOP57, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18748, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP58[] = {
    {I_HINT_NOP58, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18754, IF_P6|IF_UNDOC},
    {I_HINT_NOP58, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18760, IF_P6|IF_UNDOC},
    {I_HINT_NOP58, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18766, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP59[] = {
    {I_HINT_NOP59, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18772, IF_P6|IF_UNDOC},
    {I_HINT_NOP59, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18778, IF_P6|IF_UNDOC},
    {I_HINT_NOP59, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18784, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP6[] = {
    {I_HINT_NOP6, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17836, IF_P6|IF_UNDOC},
    {I_HINT_NOP6, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17842, IF_P6|IF_UNDOC},
    {I_HINT_NOP6, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17848, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP60[] = {
    {I_HINT_NOP60, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18790, IF_P6|IF_UNDOC},
    {I_HINT_NOP60, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18796, IF_P6|IF_UNDOC},
    {I_HINT_NOP60, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18802, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP61[] = {
    {I_HINT_NOP61, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18808, IF_P6|IF_UNDOC},
    {I_HINT_NOP61, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18814, IF_P6|IF_UNDOC},
    {I_HINT_NOP61, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18820, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP62[] = {
    {I_HINT_NOP62, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18826, IF_P6|IF_UNDOC},
    {I_HINT_NOP62, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18832, IF_P6|IF_UNDOC},
    {I_HINT_NOP62, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18838, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP63[] = {
    {I_HINT_NOP63, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+18844, IF_P6|IF_UNDOC},
    {I_HINT_NOP63, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+18850, IF_P6|IF_UNDOC},
    {I_HINT_NOP63, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+18856, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP7[] = {
    {I_HINT_NOP7, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17854, IF_P6|IF_UNDOC},
    {I_HINT_NOP7, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17860, IF_P6|IF_UNDOC},
    {I_HINT_NOP7, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17866, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP8[] = {
    {I_HINT_NOP8, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17872, IF_P6|IF_UNDOC},
    {I_HINT_NOP8, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17878, IF_P6|IF_UNDOC},
    {I_HINT_NOP8, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17884, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HINT_NOP9[] = {
    {I_HINT_NOP9, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17890, IF_P6|IF_UNDOC},
    {I_HINT_NOP9, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17896, IF_P6|IF_UNDOC},
    {I_HINT_NOP9, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17902, IF_X64|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_HLT[] = {
    {I_HLT, 0, {0,0,0,0,0}, nasm_bytecodes+21822, IF_8086|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_HSUBPD[] = {
    {I_HSUBPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17578, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_HSUBPS[] = {
    {I_HSUBPS, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17584, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_IBTS[] = {
    {I_IBTS, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15628, IF_386|IF_SW|IF_UNDOC},
    {I_IBTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15628, IF_386|IF_UNDOC},
    {I_IBTS, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15634, IF_386|IF_SD|IF_UNDOC},
    {I_IBTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15634, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_ICEBP[] = {
    {I_ICEBP, 0, {0,0,0,0,0}, nasm_bytecodes+21825, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_IDIV[] = {
    {I_IDIV, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+21349, IF_8086},
    {I_IDIV, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19557, IF_8086},
    {I_IDIV, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19562, IF_386},
    {I_IDIV, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19567, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_IMUL[] = {
    {I_IMUL, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+21353, IF_8086},
    {I_IMUL, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19572, IF_8086},
    {I_IMUL, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19577, IF_386},
    {I_IMUL, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19582, IF_X64},
    {I_IMUL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15646, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15646, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15652, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15652, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15658, IF_X64|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15658, IF_X64},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+15664, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,SBYTE16,0,0}, nasm_bytecodes+15664, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE|BITS16,0,0}, nasm_bytecodes+15670, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+15676, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+15664, IF_186},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,SBYTE16,0,0}, nasm_bytecodes+15664, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE|BITS16,0,0}, nasm_bytecodes+15670, IF_186},
    {I_IMUL, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+15676, IF_186|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+15682, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,SBYTE32,0,0}, nasm_bytecodes+15682, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+15688, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+15694, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+15682, IF_386},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,SBYTE32,0,0}, nasm_bytecodes+15682, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+15688, IF_386},
    {I_IMUL, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+15694, IF_386|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+15700, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,SBYTE64,0,0}, nasm_bytecodes+15700, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+15706, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+15712, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+15700, IF_X64},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,SBYTE64,0,0}, nasm_bytecodes+15700, IF_X64|IF_SM},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+15706, IF_X64},
    {I_IMUL, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+15712, IF_X64|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15718, IF_186},
    {I_IMUL, 2, {REG_GPR|BITS16,SBYTE16,0,0,0}, nasm_bytecodes+15718, IF_186|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15724, IF_186},
    {I_IMUL, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+15730, IF_186|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15736, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS32,SBYTE32,0,0,0}, nasm_bytecodes+15736, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15742, IF_386},
    {I_IMUL, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+15748, IF_386|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+15754, IF_X64},
    {I_IMUL, 2, {REG_GPR|BITS64,SBYTE64,0,0,0}, nasm_bytecodes+15754, IF_X64|IF_SM},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15760, IF_X64},
    {I_IMUL, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+15766, IF_X64|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_IN[] = {
    {I_IN, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+21357, IF_8086|IF_SB},
    {I_IN, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+19587, IF_8086|IF_SB},
    {I_IN, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+19592, IF_386|IF_SB},
    {I_IN, 2, {REG_AL,REG_DX,0,0,0}, nasm_bytecodes+21828, IF_8086},
    {I_IN, 2, {REG_AX,REG_DX,0,0,0}, nasm_bytecodes+21361, IF_8086},
    {I_IN, 2, {REG_EAX,REG_DX,0,0,0}, nasm_bytecodes+21365, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INC[] = {
    {I_INC, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+21369, IF_8086|IF_NOLONG},
    {I_INC, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+21373, IF_386|IF_NOLONG},
    {I_INC, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+21377, IF_8086},
    {I_INC, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19597, IF_8086},
    {I_INC, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19602, IF_386},
    {I_INC, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19607, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_INCBIN[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_INSB[] = {
    {I_INSB, 0, {0,0,0,0,0}, nasm_bytecodes+21831, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSD[] = {
    {I_INSD, 0, {0,0,0,0,0}, nasm_bytecodes+21381, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSERTPS[] = {
    {I_INSERTPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4154, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSERTQ[] = {
    {I_INSERTQ, 4, {XMMREG,XMMREG,IMMEDIATE,IMMEDIATE,0}, nasm_bytecodes+4114, IF_SSE4A|IF_AMD},
    {I_INSERTQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17632, IF_SSE4A|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_INSW[] = {
    {I_INSW, 0, {0,0,0,0,0}, nasm_bytecodes+21385, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT[] = {
    {I_INT, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+21389, IF_8086|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT01[] = {
    {I_INT01, 0, {0,0,0,0,0}, nasm_bytecodes+21825, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT03[] = {
    {I_INT03, 0, {0,0,0,0,0}, nasm_bytecodes+21834, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT1[] = {
    {I_INT1, 0, {0,0,0,0,0}, nasm_bytecodes+21825, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_INT3[] = {
    {I_INT3, 0, {0,0,0,0,0}, nasm_bytecodes+21834, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_INTO[] = {
    {I_INTO, 0, {0,0,0,0,0}, nasm_bytecodes+21837, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVD[] = {
    {I_INVD, 0, {0,0,0,0,0}, nasm_bytecodes+21393, IF_486|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVEPT[] = {
    {I_INVEPT, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+4075, IF_VMX|IF_SO|IF_NOLONG},
    {I_INVEPT, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+4074, IF_VMX|IF_SO|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVLPG[] = {
    {I_INVLPG, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19612, IF_486|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVLPGA[] = {
    {I_INVLPGA, 2, {REG_AX,REG_ECX,0,0,0}, nasm_bytecodes+15772, IF_X86_64|IF_AMD|IF_NOLONG},
    {I_INVLPGA, 2, {REG_EAX,REG_ECX,0,0,0}, nasm_bytecodes+15778, IF_X86_64|IF_AMD},
    {I_INVLPGA, 2, {REG_RAX,REG_ECX,0,0,0}, nasm_bytecodes+7309, IF_X64|IF_AMD},
    {I_INVLPGA, 0, {0,0,0,0,0}, nasm_bytecodes+15779, IF_X86_64|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVPCID[] = {
    {I_INVPCID, 2, {REG_GPR|BITS32,MEMORY|BITS128,0,0,0}, nasm_bytecodes+7302, IF_FUTURE|IF_INVPCID|IF_PRIV|IF_NOLONG},
    {I_INVPCID, 2, {REG_GPR|BITS64,MEMORY|BITS128,0,0,0}, nasm_bytecodes+7302, IF_FUTURE|IF_INVPCID|IF_PRIV|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_INVVPID[] = {
    {I_INVVPID, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+4083, IF_VMX|IF_SO|IF_NOLONG},
    {I_INVVPID, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+4082, IF_VMX|IF_SO|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRET[] = {
    {I_IRET, 0, {0,0,0,0,0}, nasm_bytecodes+21397, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETD[] = {
    {I_IRETD, 0, {0,0,0,0,0}, nasm_bytecodes+21401, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETQ[] = {
    {I_IRETQ, 0, {0,0,0,0,0}, nasm_bytecodes+21405, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_IRETW[] = {
    {I_IRETW, 0, {0,0,0,0,0}, nasm_bytecodes+21409, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_JCXZ[] = {
    {I_JCXZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19617, IF_8086|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_JECXZ[] = {
    {I_JECXZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19622, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_JMP[] = {
    {I_JMP, 1, {IMMEDIATE|SHORT,0,0,0,0}, nasm_bytecodes+19633, IF_8086},
    {I_JMP, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19632, IF_8086},
    {I_JMP, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19637, IF_8086},
    {I_JMP, 1, {IMMEDIATE|NEAR,0,0,0,0}, nasm_bytecodes+19637, IF_8086},
    {I_JMP, 1, {IMMEDIATE|FAR,0,0,0,0}, nasm_bytecodes+15784, IF_8086|IF_NOLONG},
    {I_JMP, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+19642, IF_8086},
    {I_JMP, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+19642, IF_8086},
    {I_JMP, 1, {IMMEDIATE|BITS16|FAR,0,0,0,0}, nasm_bytecodes+15790, IF_8086|IF_NOLONG},
    {I_JMP, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+19647, IF_386},
    {I_JMP, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+19647, IF_386},
    {I_JMP, 1, {IMMEDIATE|BITS32|FAR,0,0,0,0}, nasm_bytecodes+15796, IF_386|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+15802, IF_8086|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|BITS16|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+15808, IF_8086|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15808, IF_8086|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|BITS32|COLON,IMMEDIATE,0,0,0}, nasm_bytecodes+15814, IF_386|IF_NOLONG},
    {I_JMP, 2, {IMMEDIATE|COLON,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15814, IF_386|IF_NOLONG},
    {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+19652, IF_8086|IF_NOLONG},
    {I_JMP, 1, {MEMORY|FAR,0,0,0,0}, nasm_bytecodes+19657, IF_X64},
    {I_JMP, 1, {MEMORY|BITS16|FAR,0,0,0,0}, nasm_bytecodes+19662, IF_8086},
    {I_JMP, 1, {MEMORY|BITS32|FAR,0,0,0,0}, nasm_bytecodes+19667, IF_386},
    {I_JMP, 1, {MEMORY|BITS64|FAR,0,0,0,0}, nasm_bytecodes+19657, IF_X64},
    {I_JMP, 1, {MEMORY|NEAR,0,0,0,0}, nasm_bytecodes+19672, IF_8086},
    {I_JMP, 1, {MEMORY|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+19677, IF_8086},
    {I_JMP, 1, {MEMORY|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+19682, IF_386|IF_NOLONG},
    {I_JMP, 1, {MEMORY|BITS64|NEAR,0,0,0,0}, nasm_bytecodes+19687, IF_X64},
    {I_JMP, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19677, IF_8086},
    {I_JMP, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19682, IF_386|IF_NOLONG},
    {I_JMP, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19687, IF_X64},
    {I_JMP, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19672, IF_8086},
    {I_JMP, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19677, IF_8086},
    {I_JMP, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+19682, IF_386|IF_NOLONG},
    {I_JMP, 1, {MEMORY|BITS64,0,0,0,0}, nasm_bytecodes+19687, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_JMPE[] = {
    {I_JMPE, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+15820, IF_IA64},
    {I_JMPE, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+15826, IF_IA64},
    {I_JMPE, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+15832, IF_IA64},
    {I_JMPE, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+15838, IF_IA64},
    {I_JMPE, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+15844, IF_IA64},
    ITEMPLATE_END
};

static const struct itemplate instrux_JRCXZ[] = {
    {I_JRCXZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19627, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LAHF[] = {
    {I_LAHF, 0, {0,0,0,0,0}, nasm_bytecodes+21840, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_LAR[] = {
    {I_LAR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15850, IF_286|IF_PROT|IF_SW},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15850, IF_286|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15850, IF_386|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS16,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7316, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15856, IF_386|IF_PROT|IF_SW},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15856, IF_386|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15856, IF_386|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS32,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7323, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15862, IF_X64|IF_PROT|IF_SW},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15862, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15862, IF_X64|IF_PROT},
    {I_LAR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15862, IF_X64|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDDQU[] = {
    {I_LDDQU, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+17590, IF_PRESCOTT|IF_SSE3|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDMXCSR[] = {
    {I_LDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+12827, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_LDS[] = {
    {I_LDS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+19692, IF_8086|IF_NOLONG},
    {I_LDS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+19697, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_LEA[] = {
    {I_LEA, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+19702, IF_8086},
    {I_LEA, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+19707, IF_386},
    {I_LEA, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+19712, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LEAVE[] = {
    {I_LEAVE, 0, {0,0,0,0,0}, nasm_bytecodes+19984, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_LES[] = {
    {I_LES, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+19717, IF_8086|IF_NOLONG},
    {I_LES, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+19722, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_LFENCE[] = {
    {I_LFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+19727, IF_X64|IF_AMD},
    {I_LFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+19727, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_LFS[] = {
    {I_LFS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15868, IF_386},
    {I_LFS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15874, IF_386},
    {I_LFS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15880, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LGDT[] = {
    {I_LGDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19732, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LGS[] = {
    {I_LGS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15886, IF_386},
    {I_LGS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15892, IF_386},
    {I_LGS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15898, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LIDT[] = {
    {I_LIDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19737, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LLDT[] = {
    {I_LLDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19742, IF_286|IF_PROT|IF_PRIV},
    {I_LLDT, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19742, IF_286|IF_PROT|IF_PRIV},
    {I_LLDT, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19742, IF_286|IF_PROT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LLWPCB[] = {
    {I_LLWPCB, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12853, IF_AMD|IF_386},
    {I_LLWPCB, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12860, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LMSW[] = {
    {I_LMSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19747, IF_286|IF_PRIV},
    {I_LMSW, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19747, IF_286|IF_PRIV},
    {I_LMSW, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19747, IF_286|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOADALL[] = {
    {I_LOADALL, 0, {0,0,0,0,0}, nasm_bytecodes+21413, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOADALL286[] = {
    {I_LOADALL286, 0, {0,0,0,0,0}, nasm_bytecodes+21417, IF_286|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSB[] = {
    {I_LODSB, 0, {0,0,0,0,0}, nasm_bytecodes+21843, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSD[] = {
    {I_LODSD, 0, {0,0,0,0,0}, nasm_bytecodes+21421, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSQ[] = {
    {I_LODSQ, 0, {0,0,0,0,0}, nasm_bytecodes+21425, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LODSW[] = {
    {I_LODSW, 0, {0,0,0,0,0}, nasm_bytecodes+21429, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOP[] = {
    {I_LOOP, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19752, IF_8086},
    {I_LOOP, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+19757, IF_8086|IF_NOLONG},
    {I_LOOP, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+19762, IF_386},
    {I_LOOP, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+19767, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPE[] = {
    {I_LOOPE, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19772, IF_8086},
    {I_LOOPE, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+19777, IF_8086|IF_NOLONG},
    {I_LOOPE, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+19782, IF_386},
    {I_LOOPE, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+19787, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPNE[] = {
    {I_LOOPNE, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19792, IF_8086},
    {I_LOOPNE, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+19797, IF_8086|IF_NOLONG},
    {I_LOOPNE, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+19802, IF_386},
    {I_LOOPNE, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+19807, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPNZ[] = {
    {I_LOOPNZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19792, IF_8086},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+19797, IF_8086|IF_NOLONG},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+19802, IF_386},
    {I_LOOPNZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+19807, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LOOPZ[] = {
    {I_LOOPZ, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+19772, IF_8086},
    {I_LOOPZ, 2, {IMMEDIATE,REG_CX,0,0,0}, nasm_bytecodes+19777, IF_8086|IF_NOLONG},
    {I_LOOPZ, 2, {IMMEDIATE,REG_ECX,0,0,0}, nasm_bytecodes+19782, IF_386},
    {I_LOOPZ, 2, {IMMEDIATE,REG_RCX,0,0,0}, nasm_bytecodes+19787, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LSL[] = {
    {I_LSL, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15904, IF_286|IF_PROT|IF_SW},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15904, IF_286|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15904, IF_386|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS16,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7330, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15910, IF_386|IF_PROT|IF_SW},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15910, IF_386|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15910, IF_386|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS32,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7337, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15916, IF_X64|IF_PROT|IF_SW},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+15916, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15916, IF_X64|IF_PROT},
    {I_LSL, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15916, IF_X64|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_LSS[] = {
    {I_LSS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+15922, IF_386},
    {I_LSS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+15928, IF_386},
    {I_LSS, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+15934, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LTR[] = {
    {I_LTR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+19812, IF_286|IF_PROT|IF_PRIV},
    {I_LTR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+19812, IF_286|IF_PROT|IF_PRIV},
    {I_LTR, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19812, IF_286|IF_PROT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_LWPINS[] = {
    {I_LWPINS, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+5226, IF_AMD|IF_386},
    {I_LWPINS, 3, {REG_GPR|BITS64,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+5234, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LWPVAL[] = {
    {I_LWPVAL, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+5210, IF_AMD|IF_386},
    {I_LWPVAL, 3, {REG_GPR|BITS64,RM_GPR|BITS32,IMMEDIATE|BITS32,0,0}, nasm_bytecodes+5218, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_LZCNT[] = {
    {I_LZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+8401, IF_P6|IF_AMD},
    {I_LZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8408, IF_P6|IF_AMD},
    {I_LZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8415, IF_X64|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_MASKMOVDQU[] = {
    {I_MASKMOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16858, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MASKMOVQ[] = {
    {I_MASKMOVQ, 2, {MMXREG,MMXREG,0,0,0}, nasm_bytecodes+16840, IF_KATMAI|IF_MMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXPD[] = {
    {I_MAXPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17398, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXPS[] = {
    {I_MAXPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16618, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXSD[] = {
    {I_MAXSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17404, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MAXSS[] = {
    {I_MAXSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16624, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MFENCE[] = {
    {I_MFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+19817, IF_X64|IF_AMD},
    {I_MFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+19817, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINPD[] = {
    {I_MINPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17410, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINPS[] = {
    {I_MINPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16630, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINSD[] = {
    {I_MINSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17416, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MINSS[] = {
    {I_MINSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16636, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONITOR[] = {
    {I_MONITOR, 0, {0,0,0,0,0}, nasm_bytecodes+19822, IF_PRESCOTT},
    {I_MONITOR, 3, {REG_EAX,REG_ECX,REG_EDX,0,0}, nasm_bytecodes+19822, IF_PRESCOTT},
    {I_MONITOR, 3, {REG_RAX,REG_ECX,REG_EDX,0,0}, nasm_bytecodes+19822, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MONTMUL[] = {
    {I_MONTMUL, 0, {0,0,0,0,0}, nasm_bytecodes+17710, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOV[] = {
    {I_MOV, 2, {MEMORY,REG_SREG,0,0,0}, nasm_bytecodes+19843, IF_8086|IF_SW},
    {I_MOV, 2, {REG_GPR|BITS16,REG_SREG,0,0,0}, nasm_bytecodes+19827, IF_8086},
    {I_MOV, 2, {REG_GPR|BITS32,REG_SREG,0,0,0}, nasm_bytecodes+19832, IF_386},
    {I_MOV, 2, {REG_GPR|BITS64,REG_SREG,0,0,0}, nasm_bytecodes+19837, IF_X64|IF_OPT},
    {I_MOV, 2, {RM_GPR|BITS64,REG_SREG,0,0,0}, nasm_bytecodes+19842, IF_X64},
    {I_MOV, 2, {REG_SREG,MEMORY,0,0,0}, nasm_bytecodes+19863, IF_8086|IF_SW},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19863, IF_8086|IF_OPT},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19863, IF_386|IF_OPT},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19847, IF_X64|IF_OPT},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19852, IF_8086},
    {I_MOV, 2, {REG_SREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19857, IF_386},
    {I_MOV, 2, {REG_SREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+19862, IF_X64},
    {I_MOV, 2, {REG_AL,MEM_OFFS,0,0,0}, nasm_bytecodes+21433, IF_8086|IF_SM},
    {I_MOV, 2, {REG_AX,MEM_OFFS,0,0,0}, nasm_bytecodes+19867, IF_8086|IF_SM},
    {I_MOV, 2, {REG_EAX,MEM_OFFS,0,0,0}, nasm_bytecodes+19872, IF_386|IF_SM},
    {I_MOV, 2, {REG_RAX,MEM_OFFS,0,0,0}, nasm_bytecodes+19877, IF_X64|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_AL,0,0,0}, nasm_bytecodes+21437, IF_8086|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_AX,0,0,0}, nasm_bytecodes+19882, IF_8086|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_EAX,0,0,0}, nasm_bytecodes+19887, IF_386|IF_SM},
    {I_MOV, 2, {MEM_OFFS,REG_RAX,0,0,0}, nasm_bytecodes+19892, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,REG_CREG,0,0,0}, nasm_bytecodes+15940, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_GPR|BITS64,REG_CREG,0,0,0}, nasm_bytecodes+15946, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_CREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15952, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_CREG,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15958, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_GPR|BITS32,REG_DREG,0,0,0}, nasm_bytecodes+15965, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_GPR|BITS64,REG_DREG,0,0,0}, nasm_bytecodes+15964, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_DREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+15971, IF_386|IF_PRIV|IF_NOLONG},
    {I_MOV, 2, {REG_DREG,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+15970, IF_X64|IF_PRIV},
    {I_MOV, 2, {REG_GPR|BITS32,REG_TREG,0,0,0}, nasm_bytecodes+19897, IF_386|IF_NOLONG},
    {I_MOV, 2, {REG_TREG,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19902, IF_386|IF_NOLONG},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21441, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21441, IF_8086},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19907, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19907, IF_8086},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19912, IF_386|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19912, IF_386},
    {I_MOV, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19917, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19917, IF_X64},
    {I_MOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+21445, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21445, IF_8086},
    {I_MOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+19922, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+19922, IF_8086},
    {I_MOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+19927, IF_386|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+19927, IF_386},
    {I_MOV, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+19932, IF_X64|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+19932, IF_X64},
    {I_MOV, 2, {REG_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+21449, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+19937, IF_8086|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+19942, IF_386|IF_SM},
    {I_MOV, 2, {REG_GPR|BITS64,UDWORD64,0,0,0}, nasm_bytecodes+19947, IF_X64|IF_SM|IF_OPT},
    {I_MOV, 2, {REG_GPR|BITS64,SDWORD64,0,0,0}, nasm_bytecodes+15976, IF_X64|IF_SM|IF_OPT},
    {I_MOV, 2, {REG_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+19952, IF_X64|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+19957, IF_8086|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+15982, IF_8086|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+15988, IF_386|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+15976, IF_X64|IF_SM},
    {I_MOV, 2, {RM_GPR|BITS64,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15976, IF_X64},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+19957, IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+15982, IF_8086|IF_SM},
    {I_MOV, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+15988, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVAPD[] = {
    {I_MOVAPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17422, IF_WILLAMETTE|IF_SSE2},
    {I_MOVAPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17428, IF_WILLAMETTE|IF_SSE2},
    {I_MOVAPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17428, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVAPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+17422, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVAPS[] = {
    {I_MOVAPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16642, IF_KATMAI|IF_SSE},
    {I_MOVAPS, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+16648, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVBE[] = {
    {I_MOVBE, 2, {REG_GPR|BITS16,MEMORY|BITS16,0,0,0}, nasm_bytecodes+8660, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {REG_GPR|BITS32,MEMORY|BITS32,0,0,0}, nasm_bytecodes+8667, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {REG_GPR|BITS64,MEMORY|BITS64,0,0,0}, nasm_bytecodes+8674, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {MEMORY|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+8681, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {MEMORY|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+8688, IF_NEHALEM|IF_SM},
    {I_MOVBE, 2, {MEMORY|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+8695, IF_NEHALEM|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVD[] = {
    {I_MOVD, 2, {MMXREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+15994, IF_PENT|IF_MMX|IF_SSE2},
    {I_MOVD, 2, {RM_GPR|BITS32,MMXREG,0,0,0}, nasm_bytecodes+16000, IF_PENT|IF_MMX|IF_SSE2},
    {I_MOVD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+7344, IF_SSE2},
    {I_MOVD, 2, {RM_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+7351, IF_SSE2},
    {I_MOVD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+7981, IF_WILLAMETTE|IF_SSE2|IF_SD},
    {I_MOVD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+7988, IF_WILLAMETTE|IF_SSE2|IF_SD},
    {I_MOVD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+7988, IF_WILLAMETTE|IF_SSE2},
    {I_MOVD, 2, {RM_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+7981, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDDUP[] = {
    {I_MOVDDUP, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17596, IF_PRESCOTT|IF_SSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQ2Q[] = {
    {I_MOVDQ2Q, 2, {MMXREG,XMMREG,0,0,0}, nasm_bytecodes+16900, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQA[] = {
    {I_MOVDQA, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16876, IF_WILLAMETTE|IF_SSE2},
    {I_MOVDQA, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+16882, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQA, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+16876, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQA, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16882, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVDQU[] = {
    {I_MOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16888, IF_WILLAMETTE|IF_SSE2},
    {I_MOVDQU, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+16894, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQU, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+16888, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16894, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHLPS[] = {
    {I_MOVHLPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16474, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHPD[] = {
    {I_MOVHPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17434, IF_WILLAMETTE|IF_SSE2},
    {I_MOVHPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+17440, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVHPS[] = {
    {I_MOVHPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+16654, IF_KATMAI|IF_SSE},
    {I_MOVHPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+16660, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLHPS[] = {
    {I_MOVLHPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16654, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLPD[] = {
    {I_MOVLPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17446, IF_WILLAMETTE|IF_SSE2},
    {I_MOVLPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+17452, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVLPS[] = {
    {I_MOVLPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+16474, IF_KATMAI|IF_SSE},
    {I_MOVLPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+16666, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVMSKPD[] = {
    {I_MOVMSKPD, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+17458, IF_WILLAMETTE|IF_SSE2},
    {I_MOVMSKPD, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8163, IF_X64|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVMSKPS[] = {
    {I_MOVMSKPS, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+16672, IF_KATMAI|IF_SSE},
    {I_MOVMSKPS, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+7890, IF_X64|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTDQ[] = {
    {I_MOVNTDQ, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+16864, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTDQA[] = {
    {I_MOVNTDQA, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+8436, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTI[] = {
    {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7975, IF_WILLAMETTE|IF_SD},
    {I_MOVNTI, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7974, IF_X64|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTPD[] = {
    {I_MOVNTPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+16870, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTPS[] = {
    {I_MOVNTPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+16678, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTQ[] = {
    {I_MOVNTQ, 2, {MEMORY,MMXREG,0,0,0}, nasm_bytecodes+16846, IF_KATMAI|IF_MMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTSD[] = {
    {I_MOVNTSD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17638, IF_SSE4A|IF_AMD|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVNTSS[] = {
    {I_MOVNTSS, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17644, IF_SSE4A|IF_AMD|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVQ[] = {
    {I_MOVQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7358, IF_PENT|IF_MMX|IF_SQ},
    {I_MOVQ, 2, {RM_MMX,MMXREG,0,0,0}, nasm_bytecodes+7365, IF_PENT|IF_MMX|IF_SQ},
    {I_MOVQ, 2, {MMXREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+15994, IF_X64|IF_MMX},
    {I_MOVQ, 2, {RM_GPR|BITS64,MMXREG,0,0,0}, nasm_bytecodes+16000, IF_X64|IF_MMX},
    {I_MOVQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16906, IF_WILLAMETTE|IF_SSE2},
    {I_MOVQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16912, IF_WILLAMETTE|IF_SSE2},
    {I_MOVQ, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+16912, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    {I_MOVQ, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+16906, IF_WILLAMETTE|IF_SSE2|IF_SQ},
    {I_MOVQ, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+7995, IF_X64|IF_SSE2},
    {I_MOVQ, 2, {RM_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+8002, IF_X64|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVQ2DQ[] = {
    {I_MOVQ2DQ, 2, {XMMREG,MMXREG,0,0,0}, nasm_bytecodes+16918, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSB[] = {
    {I_MOVSB, 0, {0,0,0,0,0}, nasm_bytecodes+3679, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSD[] = {
    {I_MOVSD, 0, {0,0,0,0,0}, nasm_bytecodes+21453, IF_386},
    {I_MOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17464, IF_WILLAMETTE|IF_SSE2},
    {I_MOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17470, IF_WILLAMETTE|IF_SSE2},
    {I_MOVSD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17470, IF_WILLAMETTE|IF_SSE2},
    {I_MOVSD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+17464, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSHDUP[] = {
    {I_MOVSHDUP, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17602, IF_PRESCOTT|IF_SSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSLDUP[] = {
    {I_MOVSLDUP, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17608, IF_PRESCOTT|IF_SSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSQ[] = {
    {I_MOVSQ, 0, {0,0,0,0,0}, nasm_bytecodes+21457, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSS[] = {
    {I_MOVSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16684, IF_KATMAI|IF_SSE},
    {I_MOVSS, 2, {MEMORY|BITS32,XMMREG,0,0,0}, nasm_bytecodes+16690, IF_KATMAI|IF_SSE},
    {I_MOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+16684, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSW[] = {
    {I_MOVSW, 0, {0,0,0,0,0}, nasm_bytecodes+21461, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSX[] = {
    {I_MOVSX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+16006, IF_386|IF_SB},
    {I_MOVSX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+16006, IF_386},
    {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+16012, IF_386},
    {I_MOVSX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+16018, IF_386},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+16024, IF_X64},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+16030, IF_X64},
    {I_MOVSX, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+19962, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVSXD[] = {
    {I_MOVSXD, 2, {REG_GPR|BITS64,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+19962, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVUPD[] = {
    {I_MOVUPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17476, IF_WILLAMETTE|IF_SSE2},
    {I_MOVUPD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+17482, IF_WILLAMETTE|IF_SSE2},
    {I_MOVUPD, 2, {MEMORY,XMMREG,0,0,0}, nasm_bytecodes+17482, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_MOVUPD, 2, {XMMREG,MEMORY,0,0,0}, nasm_bytecodes+17476, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVUPS[] = {
    {I_MOVUPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16696, IF_KATMAI|IF_SSE},
    {I_MOVUPS, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+16702, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MOVZX[] = {
    {I_MOVZX, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+16036, IF_386|IF_SB},
    {I_MOVZX, 2, {REG_GPR|BITS16,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+16036, IF_386},
    {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+16042, IF_386},
    {I_MOVZX, 2, {REG_GPR|BITS32,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+16048, IF_386},
    {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS8,0,0,0}, nasm_bytecodes+16054, IF_X64},
    {I_MOVZX, 2, {REG_GPR|BITS64,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+16060, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MPSADBW[] = {
    {I_MPSADBW, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4162, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_MUL[] = {
    {I_MUL, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+21465, IF_8086},
    {I_MUL, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19967, IF_8086},
    {I_MUL, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19972, IF_386},
    {I_MUL, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19977, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULPD[] = {
    {I_MULPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17488, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULPS[] = {
    {I_MULPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16708, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULSD[] = {
    {I_MULSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17494, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULSS[] = {
    {I_MULSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16714, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_MULX[] = {
    {I_MULX, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, nasm_bytecodes+15226, IF_FUTURE|IF_BMI2},
    {I_MULX, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, nasm_bytecodes+15233, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_MWAIT[] = {
    {I_MWAIT, 0, {0,0,0,0,0}, nasm_bytecodes+19982, IF_PRESCOTT},
    {I_MWAIT, 2, {REG_EAX,REG_ECX,0,0,0}, nasm_bytecodes+19982, IF_PRESCOTT},
    ITEMPLATE_END
};

static const struct itemplate instrux_NEG[] = {
    {I_NEG, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+21469, IF_8086},
    {I_NEG, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+19987, IF_8086},
    {I_NEG, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+19992, IF_386},
    {I_NEG, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+19997, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_NOP[] = {
    {I_NOP, 0, {0,0,0,0,0}, nasm_bytecodes+21473, IF_8086},
    {I_NOP, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16066, IF_P6},
    {I_NOP, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16072, IF_P6},
    {I_NOP, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16078, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_NOT[] = {
    {I_NOT, 1, {RM_GPR|BITS8,0,0,0,0}, nasm_bytecodes+21477, IF_8086},
    {I_NOT, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+20002, IF_8086},
    {I_NOT, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+20007, IF_386},
    {I_NOT, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+20012, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_OR[] = {
    {I_OR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21481, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21481, IF_8086},
    {I_OR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20017, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20017, IF_8086},
    {I_OR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20022, IF_386|IF_SM},
    {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20022, IF_386},
    {I_OR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20027, IF_X64|IF_SM},
    {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20027, IF_X64},
    {I_OR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+14417, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14417, IF_8086},
    {I_OR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+20032, IF_8086|IF_SM},
    {I_OR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20032, IF_8086},
    {I_OR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+20037, IF_386|IF_SM},
    {I_OR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20037, IF_386},
    {I_OR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+20042, IF_X64|IF_SM},
    {I_OR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20042, IF_X64},
    {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16084, IF_8086},
    {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16090, IF_386},
    {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16096, IF_X64},
    {I_OR, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+21485, IF_8086|IF_SM},
    {I_OR, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+16084, IF_8086|IF_SM},
    {I_OR, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+20047, IF_8086|IF_SM},
    {I_OR, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+16090, IF_386|IF_SM},
    {I_OR, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20052, IF_386|IF_SM},
    {I_OR, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+16096, IF_X64|IF_SM},
    {I_OR, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20057, IF_X64|IF_SM},
    {I_OR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20062, IF_8086|IF_SM},
    {I_OR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16102, IF_8086|IF_SM},
    {I_OR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16108, IF_386|IF_SM},
    {I_OR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16114, IF_X64|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+20062, IF_8086|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+16102, IF_8086|IF_SM},
    {I_OR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+16108, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_ORPD[] = {
    {I_ORPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17500, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_ORPS[] = {
    {I_ORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16720, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUT[] = {
    {I_OUT, 2, {IMMEDIATE,REG_AL,0,0,0}, nasm_bytecodes+21489, IF_8086|IF_SB},
    {I_OUT, 2, {IMMEDIATE,REG_AX,0,0,0}, nasm_bytecodes+20067, IF_8086|IF_SB},
    {I_OUT, 2, {IMMEDIATE,REG_EAX,0,0,0}, nasm_bytecodes+20072, IF_386|IF_SB},
    {I_OUT, 2, {REG_DX,REG_AL,0,0,0}, nasm_bytecodes+21846, IF_8086},
    {I_OUT, 2, {REG_DX,REG_AX,0,0,0}, nasm_bytecodes+21493, IF_8086},
    {I_OUT, 2, {REG_DX,REG_EAX,0,0,0}, nasm_bytecodes+21497, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSB[] = {
    {I_OUTSB, 0, {0,0,0,0,0}, nasm_bytecodes+21849, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSD[] = {
    {I_OUTSD, 0, {0,0,0,0,0}, nasm_bytecodes+21501, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_OUTSW[] = {
    {I_OUTSW, 0, {0,0,0,0,0}, nasm_bytecodes+21505, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSB[] = {
    {I_PABSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8191, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PABSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8198, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSD[] = {
    {I_PABSD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8219, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PABSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8226, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PABSW[] = {
    {I_PABSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8205, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PABSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8212, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKSSDW[] = {
    {I_PACKSSDW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7372, IF_PENT|IF_MMX|IF_SQ},
    {I_PACKSSDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16930, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKSSWB[] = {
    {I_PACKSSWB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7379, IF_PENT|IF_MMX|IF_SQ},
    {I_PACKSSWB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16924, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKUSDW[] = {
    {I_PACKUSDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8443, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PACKUSWB[] = {
    {I_PACKUSWB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7386, IF_PENT|IF_MMX|IF_SQ},
    {I_PACKUSWB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16936, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDB[] = {
    {I_PADDB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7393, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16942, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDD[] = {
    {I_PADDD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7400, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16954, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDQ[] = {
    {I_PADDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16960, IF_WILLAMETTE|IF_MMX|IF_SQ},
    {I_PADDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16966, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSB[] = {
    {I_PADDSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7407, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16972, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSIW[] = {
    {I_PADDSIW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16120, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDSW[] = {
    {I_PADDSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7414, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16978, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDUSB[] = {
    {I_PADDUSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7421, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDUSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16984, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDUSW[] = {
    {I_PADDUSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7428, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDUSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16990, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PADDW[] = {
    {I_PADDW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7435, IF_PENT|IF_MMX|IF_SQ},
    {I_PADDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16948, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PALIGNR[] = {
    {I_PALIGNR, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, nasm_bytecodes+4090, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PALIGNR, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4098, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAND[] = {
    {I_PAND, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7442, IF_PENT|IF_MMX|IF_SQ},
    {I_PAND, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+16996, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PANDN[] = {
    {I_PANDN, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7449, IF_PENT|IF_MMX|IF_SQ},
    {I_PANDN, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17002, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAUSE[] = {
    {I_PAUSE, 0, {0,0,0,0,0}, nasm_bytecodes+20077, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVEB[] = {
    {I_PAVEB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16126, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGB[] = {
    {I_PAVGB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7904, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PAVGB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17008, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGUSB[] = {
    {I_PAVGUSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3618, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PAVGW[] = {
    {I_PAVGW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7911, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PAVGW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17014, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PBLENDVB[] = {
    {I_PBLENDVB, 3, {XMMREG,RM_XMM,XMM0,0,0}, nasm_bytecodes+8450, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PBLENDW[] = {
    {I_PBLENDW, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4170, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULHQHQDQ[] = {
    {I_PCLMULHQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3537, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULHQLQDQ[] = {
    {I_PCLMULHQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3519, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULLQHQDQ[] = {
    {I_PCLMULLQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3528, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULLQLQDQ[] = {
    {I_PCLMULLQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3510, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCLMULQDQ[] = {
    {I_PCLMULQDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5170, IF_SSE|IF_WESTMERE},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQB[] = {
    {I_PCMPEQB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7456, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPEQB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17020, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQD[] = {
    {I_PCMPEQD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7463, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPEQD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17032, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQQ[] = {
    {I_PCMPEQQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8457, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPEQW[] = {
    {I_PCMPEQW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7470, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPEQW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17026, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPESTRI[] = {
    {I_PCMPESTRI, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4242, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPESTRM[] = {
    {I_PCMPESTRM, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4250, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTB[] = {
    {I_PCMPGTB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7477, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPGTB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17038, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTD[] = {
    {I_PCMPGTD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7484, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPGTD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17050, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTQ[] = {
    {I_PCMPGTQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8632, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPGTW[] = {
    {I_PCMPGTW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7491, IF_PENT|IF_MMX|IF_SQ},
    {I_PCMPGTW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17044, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPISTRI[] = {
    {I_PCMPISTRI, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4258, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PCMPISTRM[] = {
    {I_PCMPISTRM, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4266, IF_SSE42},
    ITEMPLATE_END
};

static const struct itemplate instrux_PDEP[] = {
    {I_PDEP, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, nasm_bytecodes+15240, IF_FUTURE|IF_BMI2},
    {I_PDEP, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, nasm_bytecodes+15247, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PDISTIB[] = {
    {I_PDISTIB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+17297, IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXT[] = {
    {I_PEXT, 3, {REG_GPR|BITS32,REG_GPR|BITS32,RM_GPR|BITS32,0,0}, nasm_bytecodes+15254, IF_FUTURE|IF_BMI2},
    {I_PEXT, 3, {REG_GPR|BITS64,REG_GPR|BITS64,RM_GPR|BITS64,0,0}, nasm_bytecodes+15261, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRB[] = {
    {I_PEXTRB, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+10, IF_SSE41},
    {I_PEXTRB, 3, {MEMORY|BITS8,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+10, IF_SSE41},
    {I_PEXTRB, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+9, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRD[] = {
    {I_PEXTRD, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+19, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRQ[] = {
    {I_PEXTRQ, 3, {RM_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+18, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PEXTRW[] = {
    {I_PEXTRW, 3, {REG_GPR|BITS32,MMXREG,IMMEDIATE,0,0}, nasm_bytecodes+7918, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8009, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+28, IF_SSE41},
    {I_PEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+28, IF_SSE41},
    {I_PEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+27, IF_SSE41|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PF2ID[] = {
    {I_PF2ID, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3626, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PF2IW[] = {
    {I_PF2IW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3906, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFACC[] = {
    {I_PFACC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3634, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFADD[] = {
    {I_PFADD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3642, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPEQ[] = {
    {I_PFCMPEQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3650, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPGE[] = {
    {I_PFCMPGE, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3658, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFCMPGT[] = {
    {I_PFCMPGT, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3666, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMAX[] = {
    {I_PFMAX, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3674, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMIN[] = {
    {I_PFMIN, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3682, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFMUL[] = {
    {I_PFMUL, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3690, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFNACC[] = {
    {I_PFNACC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3914, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFPNACC[] = {
    {I_PFPNACC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3922, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCP[] = {
    {I_PFRCP, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3698, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPIT1[] = {
    {I_PFRCPIT1, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3706, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPIT2[] = {
    {I_PFRCPIT2, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3714, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRCPV[] = {
    {I_PFRCPV, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+4274, IF_PENT|IF_3DNOW|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQIT1[] = {
    {I_PFRSQIT1, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3722, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQRT[] = {
    {I_PFRSQRT, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3730, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFRSQRTV[] = {
    {I_PFRSQRTV, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+4282, IF_PENT|IF_3DNOW|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFSUB[] = {
    {I_PFSUB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3738, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PFSUBR[] = {
    {I_PFSUBR, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3746, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDD[] = {
    {I_PHADDD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8247, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHADDD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8254, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDSW[] = {
    {I_PHADDSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8261, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHADDSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8268, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHADDW[] = {
    {I_PHADDW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8233, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHADDW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8240, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHMINPOSUW[] = {
    {I_PHMINPOSUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8464, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBD[] = {
    {I_PHSUBD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8289, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHSUBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8296, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBSW[] = {
    {I_PHSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8303, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHSUBSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8310, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PHSUBW[] = {
    {I_PHSUBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8275, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PHSUBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8282, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PI2FD[] = {
    {I_PI2FD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3754, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PI2FW[] = {
    {I_PI2FW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3930, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRB[] = {
    {I_PINSRB, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+37, IF_SSE41|IF_SB|IF_AR2},
    {I_PINSRB, 3, {XMMREG,RM_GPR|BITS8,IMMEDIATE,0,0}, nasm_bytecodes+36, IF_SSE41|IF_SB|IF_AR2},
    {I_PINSRB, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+37, IF_SSE41|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRD[] = {
    {I_PINSRD, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+46, IF_SSE41|IF_SB|IF_AR2},
    {I_PINSRD, 3, {XMMREG,RM_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+46, IF_SSE41|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRQ[] = {
    {I_PINSRQ, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+45, IF_SSE41|IF_X64|IF_SB|IF_AR2},
    {I_PINSRQ, 3, {XMMREG,RM_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+45, IF_SSE41|IF_X64|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PINSRW[] = {
    {I_PINSRW, 3, {MMXREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+7925, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PINSRW, 3, {MMXREG,RM_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7925, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PINSRW, 3, {MMXREG,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7925, IF_KATMAI|IF_MMX|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+8016, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+8016, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8016, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PINSRW, 3, {XMMREG,MEMORY|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+8016, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMACHRIW[] = {
    {I_PMACHRIW, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+17393, IF_PENT|IF_MMX|IF_SM|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMADDUBSW[] = {
    {I_PMADDUBSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8317, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PMADDUBSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8324, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMADDWD[] = {
    {I_PMADDWD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7498, IF_PENT|IF_MMX|IF_SQ},
    {I_PMADDWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17056, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAGW[] = {
    {I_PMAGW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16132, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSB[] = {
    {I_PMAXSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8471, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSD[] = {
    {I_PMAXSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8478, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXSW[] = {
    {I_PMAXSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7932, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMAXSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17062, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUB[] = {
    {I_PMAXUB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7939, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMAXUB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17068, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUD[] = {
    {I_PMAXUD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8485, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMAXUW[] = {
    {I_PMAXUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8492, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSB[] = {
    {I_PMINSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8499, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSD[] = {
    {I_PMINSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8506, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINSW[] = {
    {I_PMINSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7946, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMINSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17074, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUB[] = {
    {I_PMINUB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7953, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMINUB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17080, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUD[] = {
    {I_PMINUD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8513, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMINUW[] = {
    {I_PMINUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8520, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVMSKB[] = {
    {I_PMOVMSKB, 2, {REG_GPR|BITS32,MMXREG,0,0,0}, nasm_bytecodes+16852, IF_KATMAI|IF_MMX},
    {I_PMOVMSKB, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+17086, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBD[] = {
    {I_PMOVSXBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8534, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBQ[] = {
    {I_PMOVSXBQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8541, IF_SSE41|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXBW[] = {
    {I_PMOVSXBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8527, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXDQ[] = {
    {I_PMOVSXDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8562, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXWD[] = {
    {I_PMOVSXWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8548, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVSXWQ[] = {
    {I_PMOVSXWQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8555, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBD[] = {
    {I_PMOVZXBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8576, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBQ[] = {
    {I_PMOVZXBQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8583, IF_SSE41|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXBW[] = {
    {I_PMOVZXBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8569, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXDQ[] = {
    {I_PMOVZXDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8604, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXWD[] = {
    {I_PMOVZXWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8590, IF_SSE41|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMOVZXWQ[] = {
    {I_PMOVZXWQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8597, IF_SSE41|IF_SD},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULDQ[] = {
    {I_PMULDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8611, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRIW[] = {
    {I_PMULHRIW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16138, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRSW[] = {
    {I_PMULHRSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8331, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PMULHRSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8338, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRWA[] = {
    {I_PMULHRWA, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3762, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHRWC[] = {
    {I_PMULHRWC, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16144, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHUW[] = {
    {I_PMULHUW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7960, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PMULHUW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17092, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULHW[] = {
    {I_PMULHW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7505, IF_PENT|IF_MMX|IF_SQ},
    {I_PMULHW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17098, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULLD[] = {
    {I_PMULLD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8618, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULLW[] = {
    {I_PMULLW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7512, IF_PENT|IF_MMX|IF_SQ},
    {I_PMULLW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17104, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMULUDQ[] = {
    {I_PMULUDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8023, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PMULUDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17110, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVGEZB[] = {
    {I_PMVGEZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+17525, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVLZB[] = {
    {I_PMVLZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+17381, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVNZB[] = {
    {I_PMVNZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+17363, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PMVZB[] = {
    {I_PMVZB, 2, {MMXREG,MEMORY,0,0,0}, nasm_bytecodes+17285, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_POP[] = {
    {I_POP, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+21509, IF_8086},
    {I_POP, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+21513, IF_386|IF_NOLONG},
    {I_POP, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+21517, IF_X64},
    {I_POP, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+20082, IF_8086},
    {I_POP, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+20087, IF_386|IF_NOLONG},
    {I_POP, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+20092, IF_X64},
    {I_POP, 1, {REG_CS,0,0,0,0}, nasm_bytecodes+3219, IF_8086|IF_UNDOC},
    {I_POP, 1, {REG_DESS,0,0,0,0}, nasm_bytecodes+21331, IF_8086|IF_NOLONG},
    {I_POP, 1, {REG_FSGS,0,0,0,0}, nasm_bytecodes+21521, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPA[] = {
    {I_POPA, 0, {0,0,0,0,0}, nasm_bytecodes+21525, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPAD[] = {
    {I_POPAD, 0, {0,0,0,0,0}, nasm_bytecodes+21529, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPAW[] = {
    {I_POPAW, 0, {0,0,0,0,0}, nasm_bytecodes+21533, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPCNT[] = {
    {I_POPCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+8639, IF_NEHALEM|IF_SW},
    {I_POPCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8646, IF_NEHALEM|IF_SD},
    {I_POPCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8653, IF_NEHALEM|IF_SQ|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPF[] = {
    {I_POPF, 0, {0,0,0,0,0}, nasm_bytecodes+21537, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFD[] = {
    {I_POPFD, 0, {0,0,0,0,0}, nasm_bytecodes+21541, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFQ[] = {
    {I_POPFQ, 0, {0,0,0,0,0}, nasm_bytecodes+21541, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_POPFW[] = {
    {I_POPFW, 0, {0,0,0,0,0}, nasm_bytecodes+21545, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_POR[] = {
    {I_POR, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7519, IF_PENT|IF_MMX|IF_SQ},
    {I_POR, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17116, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCH[] = {
    {I_PREFETCH, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20097, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHNTA[] = {
    {I_PREFETCHNTA, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17741, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT0[] = {
    {I_PREFETCHT0, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17759, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT1[] = {
    {I_PREFETCHT1, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17777, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHT2[] = {
    {I_PREFETCHT2, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17795, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_PREFETCHW[] = {
    {I_PREFETCHW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20102, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSADBW[] = {
    {I_PSADBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7967, IF_KATMAI|IF_MMX|IF_SQ},
    {I_PSADBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17122, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFB[] = {
    {I_PSHUFB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8345, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSHUFB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8352, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFD[] = {
    {I_PSHUFD, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8030, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PSHUFD, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8030, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFHW[] = {
    {I_PSHUFHW, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8037, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PSHUFHW, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8037, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFLW[] = {
    {I_PSHUFLW, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8044, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_PSHUFLW, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8044, IF_WILLAMETTE|IF_SSE2|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSHUFW[] = {
    {I_PSHUFW, 3, {MMXREG,RM_MMX,IMMEDIATE,0,0}, nasm_bytecodes+3898, IF_KATMAI|IF_MMX|IF_SM2|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGNB[] = {
    {I_PSIGNB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8359, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSIGNB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8366, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGND[] = {
    {I_PSIGND, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8387, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSIGND, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8394, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSIGNW[] = {
    {I_PSIGNW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8373, IF_SSSE3|IF_MMX|IF_SQ},
    {I_PSIGNW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8380, IF_SSSE3},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLD[] = {
    {I_PSLLD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7526, IF_PENT|IF_MMX|IF_SQ},
    {I_PSLLD, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7533, IF_PENT|IF_MMX},
    {I_PSLLD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17134, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSLLD, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8065, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLDQ[] = {
    {I_PSLLDQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8051, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLQ[] = {
    {I_PSLLQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7540, IF_PENT|IF_MMX|IF_SQ},
    {I_PSLLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7547, IF_PENT|IF_MMX},
    {I_PSLLQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17140, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSLLQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8072, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSLLW[] = {
    {I_PSLLW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7554, IF_PENT|IF_MMX|IF_SQ},
    {I_PSLLW, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7561, IF_PENT|IF_MMX},
    {I_PSLLW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17128, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSLLW, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8058, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRAD[] = {
    {I_PSRAD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7568, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRAD, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7575, IF_PENT|IF_MMX},
    {I_PSRAD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17152, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRAD, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8086, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRAW[] = {
    {I_PSRAW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7582, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRAW, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7589, IF_PENT|IF_MMX},
    {I_PSRAW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17146, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRAW, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8079, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLD[] = {
    {I_PSRLD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7596, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRLD, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7603, IF_PENT|IF_MMX},
    {I_PSRLD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17164, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRLD, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8107, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLDQ[] = {
    {I_PSRLDQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8093, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLQ[] = {
    {I_PSRLQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7610, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRLQ, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7617, IF_PENT|IF_MMX},
    {I_PSRLQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17170, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRLQ, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8114, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSRLW[] = {
    {I_PSRLW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7624, IF_PENT|IF_MMX|IF_SQ},
    {I_PSRLW, 2, {MMXREG,IMMEDIATE,0,0,0}, nasm_bytecodes+7631, IF_PENT|IF_MMX},
    {I_PSRLW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17158, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSRLW, 2, {XMMREG,IMMEDIATE,0,0,0}, nasm_bytecodes+8100, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR1},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBB[] = {
    {I_PSUBB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7638, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17176, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBD[] = {
    {I_PSUBD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7645, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17188, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBQ[] = {
    {I_PSUBQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+8121, IF_WILLAMETTE|IF_SSE2|IF_SO},
    {I_PSUBQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17194, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSB[] = {
    {I_PSUBSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7652, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17200, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSIW[] = {
    {I_PSUBSIW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+16150, IF_PENT|IF_MMX|IF_SQ|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBSW[] = {
    {I_PSUBSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7659, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17206, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBUSB[] = {
    {I_PSUBUSB, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7666, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBUSB, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17212, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBUSW[] = {
    {I_PSUBUSW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7673, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBUSW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17218, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSUBW[] = {
    {I_PSUBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7680, IF_PENT|IF_MMX|IF_SQ},
    {I_PSUBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17182, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PSWAPD[] = {
    {I_PSWAPD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+3938, IF_PENT|IF_3DNOW|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PTEST[] = {
    {I_PTEST, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+8625, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHBW[] = {
    {I_PUNPCKHBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7687, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKHBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17224, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHDQ[] = {
    {I_PUNPCKHDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7694, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKHDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17236, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHQDQ[] = {
    {I_PUNPCKHQDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17242, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKHWD[] = {
    {I_PUNPCKHWD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7701, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKHWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17230, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLBW[] = {
    {I_PUNPCKLBW, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7708, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKLBW, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17248, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLDQ[] = {
    {I_PUNPCKLDQ, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7715, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKLDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17260, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLQDQ[] = {
    {I_PUNPCKLQDQ, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17266, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUNPCKLWD[] = {
    {I_PUNPCKLWD, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7722, IF_PENT|IF_MMX|IF_SQ},
    {I_PUNPCKLWD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17254, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSH[] = {
    {I_PUSH, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+21549, IF_8086},
    {I_PUSH, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+21553, IF_386|IF_NOLONG},
    {I_PUSH, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+21557, IF_X64},
    {I_PUSH, 1, {RM_GPR|BITS16,0,0,0,0}, nasm_bytecodes+20107, IF_8086},
    {I_PUSH, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+20112, IF_386|IF_NOLONG},
    {I_PUSH, 1, {RM_GPR|BITS64,0,0,0,0}, nasm_bytecodes+20117, IF_X64},
    {I_PUSH, 1, {REG_CS,0,0,0,0}, nasm_bytecodes+21307, IF_8086|IF_NOLONG},
    {I_PUSH, 1, {REG_DESS,0,0,0,0}, nasm_bytecodes+21307, IF_8086|IF_NOLONG},
    {I_PUSH, 1, {REG_FSGS,0,0,0,0}, nasm_bytecodes+21561, IF_386},
    {I_PUSH, 1, {IMMEDIATE|BITS8,0,0,0,0}, nasm_bytecodes+21565, IF_186},
    {I_PUSH, 1, {IMMEDIATE|BITS16,0,0,0,0}, nasm_bytecodes+20122, IF_186|IF_AR0|IF_SZ},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+20127, IF_386|IF_NOLONG|IF_AR0|IF_SZ},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+20127, IF_386|IF_NOLONG|IF_SD},
    {I_PUSH, 1, {IMMEDIATE|BITS32,0,0,0,0}, nasm_bytecodes+20132, IF_X64|IF_AR0|IF_SZ},
    {I_PUSH, 1, {IMMEDIATE|BITS64,0,0,0,0}, nasm_bytecodes+20132, IF_X64|IF_AR0|IF_SZ},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHA[] = {
    {I_PUSHA, 0, {0,0,0,0,0}, nasm_bytecodes+21569, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHAD[] = {
    {I_PUSHAD, 0, {0,0,0,0,0}, nasm_bytecodes+21573, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHAW[] = {
    {I_PUSHAW, 0, {0,0,0,0,0}, nasm_bytecodes+21577, IF_186|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHF[] = {
    {I_PUSHF, 0, {0,0,0,0,0}, nasm_bytecodes+21581, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFD[] = {
    {I_PUSHFD, 0, {0,0,0,0,0}, nasm_bytecodes+21585, IF_386|IF_NOLONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFQ[] = {
    {I_PUSHFQ, 0, {0,0,0,0,0}, nasm_bytecodes+21585, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_PUSHFW[] = {
    {I_PUSHFW, 0, {0,0,0,0,0}, nasm_bytecodes+21589, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_PXOR[] = {
    {I_PXOR, 2, {MMXREG,RM_MMX,0,0,0}, nasm_bytecodes+7729, IF_PENT|IF_MMX|IF_SQ},
    {I_PXOR, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17272, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCL[] = {
    {I_RCL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21593, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21597, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20137, IF_186|IF_SB},
    {I_RCL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20142, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20147, IF_8086},
    {I_RCL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16156, IF_186|IF_SB},
    {I_RCL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20152, IF_386},
    {I_RCL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20157, IF_386},
    {I_RCL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16162, IF_386|IF_SB},
    {I_RCL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20162, IF_X64},
    {I_RCL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20167, IF_X64},
    {I_RCL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16168, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCPPS[] = {
    {I_RCPPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16726, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCPSS[] = {
    {I_RCPSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16732, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RCR[] = {
    {I_RCR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21601, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21605, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20172, IF_186|IF_SB},
    {I_RCR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20177, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20182, IF_8086},
    {I_RCR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16174, IF_186|IF_SB},
    {I_RCR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20187, IF_386},
    {I_RCR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20192, IF_386},
    {I_RCR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16180, IF_386|IF_SB},
    {I_RCR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20197, IF_X64},
    {I_RCR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20202, IF_X64},
    {I_RCR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16186, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDFSBASE[] = {
    {I_RDFSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12812, IF_LONG|IF_FUTURE},
    {I_RDFSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12811, IF_LONG|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDGSBASE[] = {
    {I_RDGSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12819, IF_LONG|IF_FUTURE},
    {I_RDGSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12818, IF_LONG|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDM[] = {
    {I_RDM, 0, {0,0,0,0,0}, nasm_bytecodes+20801, IF_P6|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDMSR[] = {
    {I_RDMSR, 0, {0,0,0,0,0}, nasm_bytecodes+21609, IF_PENT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDPMC[] = {
    {I_RDPMC, 0, {0,0,0,0,0}, nasm_bytecodes+21613, IF_P6},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDRAND[] = {
    {I_RDRAND, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+17662, IF_FUTURE},
    {I_RDRAND, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+17668, IF_FUTURE},
    {I_RDRAND, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+17674, IF_LONG|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDSHR[] = {
    {I_RDSHR, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16192, IF_P6|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDTSC[] = {
    {I_RDTSC, 0, {0,0,0,0,0}, nasm_bytecodes+21617, IF_PENT},
    ITEMPLATE_END
};

static const struct itemplate instrux_RDTSCP[] = {
    {I_RDTSCP, 0, {0,0,0,0,0}, nasm_bytecodes+20207, IF_X86_64},
    ITEMPLATE_END
};

static const struct itemplate instrux_RESB[] = {
    {I_RESB, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+20915, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_RESD[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESO[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESQ[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_REST[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESW[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RESY[] = {
    ITEMPLATE_END
};

static const struct itemplate instrux_RET[] = {
    {I_RET, 0, {0,0,0,0,0}, nasm_bytecodes+20734, IF_8086},
    {I_RET, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+21621, IF_8086|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETF[] = {
    {I_RETF, 0, {0,0,0,0,0}, nasm_bytecodes+21852, IF_8086},
    {I_RETF, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+21625, IF_8086|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_RETN[] = {
    {I_RETN, 0, {0,0,0,0,0}, nasm_bytecodes+20734, IF_8086},
    {I_RETN, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+21621, IF_8086|IF_SW},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROL[] = {
    {I_ROL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21629, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21633, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20212, IF_186|IF_SB},
    {I_ROL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20217, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20222, IF_8086},
    {I_ROL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16198, IF_186|IF_SB},
    {I_ROL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20227, IF_386},
    {I_ROL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20232, IF_386},
    {I_ROL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16204, IF_386|IF_SB},
    {I_ROL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20237, IF_X64},
    {I_ROL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20242, IF_X64},
    {I_ROL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16210, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROR[] = {
    {I_ROR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21637, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21641, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20247, IF_186|IF_SB},
    {I_ROR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20252, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20257, IF_8086},
    {I_ROR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16216, IF_186|IF_SB},
    {I_ROR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20262, IF_386},
    {I_ROR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20267, IF_386},
    {I_ROR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16222, IF_386|IF_SB},
    {I_ROR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20272, IF_X64},
    {I_ROR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20277, IF_X64},
    {I_ROR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16228, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_RORX[] = {
    {I_RORX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7202, IF_FUTURE|IF_BMI2},
    {I_RORX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7210, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDPD[] = {
    {I_ROUNDPD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4178, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDPS[] = {
    {I_ROUNDPS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4186, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDSD[] = {
    {I_ROUNDSD, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4194, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_ROUNDSS[] = {
    {I_ROUNDSS, 3, {XMMREG,RM_XMM,IMMEDIATE,0,0}, nasm_bytecodes+4202, IF_SSE41},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSDC[] = {
    {I_RSDC, 2, {REG_SREG,MEMORY|BITS80,0,0,0}, nasm_bytecodes+17633, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSLDT[] = {
    {I_RSLDT, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+20282, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSM[] = {
    {I_RSM, 0, {0,0,0,0,0}, nasm_bytecodes+21645, IF_PENT|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSQRTPS[] = {
    {I_RSQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16738, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSQRTSS[] = {
    {I_RSQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16744, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_RSTS[] = {
    {I_RSTS, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+20287, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAHF[] = {
    {I_SAHF, 0, {0,0,0,0,0}, nasm_bytecodes+3647, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAL[] = {
    {I_SAL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21649, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21653, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20292, IF_186|IF_SB},
    {I_SAL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20297, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20302, IF_8086},
    {I_SAL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16234, IF_186|IF_SB},
    {I_SAL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20307, IF_386},
    {I_SAL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20312, IF_386},
    {I_SAL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16240, IF_386|IF_SB},
    {I_SAL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20317, IF_X64},
    {I_SAL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20322, IF_X64},
    {I_SAL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16246, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SALC[] = {
    {I_SALC, 0, {0,0,0,0,0}, nasm_bytecodes+21855, IF_8086|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_SAR[] = {
    {I_SAR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21657, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21661, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20327, IF_186|IF_SB},
    {I_SAR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20332, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20337, IF_8086},
    {I_SAR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16252, IF_186|IF_SB},
    {I_SAR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20342, IF_386},
    {I_SAR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20347, IF_386},
    {I_SAR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16258, IF_386|IF_SB},
    {I_SAR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20352, IF_X64},
    {I_SAR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20357, IF_X64},
    {I_SAR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16264, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SARX[] = {
    {I_SARX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, nasm_bytecodes+15268, IF_FUTURE|IF_BMI2},
    {I_SARX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, nasm_bytecodes+15275, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SBB[] = {
    {I_SBB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21665, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21665, IF_8086},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20362, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20362, IF_8086},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20367, IF_386|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20367, IF_386},
    {I_SBB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20372, IF_X64|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20372, IF_X64},
    {I_SBB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+9076, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+9076, IF_8086},
    {I_SBB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+20377, IF_8086|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20377, IF_8086},
    {I_SBB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+20382, IF_386|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20382, IF_386},
    {I_SBB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+20387, IF_X64|IF_SM},
    {I_SBB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20387, IF_X64},
    {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16270, IF_8086},
    {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16276, IF_386},
    {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16282, IF_X64},
    {I_SBB, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+21669, IF_8086|IF_SM},
    {I_SBB, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+16270, IF_8086|IF_SM},
    {I_SBB, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+20392, IF_8086|IF_SM},
    {I_SBB, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+16276, IF_386|IF_SM},
    {I_SBB, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20397, IF_386|IF_SM},
    {I_SBB, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+16282, IF_X64|IF_SM},
    {I_SBB, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20402, IF_X64|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20407, IF_8086|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16288, IF_8086|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16294, IF_386|IF_SM},
    {I_SBB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16300, IF_X64|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+20407, IF_8086|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+16288, IF_8086|IF_SM},
    {I_SBB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+16294, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASB[] = {
    {I_SCASB, 0, {0,0,0,0,0}, nasm_bytecodes+21673, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASD[] = {
    {I_SCASD, 0, {0,0,0,0,0}, nasm_bytecodes+20412, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASQ[] = {
    {I_SCASQ, 0, {0,0,0,0,0}, nasm_bytecodes+20417, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SCASW[] = {
    {I_SCASW, 0, {0,0,0,0,0}, nasm_bytecodes+20422, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SFENCE[] = {
    {I_SFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+20427, IF_X64|IF_AMD},
    {I_SFENCE, 0, {0,0,0,0,0}, nasm_bytecodes+20427, IF_KATMAI},
    ITEMPLATE_END
};

static const struct itemplate instrux_SGDT[] = {
    {I_SGDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20432, IF_286},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHL[] = {
    {I_SHL, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21649, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21653, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20292, IF_186|IF_SB},
    {I_SHL, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20297, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20302, IF_8086},
    {I_SHL, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16234, IF_186|IF_SB},
    {I_SHL, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20307, IF_386},
    {I_SHL, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20312, IF_386},
    {I_SHL, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16240, IF_386|IF_SB},
    {I_SHL, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20317, IF_X64},
    {I_SHL, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20322, IF_X64},
    {I_SHL, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16246, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHLD[] = {
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7736, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7736, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7743, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7743, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7750, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7750, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+16306, IF_386|IF_SM},
    {I_SHLD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+16306, IF_386},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+16312, IF_386|IF_SM},
    {I_SHLD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+16312, IF_386},
    {I_SHLD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+16318, IF_X64|IF_SM},
    {I_SHLD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+16318, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHLX[] = {
    {I_SHLX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, nasm_bytecodes+15282, IF_FUTURE|IF_BMI2},
    {I_SHLX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, nasm_bytecodes+15289, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHR[] = {
    {I_SHR, 2, {RM_GPR|BITS8,UNITY,0,0,0}, nasm_bytecodes+21677, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS8,REG_CL,0,0,0}, nasm_bytecodes+21681, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20437, IF_186|IF_SB},
    {I_SHR, 2, {RM_GPR|BITS16,UNITY,0,0,0}, nasm_bytecodes+20442, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS16,REG_CL,0,0,0}, nasm_bytecodes+20447, IF_8086},
    {I_SHR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16324, IF_186|IF_SB},
    {I_SHR, 2, {RM_GPR|BITS32,UNITY,0,0,0}, nasm_bytecodes+20452, IF_386},
    {I_SHR, 2, {RM_GPR|BITS32,REG_CL,0,0,0}, nasm_bytecodes+20457, IF_386},
    {I_SHR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16330, IF_386|IF_SB},
    {I_SHR, 2, {RM_GPR|BITS64,UNITY,0,0,0}, nasm_bytecodes+20462, IF_X64},
    {I_SHR, 2, {RM_GPR|BITS64,REG_CL,0,0,0}, nasm_bytecodes+20467, IF_X64},
    {I_SHR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16336, IF_X64|IF_SB},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHRD[] = {
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7757, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,IMMEDIATE,0,0}, nasm_bytecodes+7757, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7764, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,IMMEDIATE,0,0}, nasm_bytecodes+7764, IF_386|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7771, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,IMMEDIATE,0,0}, nasm_bytecodes+7771, IF_X64|IF_SM2|IF_SB|IF_AR2},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+16342, IF_386|IF_SM},
    {I_SHRD, 3, {REG_GPR|BITS16,REG_GPR|BITS16,REG_CL,0,0}, nasm_bytecodes+16342, IF_386},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+16348, IF_386|IF_SM},
    {I_SHRD, 3, {REG_GPR|BITS32,REG_GPR|BITS32,REG_CL,0,0}, nasm_bytecodes+16348, IF_386},
    {I_SHRD, 3, {MEMORY,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+16354, IF_X64|IF_SM},
    {I_SHRD, 3, {REG_GPR|BITS64,REG_GPR|BITS64,REG_CL,0,0}, nasm_bytecodes+16354, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHRX[] = {
    {I_SHRX, 3, {REG_GPR|BITS32,RM_GPR|BITS32,REG_GPR|BITS32,0,0}, nasm_bytecodes+15296, IF_FUTURE|IF_BMI2},
    {I_SHRX, 3, {REG_GPR|BITS64,RM_GPR|BITS64,REG_GPR|BITS64,0,0}, nasm_bytecodes+15303, IF_LONG|IF_FUTURE|IF_BMI2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHUFPD[] = {
    {I_SHUFPD, 3, {XMMREG,XMMREG,IMMEDIATE,0,0}, nasm_bytecodes+8170, IF_WILLAMETTE|IF_SSE2|IF_SB|IF_AR2},
    {I_SHUFPD, 3, {XMMREG,MEMORY,IMMEDIATE,0,0}, nasm_bytecodes+8170, IF_WILLAMETTE|IF_SSE2|IF_SM|IF_SB|IF_AR2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SHUFPS[] = {
    {I_SHUFPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7897, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SIDT[] = {
    {I_SIDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20472, IF_286},
    ITEMPLATE_END
};

static const struct itemplate instrux_SKINIT[] = {
    {I_SKINIT, 0, {0,0,0,0,0}, nasm_bytecodes+20477, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SLDT[] = {
    {I_SLDT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16379, IF_286},
    {I_SLDT, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+16379, IF_286},
    {I_SLDT, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16360, IF_286},
    {I_SLDT, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16366, IF_386},
    {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16372, IF_X64},
    {I_SLDT, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16378, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SLWPCB[] = {
    {I_SLWPCB, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12867, IF_AMD|IF_386},
    {I_SLWPCB, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12874, IF_AMD|IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMI[] = {
    {I_SMI, 0, {0,0,0,0,0}, nasm_bytecodes+21825, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMINT[] = {
    {I_SMINT, 0, {0,0,0,0,0}, nasm_bytecodes+21685, IF_P6|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMINTOLD[] = {
    {I_SMINTOLD, 0, {0,0,0,0,0}, nasm_bytecodes+21689, IF_486|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_SMSW[] = {
    {I_SMSW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16391, IF_286},
    {I_SMSW, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+16391, IF_286},
    {I_SMSW, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16384, IF_286},
    {I_SMSW, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16390, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTPD[] = {
    {I_SQRTPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17506, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTPS[] = {
    {I_SQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16750, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTSD[] = {
    {I_SQRTSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17512, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SQRTSS[] = {
    {I_SQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16756, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_STC[] = {
    {I_STC, 0, {0,0,0,0,0}, nasm_bytecodes+20209, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STD[] = {
    {I_STD, 0, {0,0,0,0,0}, nasm_bytecodes+21858, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STGI[] = {
    {I_STGI, 0, {0,0,0,0,0}, nasm_bytecodes+20482, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_STI[] = {
    {I_STI, 0, {0,0,0,0,0}, nasm_bytecodes+21861, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STMXCSR[] = {
    {I_STMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+12834, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSB[] = {
    {I_STOSB, 0, {0,0,0,0,0}, nasm_bytecodes+3751, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSD[] = {
    {I_STOSD, 0, {0,0,0,0,0}, nasm_bytecodes+21693, IF_386},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSQ[] = {
    {I_STOSQ, 0, {0,0,0,0,0}, nasm_bytecodes+21697, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_STOSW[] = {
    {I_STOSW, 0, {0,0,0,0,0}, nasm_bytecodes+21701, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_STR[] = {
    {I_STR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16409, IF_286|IF_PROT},
    {I_STR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+16409, IF_286|IF_PROT},
    {I_STR, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+16396, IF_286|IF_PROT},
    {I_STR, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16402, IF_386|IF_PROT},
    {I_STR, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+16408, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUB[] = {
    {I_SUB, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21705, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21705, IF_8086},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20487, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20487, IF_8086},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20492, IF_386|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20492, IF_386},
    {I_SUB, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20497, IF_X64|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20497, IF_X64},
    {I_SUB, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+14774, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14774, IF_8086},
    {I_SUB, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+20502, IF_8086|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20502, IF_8086},
    {I_SUB, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+20507, IF_386|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20507, IF_386},
    {I_SUB, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+20512, IF_X64|IF_SM},
    {I_SUB, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20512, IF_X64},
    {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16414, IF_8086},
    {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16420, IF_386},
    {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16426, IF_X64},
    {I_SUB, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+21709, IF_8086|IF_SM},
    {I_SUB, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+16414, IF_8086|IF_SM},
    {I_SUB, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+20517, IF_8086|IF_SM},
    {I_SUB, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+16420, IF_386|IF_SM},
    {I_SUB, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20522, IF_386|IF_SM},
    {I_SUB, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+16426, IF_X64|IF_SM},
    {I_SUB, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20527, IF_X64|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20532, IF_8086|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16432, IF_8086|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16438, IF_386|IF_SM},
    {I_SUB, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16444, IF_X64|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+20532, IF_8086|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+16432, IF_8086|IF_SM},
    {I_SUB, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+16438, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBPD[] = {
    {I_SUBPD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17518, IF_WILLAMETTE|IF_SSE2|IF_SO},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBPS[] = {
    {I_SUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16762, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBSD[] = {
    {I_SUBSD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17524, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_SUBSS[] = {
    {I_SUBSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16768, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVDC[] = {
    {I_SVDC, 2, {MEMORY|BITS80,REG_SREG,0,0,0}, nasm_bytecodes+8179, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVLDT[] = {
    {I_SVLDT, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+20537, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SVTS[] = {
    {I_SVTS, 1, {MEMORY|BITS80,0,0,0,0}, nasm_bytecodes+20542, IF_486|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_SWAPGS[] = {
    {I_SWAPGS, 0, {0,0,0,0,0}, nasm_bytecodes+20547, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSCALL[] = {
    {I_SYSCALL, 0, {0,0,0,0,0}, nasm_bytecodes+21417, IF_P6|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSENTER[] = {
    {I_SYSENTER, 0, {0,0,0,0,0}, nasm_bytecodes+21713, IF_P6},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSEXIT[] = {
    {I_SYSEXIT, 0, {0,0,0,0,0}, nasm_bytecodes+21717, IF_P6|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_SYSRET[] = {
    {I_SYSRET, 0, {0,0,0,0,0}, nasm_bytecodes+21413, IF_P6|IF_PRIV|IF_AMD},
    ITEMPLATE_END
};

static const struct itemplate instrux_TEST[] = {
    {I_TEST, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21721, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21721, IF_8086},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20552, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20552, IF_8086},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20557, IF_386|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20557, IF_386},
    {I_TEST, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20562, IF_X64|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20562, IF_X64},
    {I_TEST, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+21725, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+20567, IF_8086|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+20572, IF_386|IF_SM},
    {I_TEST, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+20577, IF_X64|IF_SM},
    {I_TEST, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+21729, IF_8086|IF_SM},
    {I_TEST, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+20582, IF_8086|IF_SM},
    {I_TEST, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20587, IF_386|IF_SM},
    {I_TEST, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20592, IF_X64|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20597, IF_8086|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16450, IF_8086|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16456, IF_386|IF_SM},
    {I_TEST, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16462, IF_X64|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+20597, IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+16450, IF_8086|IF_SM},
    {I_TEST, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+16456, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_TZCNT[] = {
    {I_TZCNT, 2, {REG_GPR|BITS16,RM_GPR|BITS16,0,0,0}, nasm_bytecodes+15121, IF_FUTURE|IF_BMI1},
    {I_TZCNT, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+15128, IF_FUTURE|IF_BMI1},
    {I_TZCNT, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+15135, IF_LONG|IF_FUTURE|IF_BMI1},
    ITEMPLATE_END
};

static const struct itemplate instrux_UCOMISD[] = {
    {I_UCOMISD, 2, {XMMREG,RM_XMM,0,0,0}, nasm_bytecodes+17530, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_UCOMISS[] = {
    {I_UCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+16774, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD0[] = {
    {I_UD0, 0, {0,0,0,0,0}, nasm_bytecodes+21733, IF_186|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD1[] = {
    {I_UD1, 0, {0,0,0,0,0}, nasm_bytecodes+21737, IF_186|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2[] = {
    {I_UD2, 0, {0,0,0,0,0}, nasm_bytecodes+21741, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2A[] = {
    {I_UD2A, 0, {0,0,0,0,0}, nasm_bytecodes+21741, IF_186},
    ITEMPLATE_END
};

static const struct itemplate instrux_UD2B[] = {
    {I_UD2B, 0, {0,0,0,0,0}, nasm_bytecodes+21737, IF_186|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UMOV[] = {
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+16468, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+16468, IF_386|IF_UNDOC},
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7778, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7778, IF_386|IF_UNDOC},
    {I_UMOV, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7785, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7785, IF_386|IF_UNDOC},
    {I_UMOV, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+16474, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+16474, IF_386|IF_UNDOC},
    {I_UMOV, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+7792, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7792, IF_386|IF_UNDOC},
    {I_UMOV, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+7799, IF_386|IF_UNDOC|IF_SM},
    {I_UMOV, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7799, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKHPD[] = {
    {I_UNPCKHPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+17536, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKHPS[] = {
    {I_UNPCKHPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16780, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKLPD[] = {
    {I_UNPCKLPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+17542, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_UNPCKLPS[] = {
    {I_UNPCKLPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16786, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDPD[] = {
    {I_VADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8800, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8807, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8814, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8821, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDPS[] = {
    {I_VADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8828, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8835, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8842, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8849, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSD[] = {
    {I_VADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+8856, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+8863, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSS[] = {
    {I_VADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+8870, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+8877, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSUBPD[] = {
    {I_VADDSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8884, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8891, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8898, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8905, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VADDSUBPS[] = {
    {I_VADDSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8912, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8919, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8926, IF_AVX|IF_SANDYBRIDGE},
    {I_VADDSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8933, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESDEC[] = {
    {I_VAESDEC, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8765, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESDEC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8772, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESDECLAST[] = {
    {I_VAESDECLAST, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8779, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESDECLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8786, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESENC[] = {
    {I_VAESENC, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8737, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESENC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8744, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESENCLAST[] = {
    {I_VAESENCLAST, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8751, IF_AVX|IF_SANDYBRIDGE},
    {I_VAESENCLAST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8758, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESIMC[] = {
    {I_VAESIMC, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8793, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VAESKEYGENASSIST[] = {
    {I_VAESKEYGENASSIST, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4298, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDNPD[] = {
    {I_VANDNPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8996, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9003, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9010, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9017, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDNPS[] = {
    {I_VANDNPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9024, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9031, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9038, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDNPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9045, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDPD[] = {
    {I_VANDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8940, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8947, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8954, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8961, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VANDPS[] = {
    {I_VANDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+8968, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+8975, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+8982, IF_AVX|IF_SANDYBRIDGE},
    {I_VANDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+8989, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDPD[] = {
    {I_VBLENDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4306, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4314, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+4322, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4330, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDPS[] = {
    {I_VBLENDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4338, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4346, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+4354, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4362, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDVPD[] = {
    {I_VBLENDVPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4370, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4378, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4386, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4394, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBLENDVPS[] = {
    {I_VBLENDVPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4402, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4410, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+4418, IF_AVX|IF_SANDYBRIDGE},
    {I_VBLENDVPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+4426, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTF128[] = {
    {I_VBROADCASTF128, 2, {YMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9073, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTI128[] = {
    {I_VBROADCASTI128, 2, {YMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+14778, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTSD[] = {
    {I_VBROADCASTSD, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+9066, IF_AVX|IF_SANDYBRIDGE},
    {I_VBROADCASTSD, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+9066, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VBROADCASTSS[] = {
    {I_VBROADCASTSS, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9052, IF_AVX|IF_SANDYBRIDGE},
    {I_VBROADCASTSS, 2, {YMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9059, IF_AVX|IF_SANDYBRIDGE},
    {I_VBROADCASTSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9052, IF_FUTURE|IF_AVX2},
    {I_VBROADCASTSS, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+9059, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQPD[] = {
    {I_VCMPEQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+54, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+63, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+72, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+81, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQPS[] = {
    {I_VCMPEQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1206, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1215, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1224, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1233, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQSD[] = {
    {I_VCMPEQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2358, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2367, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQSS[] = {
    {I_VCMPEQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2934, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2943, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSPD[] = {
    {I_VCMPEQ_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+54, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+63, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+72, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+81, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+630, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+639, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+648, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+657, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSPS[] = {
    {I_VCMPEQ_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1206, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1215, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1224, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1233, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1782, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1791, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1800, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1809, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSSD[] = {
    {I_VCMPEQ_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2358, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2367, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2646, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2655, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_OSSS[] = {
    {I_VCMPEQ_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2934, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2943, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3222, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3231, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQPD[] = {
    {I_VCMPEQ_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+342, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+351, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+360, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+369, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQPS[] = {
    {I_VCMPEQ_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1494, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1503, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1512, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1521, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQSD[] = {
    {I_VCMPEQ_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2502, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2511, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_UQSS[] = {
    {I_VCMPEQ_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3078, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3087, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USPD[] = {
    {I_VCMPEQ_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+918, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+927, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+936, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+945, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USPS[] = {
    {I_VCMPEQ_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2070, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2079, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2088, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2097, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USSD[] = {
    {I_VCMPEQ_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2790, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2799, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPEQ_USSS[] = {
    {I_VCMPEQ_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3366, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPEQ_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3375, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSEPD[] = {
    {I_VCMPFALSEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+450, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+459, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+468, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+477, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSEPS[] = {
    {I_VCMPFALSEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1602, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1611, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1620, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1629, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSESD[] = {
    {I_VCMPFALSESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2556, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2565, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSESS[] = {
    {I_VCMPFALSESS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3132, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSESS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3141, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQPD[] = {
    {I_VCMPFALSE_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+450, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+459, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+468, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+477, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQPS[] = {
    {I_VCMPFALSE_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1602, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1611, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1620, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1629, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQSD[] = {
    {I_VCMPFALSE_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2556, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2565, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OQSS[] = {
    {I_VCMPFALSE_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3132, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3141, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSPD[] = {
    {I_VCMPFALSE_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1026, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1035, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1044, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1053, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSPS[] = {
    {I_VCMPFALSE_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2178, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2187, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2196, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2205, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSSD[] = {
    {I_VCMPFALSE_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2844, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2853, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPFALSE_OSSS[] = {
    {I_VCMPFALSE_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3420, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPFALSE_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3429, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGEPD[] = {
    {I_VCMPGEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+522, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+531, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+540, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+549, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGEPS[] = {
    {I_VCMPGEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1674, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1683, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1692, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1701, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGESD[] = {
    {I_VCMPGESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2592, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2601, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGESS[] = {
    {I_VCMPGESS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3168, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGESS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3177, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQPD[] = {
    {I_VCMPGE_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1098, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1107, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1116, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1125, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQPS[] = {
    {I_VCMPGE_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2250, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2259, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2268, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2277, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQSD[] = {
    {I_VCMPGE_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2880, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2889, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OQSS[] = {
    {I_VCMPGE_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3456, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3465, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSPD[] = {
    {I_VCMPGE_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+522, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+531, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+540, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+549, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSPS[] = {
    {I_VCMPGE_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1674, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1683, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1692, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1701, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSSD[] = {
    {I_VCMPGE_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2592, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2601, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGE_OSSS[] = {
    {I_VCMPGE_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3168, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGE_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3177, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTPD[] = {
    {I_VCMPGTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+558, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+567, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+576, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+585, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTPS[] = {
    {I_VCMPGTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1710, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1719, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1728, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1737, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTSD[] = {
    {I_VCMPGTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2610, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2619, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGTSS[] = {
    {I_VCMPGTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3186, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGTSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3195, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQPD[] = {
    {I_VCMPGT_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1134, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1143, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1152, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1161, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQPS[] = {
    {I_VCMPGT_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2286, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2295, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2304, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2313, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQSD[] = {
    {I_VCMPGT_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2898, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2907, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OQSS[] = {
    {I_VCMPGT_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3474, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3483, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSPD[] = {
    {I_VCMPGT_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+558, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+567, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+576, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+585, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSPS[] = {
    {I_VCMPGT_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1710, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1719, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1728, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1737, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSSD[] = {
    {I_VCMPGT_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2610, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2619, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPGT_OSSS[] = {
    {I_VCMPGT_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3186, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPGT_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3195, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLEPD[] = {
    {I_VCMPLEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+126, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+135, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+144, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+153, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLEPS[] = {
    {I_VCMPLEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1278, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1287, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1296, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1305, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLESD[] = {
    {I_VCMPLESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2394, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2403, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLESS[] = {
    {I_VCMPLESS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2970, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLESS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2979, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQPD[] = {
    {I_VCMPLE_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+702, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+711, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+720, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+729, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQPS[] = {
    {I_VCMPLE_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1854, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1863, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1872, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1881, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQSD[] = {
    {I_VCMPLE_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2682, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2691, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OQSS[] = {
    {I_VCMPLE_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3258, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3267, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSPD[] = {
    {I_VCMPLE_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+126, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+135, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+144, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+153, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSPS[] = {
    {I_VCMPLE_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1278, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1287, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1296, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1305, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSSD[] = {
    {I_VCMPLE_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2394, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2403, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLE_OSSS[] = {
    {I_VCMPLE_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2970, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLE_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2979, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTPD[] = {
    {I_VCMPLTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+90, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+99, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+108, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+117, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTPS[] = {
    {I_VCMPLTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1242, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1251, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1260, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1269, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTSD[] = {
    {I_VCMPLTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2376, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2385, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLTSS[] = {
    {I_VCMPLTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2952, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLTSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2961, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQPD[] = {
    {I_VCMPLT_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+666, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+675, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+684, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+693, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQPS[] = {
    {I_VCMPLT_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1818, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1827, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1836, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1845, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQSD[] = {
    {I_VCMPLT_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2664, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2673, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OQSS[] = {
    {I_VCMPLT_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3240, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3249, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSPD[] = {
    {I_VCMPLT_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+90, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+99, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+108, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+117, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSPS[] = {
    {I_VCMPLT_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1242, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1251, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1260, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1269, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSSD[] = {
    {I_VCMPLT_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2376, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2385, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPLT_OSSS[] = {
    {I_VCMPLT_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2952, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPLT_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2961, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQPD[] = {
    {I_VCMPNEQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+198, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+207, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+216, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+225, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQPS[] = {
    {I_VCMPNEQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1350, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1359, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1368, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1377, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQSD[] = {
    {I_VCMPNEQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2430, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2439, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQSS[] = {
    {I_VCMPNEQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3006, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3015, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQPD[] = {
    {I_VCMPNEQ_OQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+486, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+495, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+504, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+513, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQPS[] = {
    {I_VCMPNEQ_OQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1638, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1647, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1656, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1665, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQSD[] = {
    {I_VCMPNEQ_OQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2574, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2583, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OQSS[] = {
    {I_VCMPNEQ_OQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3150, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3159, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSPD[] = {
    {I_VCMPNEQ_OSPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1062, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1071, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1080, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1089, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSPS[] = {
    {I_VCMPNEQ_OSPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2214, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2223, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2232, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2241, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSSD[] = {
    {I_VCMPNEQ_OSSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2862, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2871, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_OSSS[] = {
    {I_VCMPNEQ_OSSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3438, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_OSSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3447, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQPD[] = {
    {I_VCMPNEQ_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+198, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+207, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+216, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+225, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQPS[] = {
    {I_VCMPNEQ_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1350, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1359, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1368, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1377, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQSD[] = {
    {I_VCMPNEQ_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2430, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2439, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_UQSS[] = {
    {I_VCMPNEQ_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3006, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3015, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USPD[] = {
    {I_VCMPNEQ_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+774, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+783, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+792, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+801, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USPS[] = {
    {I_VCMPNEQ_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1926, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1935, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1944, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1953, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USSD[] = {
    {I_VCMPNEQ_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2718, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2727, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNEQ_USSS[] = {
    {I_VCMPNEQ_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3294, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNEQ_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3303, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGEPD[] = {
    {I_VCMPNGEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+378, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+387, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+396, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+405, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGEPS[] = {
    {I_VCMPNGEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1530, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1539, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1548, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1557, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGESD[] = {
    {I_VCMPNGESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2520, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2529, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGESS[] = {
    {I_VCMPNGESS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3096, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGESS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3105, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQPD[] = {
    {I_VCMPNGE_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+954, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+963, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+972, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+981, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQPS[] = {
    {I_VCMPNGE_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2106, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2115, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2124, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2133, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQSD[] = {
    {I_VCMPNGE_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2808, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2817, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_UQSS[] = {
    {I_VCMPNGE_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3384, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3393, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USPD[] = {
    {I_VCMPNGE_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+378, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+387, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+396, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+405, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USPS[] = {
    {I_VCMPNGE_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1530, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1539, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1548, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1557, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USSD[] = {
    {I_VCMPNGE_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2520, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2529, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGE_USSS[] = {
    {I_VCMPNGE_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3096, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGE_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3105, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTPD[] = {
    {I_VCMPNGTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+414, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+423, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+432, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+441, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTPS[] = {
    {I_VCMPNGTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1566, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1575, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1584, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1593, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTSD[] = {
    {I_VCMPNGTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2538, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2547, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGTSS[] = {
    {I_VCMPNGTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3114, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGTSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3123, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQPD[] = {
    {I_VCMPNGT_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+990, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+999, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1008, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1017, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQPS[] = {
    {I_VCMPNGT_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2142, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2151, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2160, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2169, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQSD[] = {
    {I_VCMPNGT_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2826, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2835, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_UQSS[] = {
    {I_VCMPNGT_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3402, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3411, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USPD[] = {
    {I_VCMPNGT_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+414, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+423, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+432, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+441, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USPS[] = {
    {I_VCMPNGT_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1566, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1575, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1584, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1593, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USSD[] = {
    {I_VCMPNGT_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2538, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2547, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNGT_USSS[] = {
    {I_VCMPNGT_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3114, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNGT_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3123, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLEPD[] = {
    {I_VCMPNLEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+270, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+279, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+288, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+297, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLEPS[] = {
    {I_VCMPNLEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1422, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1431, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1440, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1449, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLESD[] = {
    {I_VCMPNLESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2466, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2475, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLESS[] = {
    {I_VCMPNLESS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3042, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLESS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3051, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQPD[] = {
    {I_VCMPNLE_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+846, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+855, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+864, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+873, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQPS[] = {
    {I_VCMPNLE_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1998, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2007, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2016, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2025, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQSD[] = {
    {I_VCMPNLE_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2754, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2763, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_UQSS[] = {
    {I_VCMPNLE_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3330, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3339, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USPD[] = {
    {I_VCMPNLE_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+270, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+279, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+288, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+297, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USPS[] = {
    {I_VCMPNLE_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1422, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1431, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1440, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1449, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USSD[] = {
    {I_VCMPNLE_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2466, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2475, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLE_USSS[] = {
    {I_VCMPNLE_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3042, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLE_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3051, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTPD[] = {
    {I_VCMPNLTPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+234, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+243, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+252, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+261, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTPS[] = {
    {I_VCMPNLTPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1386, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1395, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1404, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1413, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTSD[] = {
    {I_VCMPNLTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2448, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2457, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLTSS[] = {
    {I_VCMPNLTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3024, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLTSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3033, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQPD[] = {
    {I_VCMPNLT_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+810, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+819, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+828, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+837, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQPS[] = {
    {I_VCMPNLT_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1962, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1971, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1980, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1989, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQSD[] = {
    {I_VCMPNLT_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2736, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2745, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_UQSS[] = {
    {I_VCMPNLT_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3312, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3321, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USPD[] = {
    {I_VCMPNLT_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+234, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+243, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+252, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+261, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USPS[] = {
    {I_VCMPNLT_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1386, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1395, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1404, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1413, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USSD[] = {
    {I_VCMPNLT_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2448, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2457, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPNLT_USSS[] = {
    {I_VCMPNLT_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3024, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPNLT_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3033, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDPD[] = {
    {I_VCMPORDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+306, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+315, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+324, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+333, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDPS[] = {
    {I_VCMPORDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1458, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1467, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1476, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1485, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDSD[] = {
    {I_VCMPORDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2484, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2493, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORDSS[] = {
    {I_VCMPORDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3060, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORDSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3069, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QPD[] = {
    {I_VCMPORD_QPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+306, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+315, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+324, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+333, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QPS[] = {
    {I_VCMPORD_QPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1458, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1467, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1476, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1485, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QSD[] = {
    {I_VCMPORD_QSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2484, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2493, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_QSS[] = {
    {I_VCMPORD_QSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3060, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_QSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3069, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SPD[] = {
    {I_VCMPORD_SPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+882, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+891, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+900, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+909, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SPS[] = {
    {I_VCMPORD_SPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2034, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2043, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2052, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2061, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SSD[] = {
    {I_VCMPORD_SSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2772, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2781, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPORD_SSS[] = {
    {I_VCMPORD_SSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3348, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPORD_SSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3357, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPPD[] = {
    {I_VCMPPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4434, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4442, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+4450, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4458, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPPS[] = {
    {I_VCMPPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4466, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4474, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+4482, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4490, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPSD[] = {
    {I_VCMPSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+4498, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPSD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4506, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPSS[] = {
    {I_VCMPSS, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+4514, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPSS, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4522, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUEPD[] = {
    {I_VCMPTRUEPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+594, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+603, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+612, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+621, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUEPS[] = {
    {I_VCMPTRUEPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1746, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1755, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1764, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUEPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1773, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUESD[] = {
    {I_VCMPTRUESD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2628, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUESD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2637, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUESS[] = {
    {I_VCMPTRUESS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3204, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUESS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3213, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQPD[] = {
    {I_VCMPTRUE_UQPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+594, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+603, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+612, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+621, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQPS[] = {
    {I_VCMPTRUE_UQPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1746, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1755, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1764, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1773, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQSD[] = {
    {I_VCMPTRUE_UQSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2628, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2637, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_UQSS[] = {
    {I_VCMPTRUE_UQSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3204, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_UQSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3213, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USPD[] = {
    {I_VCMPTRUE_USPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1170, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1179, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1188, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1197, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USPS[] = {
    {I_VCMPTRUE_USPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+2322, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+2331, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+2340, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+2349, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USSD[] = {
    {I_VCMPTRUE_USSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2916, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2925, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPTRUE_USSS[] = {
    {I_VCMPTRUE_USSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3492, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPTRUE_USSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3501, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDPD[] = {
    {I_VCMPUNORDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+162, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+171, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+180, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+189, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDPS[] = {
    {I_VCMPUNORDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1314, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1323, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1332, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1341, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDSD[] = {
    {I_VCMPUNORDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2412, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2421, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORDSS[] = {
    {I_VCMPUNORDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2988, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORDSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2997, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QPD[] = {
    {I_VCMPUNORD_QPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+162, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+171, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+180, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+189, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QPS[] = {
    {I_VCMPUNORD_QPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1314, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1323, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1332, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1341, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QSD[] = {
    {I_VCMPUNORD_QSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2412, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2421, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_QSS[] = {
    {I_VCMPUNORD_QSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2988, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_QSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2997, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SPD[] = {
    {I_VCMPUNORD_SPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+738, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+747, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+756, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+765, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SPS[] = {
    {I_VCMPUNORD_SPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+1890, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+1899, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+1908, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+1917, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SSD[] = {
    {I_VCMPUNORD_SSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+2700, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+2709, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCMPUNORD_SSS[] = {
    {I_VCMPUNORD_SSS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+3276, IF_AVX|IF_SANDYBRIDGE},
    {I_VCMPUNORD_SSS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+3285, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMISD[] = {
    {I_VCOMISD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9080, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCOMISS[] = {
    {I_VCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9087, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTDQ2PD[] = {
    {I_VCVTDQ2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9094, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTDQ2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9101, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTDQ2PS[] = {
    {I_VCVTDQ2PS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9108, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTDQ2PS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9115, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2DQ[] = {
    {I_VCVTPD2DQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9122, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2DQ, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9122, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VCVTPD2DQ, 2, {XMMREG,YMMREG,0,0,0}, nasm_bytecodes+9129, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2DQ, 2, {XMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9129, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPD2PS[] = {
    {I_VCVTPD2PS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9136, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2PS, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9136, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VCVTPD2PS, 2, {XMMREG,YMMREG,0,0,0}, nasm_bytecodes+9143, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPD2PS, 2, {XMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9143, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPH2PS[] = {
    {I_VCVTPH2PS, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12839, IF_AVX|IF_FUTURE},
    {I_VCVTPH2PS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+12846, IF_AVX|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2DQ[] = {
    {I_VCVTPS2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9150, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPS2DQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9157, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2PD[] = {
    {I_VCVTPS2PD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9164, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTPS2PD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9171, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTPS2PH[] = {
    {I_VCVTPS2PH, 3, {RM_XMM|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5194, IF_AVX|IF_FUTURE},
    {I_VCVTPS2PH, 3, {RM_XMM|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5202, IF_AVX|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2SI[] = {
    {I_VCVTSD2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9178, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSD2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9185, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSD2SS[] = {
    {I_VCVTSD2SS, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9192, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSD2SS, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9199, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSI2SD[] = {
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, nasm_bytecodes+9206, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+9213, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,MEMORY|BITS32,0,0}, nasm_bytecodes+9206, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9213, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SD, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, nasm_bytecodes+9220, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    {I_VCVTSI2SD, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+9227, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSI2SS[] = {
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS32,0,0}, nasm_bytecodes+9234, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+9241, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,MEMORY|BITS32,0,0}, nasm_bytecodes+9234, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+9241, IF_AVX|IF_SANDYBRIDGE|IF_SD},
    {I_VCVTSI2SS, 3, {XMMREG,XMMREG,RM_GPR|BITS64,0,0}, nasm_bytecodes+9248, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    {I_VCVTSI2SS, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+9255, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2SD[] = {
    {I_VCVTSS2SD, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9262, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSS2SD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9269, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTSS2SI[] = {
    {I_VCVTSS2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9276, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTSS2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9283, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPD2DQ[] = {
    {I_VCVTTPD2DQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9290, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTPD2DQ, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9290, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VCVTTPD2DQ, 2, {XMMREG,YMMREG,0,0,0}, nasm_bytecodes+9297, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTPD2DQ, 2, {XMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9297, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTPS2DQ[] = {
    {I_VCVTTPS2DQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9304, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTPS2DQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9311, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSD2SI[] = {
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9318, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTSD2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9325, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VCVTTSS2SI[] = {
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS32,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9332, IF_AVX|IF_SANDYBRIDGE},
    {I_VCVTTSS2SI, 2, {REG_GPR|BITS64,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9339, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVPD[] = {
    {I_VDIVPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9346, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9353, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9360, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9367, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVPS[] = {
    {I_VDIVPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9374, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9381, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9388, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9395, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVSD[] = {
    {I_VDIVSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9402, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9409, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDIVSS[] = {
    {I_VDIVSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9416, IF_AVX|IF_SANDYBRIDGE},
    {I_VDIVSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9423, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDPPD[] = {
    {I_VDPPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4530, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4538, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VDPPS[] = {
    {I_VDPPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4546, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4554, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+4562, IF_AVX|IF_SANDYBRIDGE},
    {I_VDPPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4570, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VERR[] = {
    {I_VERR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20602, IF_286|IF_PROT},
    {I_VERR, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+20602, IF_286|IF_PROT},
    {I_VERR, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+20602, IF_286|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_VERW[] = {
    {I_VERW, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20607, IF_286|IF_PROT},
    {I_VERW, 1, {MEMORY|BITS16,0,0,0,0}, nasm_bytecodes+20607, IF_286|IF_PROT},
    {I_VERW, 1, {REG_GPR|BITS16,0,0,0,0}, nasm_bytecodes+20607, IF_286|IF_PROT},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTF128[] = {
    {I_VEXTRACTF128, 3, {RM_XMM|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4578, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTI128[] = {
    {I_VEXTRACTI128, 3, {RM_XMM|BITS128,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7050, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VEXTRACTPS[] = {
    {I_VEXTRACTPS, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4586, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123PD[] = {
    {I_VFMADD123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12181, IF_FMA|IF_FUTURE},
    {I_VFMADD123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12188, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123PS[] = {
    {I_VFMADD123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12167, IF_FMA|IF_FUTURE},
    {I_VFMADD123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12174, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123SD[] = {
    {I_VFMADD123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12664, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD123SS[] = {
    {I_VFMADD123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12657, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132PD[] = {
    {I_VFMADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12153, IF_FMA|IF_FUTURE},
    {I_VFMADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12160, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132PS[] = {
    {I_VFMADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12139, IF_FMA|IF_FUTURE},
    {I_VFMADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12146, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132SD[] = {
    {I_VFMADD132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12650, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD132SS[] = {
    {I_VFMADD132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12643, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213PD[] = {
    {I_VFMADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12181, IF_FMA|IF_FUTURE},
    {I_VFMADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12188, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213PS[] = {
    {I_VFMADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12167, IF_FMA|IF_FUTURE},
    {I_VFMADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12174, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213SD[] = {
    {I_VFMADD213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12664, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD213SS[] = {
    {I_VFMADD213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12657, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231PD[] = {
    {I_VFMADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12209, IF_FMA|IF_FUTURE},
    {I_VFMADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12216, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231PS[] = {
    {I_VFMADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12195, IF_FMA|IF_FUTURE},
    {I_VFMADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12202, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231SD[] = {
    {I_VFMADD231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12678, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD231SS[] = {
    {I_VFMADD231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12671, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312PD[] = {
    {I_VFMADD312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12153, IF_FMA|IF_FUTURE},
    {I_VFMADD312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12160, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312PS[] = {
    {I_VFMADD312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12139, IF_FMA|IF_FUTURE},
    {I_VFMADD312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12146, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312SD[] = {
    {I_VFMADD312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12650, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD312SS[] = {
    {I_VFMADD312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12643, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321PD[] = {
    {I_VFMADD321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12209, IF_FMA|IF_FUTURE},
    {I_VFMADD321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12216, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321PS[] = {
    {I_VFMADD321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12195, IF_FMA|IF_FUTURE},
    {I_VFMADD321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12202, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321SD[] = {
    {I_VFMADD321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12678, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADD321SS[] = {
    {I_VFMADD321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12671, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDPD[] = {
    {I_VFMADDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5242, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5250, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5258, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5266, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5274, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5282, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5290, IF_AMD|IF_SSE5},
    {I_VFMADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5298, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDPS[] = {
    {I_VFMADDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5306, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5314, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5322, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5330, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5338, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5346, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5354, IF_AMD|IF_SSE5},
    {I_VFMADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5362, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSD[] = {
    {I_VFMADDSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+5370, IF_AMD|IF_SSE5},
    {I_VFMADDSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+5378, IF_AMD|IF_SSE5},
    {I_VFMADDSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+5386, IF_AMD|IF_SSE5},
    {I_VFMADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+5394, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSS[] = {
    {I_VFMADDSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+5402, IF_AMD|IF_SSE5},
    {I_VFMADDSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+5410, IF_AMD|IF_SSE5},
    {I_VFMADDSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+5418, IF_AMD|IF_SSE5},
    {I_VFMADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+5426, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB123PD[] = {
    {I_VFMADDSUB123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12265, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12272, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB123PS[] = {
    {I_VFMADDSUB123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12251, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12258, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB132PD[] = {
    {I_VFMADDSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12237, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12244, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB132PS[] = {
    {I_VFMADDSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12223, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12230, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB213PD[] = {
    {I_VFMADDSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12265, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12272, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB213PS[] = {
    {I_VFMADDSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12251, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12258, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB231PD[] = {
    {I_VFMADDSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12293, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12300, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB231PS[] = {
    {I_VFMADDSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12279, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12286, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB312PD[] = {
    {I_VFMADDSUB312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12237, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12244, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB312PS[] = {
    {I_VFMADDSUB312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12223, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12230, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB321PD[] = {
    {I_VFMADDSUB321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12293, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12300, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUB321PS[] = {
    {I_VFMADDSUB321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12279, IF_FMA|IF_FUTURE},
    {I_VFMADDSUB321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12286, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUBPD[] = {
    {I_VFMADDSUBPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5434, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5442, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5450, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5458, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5466, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5474, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5482, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5490, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMADDSUBPS[] = {
    {I_VFMADDSUBPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5498, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5506, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5514, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5522, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5530, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5538, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5546, IF_AMD|IF_SSE5},
    {I_VFMADDSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5554, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123PD[] = {
    {I_VFMSUB123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12349, IF_FMA|IF_FUTURE},
    {I_VFMSUB123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12356, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123PS[] = {
    {I_VFMSUB123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12335, IF_FMA|IF_FUTURE},
    {I_VFMSUB123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12342, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123SD[] = {
    {I_VFMSUB123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12706, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB123SS[] = {
    {I_VFMSUB123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12699, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132PD[] = {
    {I_VFMSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12321, IF_FMA|IF_FUTURE},
    {I_VFMSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12328, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132PS[] = {
    {I_VFMSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12307, IF_FMA|IF_FUTURE},
    {I_VFMSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12314, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132SD[] = {
    {I_VFMSUB132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12692, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB132SS[] = {
    {I_VFMSUB132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12685, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213PD[] = {
    {I_VFMSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12349, IF_FMA|IF_FUTURE},
    {I_VFMSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12356, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213PS[] = {
    {I_VFMSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12335, IF_FMA|IF_FUTURE},
    {I_VFMSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12342, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213SD[] = {
    {I_VFMSUB213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12706, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB213SS[] = {
    {I_VFMSUB213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12699, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231PD[] = {
    {I_VFMSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12377, IF_FMA|IF_FUTURE},
    {I_VFMSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12384, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231PS[] = {
    {I_VFMSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12363, IF_FMA|IF_FUTURE},
    {I_VFMSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12370, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231SD[] = {
    {I_VFMSUB231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12720, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB231SS[] = {
    {I_VFMSUB231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12713, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312PD[] = {
    {I_VFMSUB312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12321, IF_FMA|IF_FUTURE},
    {I_VFMSUB312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12328, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312PS[] = {
    {I_VFMSUB312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12307, IF_FMA|IF_FUTURE},
    {I_VFMSUB312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12314, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312SD[] = {
    {I_VFMSUB312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12692, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB312SS[] = {
    {I_VFMSUB312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12685, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321PD[] = {
    {I_VFMSUB321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12377, IF_FMA|IF_FUTURE},
    {I_VFMSUB321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12384, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321PS[] = {
    {I_VFMSUB321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12363, IF_FMA|IF_FUTURE},
    {I_VFMSUB321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12370, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321SD[] = {
    {I_VFMSUB321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12720, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUB321SS[] = {
    {I_VFMSUB321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12713, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD123PD[] = {
    {I_VFMSUBADD123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12433, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12440, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD123PS[] = {
    {I_VFMSUBADD123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12419, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12426, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD132PD[] = {
    {I_VFMSUBADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12405, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12412, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD132PS[] = {
    {I_VFMSUBADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12391, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12398, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD213PD[] = {
    {I_VFMSUBADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12433, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12440, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD213PS[] = {
    {I_VFMSUBADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12419, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12426, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD231PD[] = {
    {I_VFMSUBADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12461, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12468, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD231PS[] = {
    {I_VFMSUBADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12447, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12454, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD312PD[] = {
    {I_VFMSUBADD312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12405, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12412, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD312PS[] = {
    {I_VFMSUBADD312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12391, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12398, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD321PD[] = {
    {I_VFMSUBADD321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12461, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12468, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADD321PS[] = {
    {I_VFMSUBADD321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12447, IF_FMA|IF_FUTURE},
    {I_VFMSUBADD321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12454, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADDPD[] = {
    {I_VFMSUBADDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5562, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5570, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5578, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5586, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5594, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5602, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5610, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5618, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBADDPS[] = {
    {I_VFMSUBADDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5626, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5634, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5642, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5650, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5658, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5666, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5674, IF_AMD|IF_SSE5},
    {I_VFMSUBADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5682, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBPD[] = {
    {I_VFMSUBPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5690, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5698, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5706, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5714, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5722, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5730, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5738, IF_AMD|IF_SSE5},
    {I_VFMSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5746, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBPS[] = {
    {I_VFMSUBPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5754, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5762, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5770, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5778, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5786, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5794, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5802, IF_AMD|IF_SSE5},
    {I_VFMSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5810, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBSD[] = {
    {I_VFMSUBSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+5818, IF_AMD|IF_SSE5},
    {I_VFMSUBSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+5826, IF_AMD|IF_SSE5},
    {I_VFMSUBSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+5834, IF_AMD|IF_SSE5},
    {I_VFMSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+5842, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFMSUBSS[] = {
    {I_VFMSUBSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+5850, IF_AMD|IF_SSE5},
    {I_VFMSUBSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+5858, IF_AMD|IF_SSE5},
    {I_VFMSUBSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+5866, IF_AMD|IF_SSE5},
    {I_VFMSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+5874, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123PD[] = {
    {I_VFNMADD123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12517, IF_FMA|IF_FUTURE},
    {I_VFNMADD123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12524, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123PS[] = {
    {I_VFNMADD123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12503, IF_FMA|IF_FUTURE},
    {I_VFNMADD123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12510, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123SD[] = {
    {I_VFNMADD123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12748, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD123SS[] = {
    {I_VFNMADD123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12741, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132PD[] = {
    {I_VFNMADD132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12489, IF_FMA|IF_FUTURE},
    {I_VFNMADD132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12496, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132PS[] = {
    {I_VFNMADD132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12475, IF_FMA|IF_FUTURE},
    {I_VFNMADD132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12482, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132SD[] = {
    {I_VFNMADD132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12734, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD132SS[] = {
    {I_VFNMADD132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12727, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213PD[] = {
    {I_VFNMADD213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12517, IF_FMA|IF_FUTURE},
    {I_VFNMADD213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12524, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213PS[] = {
    {I_VFNMADD213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12503, IF_FMA|IF_FUTURE},
    {I_VFNMADD213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12510, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213SD[] = {
    {I_VFNMADD213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12748, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD213SS[] = {
    {I_VFNMADD213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12741, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231PD[] = {
    {I_VFNMADD231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12545, IF_FMA|IF_FUTURE},
    {I_VFNMADD231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12552, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231PS[] = {
    {I_VFNMADD231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12531, IF_FMA|IF_FUTURE},
    {I_VFNMADD231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12538, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231SD[] = {
    {I_VFNMADD231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12762, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD231SS[] = {
    {I_VFNMADD231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12755, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312PD[] = {
    {I_VFNMADD312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12489, IF_FMA|IF_FUTURE},
    {I_VFNMADD312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12496, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312PS[] = {
    {I_VFNMADD312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12475, IF_FMA|IF_FUTURE},
    {I_VFNMADD312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12482, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312SD[] = {
    {I_VFNMADD312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12734, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD312SS[] = {
    {I_VFNMADD312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12727, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321PD[] = {
    {I_VFNMADD321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12545, IF_FMA|IF_FUTURE},
    {I_VFNMADD321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12552, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321PS[] = {
    {I_VFNMADD321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12531, IF_FMA|IF_FUTURE},
    {I_VFNMADD321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12538, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321SD[] = {
    {I_VFNMADD321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12762, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADD321SS[] = {
    {I_VFNMADD321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12755, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDPD[] = {
    {I_VFNMADDPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5882, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5890, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5898, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5906, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5914, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5922, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5930, IF_AMD|IF_SSE5},
    {I_VFNMADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+5938, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDPS[] = {
    {I_VFNMADDPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+5946, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+5954, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+5962, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+5970, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+5978, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+5986, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+5994, IF_AMD|IF_SSE5},
    {I_VFNMADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+6002, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDSD[] = {
    {I_VFNMADDSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+6010, IF_AMD|IF_SSE5},
    {I_VFNMADDSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+6018, IF_AMD|IF_SSE5},
    {I_VFNMADDSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+6026, IF_AMD|IF_SSE5},
    {I_VFNMADDSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+6034, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMADDSS[] = {
    {I_VFNMADDSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+6042, IF_AMD|IF_SSE5},
    {I_VFNMADDSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+6050, IF_AMD|IF_SSE5},
    {I_VFNMADDSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+6058, IF_AMD|IF_SSE5},
    {I_VFNMADDSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+6066, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123PD[] = {
    {I_VFNMSUB123PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12601, IF_FMA|IF_FUTURE},
    {I_VFNMSUB123PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12608, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123PS[] = {
    {I_VFNMSUB123PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12587, IF_FMA|IF_FUTURE},
    {I_VFNMSUB123PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12594, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123SD[] = {
    {I_VFNMSUB123SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12790, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB123SS[] = {
    {I_VFNMSUB123SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12783, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132PD[] = {
    {I_VFNMSUB132PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12573, IF_FMA|IF_FUTURE},
    {I_VFNMSUB132PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12580, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132PS[] = {
    {I_VFNMSUB132PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12559, IF_FMA|IF_FUTURE},
    {I_VFNMSUB132PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12566, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132SD[] = {
    {I_VFNMSUB132SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12776, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB132SS[] = {
    {I_VFNMSUB132SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12769, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213PD[] = {
    {I_VFNMSUB213PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12601, IF_FMA|IF_FUTURE},
    {I_VFNMSUB213PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12608, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213PS[] = {
    {I_VFNMSUB213PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12587, IF_FMA|IF_FUTURE},
    {I_VFNMSUB213PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12594, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213SD[] = {
    {I_VFNMSUB213SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12790, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB213SS[] = {
    {I_VFNMSUB213SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12783, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231PD[] = {
    {I_VFNMSUB231PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12629, IF_FMA|IF_FUTURE},
    {I_VFNMSUB231PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12636, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231PS[] = {
    {I_VFNMSUB231PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12615, IF_FMA|IF_FUTURE},
    {I_VFNMSUB231PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12622, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231SD[] = {
    {I_VFNMSUB231SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12804, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB231SS[] = {
    {I_VFNMSUB231SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12797, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312PD[] = {
    {I_VFNMSUB312PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12573, IF_FMA|IF_FUTURE},
    {I_VFNMSUB312PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12580, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312PS[] = {
    {I_VFNMSUB312PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12559, IF_FMA|IF_FUTURE},
    {I_VFNMSUB312PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12566, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312SD[] = {
    {I_VFNMSUB312SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12776, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB312SS[] = {
    {I_VFNMSUB312SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12769, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321PD[] = {
    {I_VFNMSUB321PD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12629, IF_FMA|IF_FUTURE},
    {I_VFNMSUB321PD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12636, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321PS[] = {
    {I_VFNMSUB321PS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12615, IF_FMA|IF_FUTURE},
    {I_VFNMSUB321PS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12622, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321SD[] = {
    {I_VFNMSUB321SD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+12804, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUB321SS[] = {
    {I_VFNMSUB321SS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+12797, IF_FMA|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBPD[] = {
    {I_VFNMSUBPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6074, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6082, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+6090, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+6098, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+6106, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+6114, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+6122, IF_AMD|IF_SSE5},
    {I_VFNMSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+6130, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBPS[] = {
    {I_VFNMSUBPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6138, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6146, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+6154, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+6162, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+6170, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+6178, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+6186, IF_AMD|IF_SSE5},
    {I_VFNMSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+6194, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBSD[] = {
    {I_VFNMSUBSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,XMMREG,0}, nasm_bytecodes+6202, IF_AMD|IF_SSE5},
    {I_VFNMSUBSD, 3, {XMMREG,RM_XMM|BITS64,XMMREG,0,0}, nasm_bytecodes+6210, IF_AMD|IF_SSE5},
    {I_VFNMSUBSD, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS64,0}, nasm_bytecodes+6218, IF_AMD|IF_SSE5},
    {I_VFNMSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+6226, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFNMSUBSS[] = {
    {I_VFNMSUBSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,XMMREG,0}, nasm_bytecodes+6234, IF_AMD|IF_SSE5},
    {I_VFNMSUBSS, 3, {XMMREG,RM_XMM|BITS32,XMMREG,0,0}, nasm_bytecodes+6242, IF_AMD|IF_SSE5},
    {I_VFNMSUBSS, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS32,0}, nasm_bytecodes+6250, IF_AMD|IF_SSE5},
    {I_VFNMSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+6258, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZPD[] = {
    {I_VFRCZPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12881, IF_AMD|IF_SSE5},
    {I_VFRCZPD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12888, IF_AMD|IF_SSE5},
    {I_VFRCZPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12895, IF_AMD|IF_SSE5},
    {I_VFRCZPD, 1, {YMMREG,0,0,0,0}, nasm_bytecodes+12902, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZPS[] = {
    {I_VFRCZPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12909, IF_AMD|IF_SSE5},
    {I_VFRCZPS, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12916, IF_AMD|IF_SSE5},
    {I_VFRCZPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12923, IF_AMD|IF_SSE5},
    {I_VFRCZPS, 1, {YMMREG,0,0,0,0}, nasm_bytecodes+12930, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZSD[] = {
    {I_VFRCZSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+12937, IF_AMD|IF_SSE5},
    {I_VFRCZSD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12944, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VFRCZSS[] = {
    {I_VFRCZSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+12951, IF_AMD|IF_SSE5},
    {I_VFRCZSS, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12958, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERDPD[] = {
    {I_VGATHERDPD, 3, {XMMREG,MEMORY|BITS32,XMMREG,0,0}, nasm_bytecodes+7074, IF_FUTURE|IF_AVX2},
    {I_VGATHERDPD, 3, {YMMREG,MEMORY|BITS32,YMMREG,0,0}, nasm_bytecodes+7090, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERDPS[] = {
    {I_VGATHERDPS, 3, {XMMREG,MEMORY|BITS32,XMMREG,0,0}, nasm_bytecodes+7106, IF_FUTURE|IF_AVX2},
    {I_VGATHERDPS, 3, {YMMREG,MEMORY|BITS32,YMMREG,0,0}, nasm_bytecodes+7122, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERQPD[] = {
    {I_VGATHERQPD, 3, {XMMREG,MEMORY|BITS64,XMMREG,0,0}, nasm_bytecodes+7082, IF_FUTURE|IF_AVX2},
    {I_VGATHERQPD, 3, {YMMREG,MEMORY|BITS64,YMMREG,0,0}, nasm_bytecodes+7098, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VGATHERQPS[] = {
    {I_VGATHERQPS, 3, {XMMREG,MEMORY|BITS64,XMMREG,0,0}, nasm_bytecodes+7114, IF_FUTURE|IF_AVX2},
    {I_VGATHERQPS, 3, {XMMREG,MEMORY|BITS64,XMMREG,0,0}, nasm_bytecodes+7130, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHADDPD[] = {
    {I_VHADDPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9430, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9437, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9444, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9451, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHADDPS[] = {
    {I_VHADDPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9458, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9465, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9472, IF_AVX|IF_SANDYBRIDGE},
    {I_VHADDPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9479, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHSUBPD[] = {
    {I_VHSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9486, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9493, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9500, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9507, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VHSUBPS[] = {
    {I_VHSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9514, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9521, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9528, IF_AVX|IF_SANDYBRIDGE},
    {I_VHSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9535, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTF128[] = {
    {I_VINSERTF128, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4594, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTI128[] = {
    {I_VINSERTI128, 4, {YMMREG,YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+7058, IF_FUTURE|IF_AVX2},
    {I_VINSERTI128, 3, {YMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7066, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VINSERTPS[] = {
    {I_VINSERTPS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+4602, IF_AVX|IF_SANDYBRIDGE},
    {I_VINSERTPS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4610, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDDQU[] = {
    {I_VLDDQU, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+9542, IF_AVX|IF_SANDYBRIDGE},
    {I_VLDDQU, 2, {YMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9549, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDMXCSR[] = {
    {I_VLDMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+9556, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VLDQQU[] = {
    {I_VLDQQU, 2, {YMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+9549, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVDQU[] = {
    {I_VMASKMOVDQU, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9563, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVPD[] = {
    {I_VMASKMOVPD, 3, {XMMREG,XMMREG,MEMORY|BITS128,0,0}, nasm_bytecodes+9598, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPD, 3, {YMMREG,YMMREG,MEMORY|BITS256,0,0}, nasm_bytecodes+9605, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPD, 3, {MEMORY|BITS128,XMMREG,XMMREG,0,0}, nasm_bytecodes+9612, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPD, 3, {MEMORY|BITS256,YMMREG,YMMREG,0,0}, nasm_bytecodes+9619, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMASKMOVPS[] = {
    {I_VMASKMOVPS, 3, {XMMREG,XMMREG,MEMORY|BITS128,0,0}, nasm_bytecodes+9570, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPS, 3, {YMMREG,YMMREG,MEMORY|BITS256,0,0}, nasm_bytecodes+9577, IF_AVX|IF_SANDYBRIDGE},
    {I_VMASKMOVPS, 3, {MEMORY|BITS128,XMMREG,XMMREG,0,0}, nasm_bytecodes+9584, IF_AVX|IF_SANDYBRIDGE|IF_SO},
    {I_VMASKMOVPS, 3, {MEMORY|BITS256,YMMREG,YMMREG,0,0}, nasm_bytecodes+9591, IF_AVX|IF_SANDYBRIDGE|IF_SY},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXPD[] = {
    {I_VMAXPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9626, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9633, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9640, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9647, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXPS[] = {
    {I_VMAXPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9654, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9661, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9668, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9675, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXSD[] = {
    {I_VMAXSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9682, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9689, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMAXSS[] = {
    {I_VMAXSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9696, IF_AVX|IF_SANDYBRIDGE},
    {I_VMAXSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9703, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMCALL[] = {
    {I_VMCALL, 0, {0,0,0,0,0}, nasm_bytecodes+20707, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMCLEAR[] = {
    {I_VMCLEAR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17614, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINPD[] = {
    {I_VMINPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9710, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9717, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9724, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9731, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINPS[] = {
    {I_VMINPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+9738, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9745, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+9752, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9759, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINSD[] = {
    {I_VMINSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+9766, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9773, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMINSS[] = {
    {I_VMINSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+9780, IF_AVX|IF_SANDYBRIDGE},
    {I_VMINSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+9787, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMLAUNCH[] = {
    {I_VMLAUNCH, 0, {0,0,0,0,0}, nasm_bytecodes+20712, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMLOAD[] = {
    {I_VMLOAD, 0, {0,0,0,0,0}, nasm_bytecodes+20717, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMMCALL[] = {
    {I_VMMCALL, 0, {0,0,0,0,0}, nasm_bytecodes+20722, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVAPD[] = {
    {I_VMOVAPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9794, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPD, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9801, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9808, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPD, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9815, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVAPS[] = {
    {I_VMOVAPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9822, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPS, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9829, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9836, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVAPS, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9843, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVD[] = {
    {I_VMOVD, 2, {XMMREG,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+9850, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVD, 2, {RM_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+9857, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDDUP[] = {
    {I_VMOVDDUP, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9892, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9899, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQA[] = {
    {I_VMOVDQA, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9906, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQA, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9913, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQA, 2, {YMMREG,RM_YMM,0,0,0}, nasm_bytecodes+9920, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQA, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9927, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVDQU[] = {
    {I_VMOVDQU, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+9934, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQU, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+9941, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQU, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9948, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVDQU, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9955, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHLPS[] = {
    {I_VMOVHLPS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+9962, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHLPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+9969, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHPD[] = {
    {I_VMOVHPD, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+9976, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+9983, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+9990, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVHPS[] = {
    {I_VMOVHPS, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+9997, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10004, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVHPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10011, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLHPS[] = {
    {I_VMOVLHPS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+9997, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLHPS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10004, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLPD[] = {
    {I_VMOVLPD, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+10018, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10025, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10032, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVLPS[] = {
    {I_VMOVLPS, 3, {XMMREG,XMMREG,MEMORY|BITS64,0,0}, nasm_bytecodes+9962, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+9969, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVLPS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10039, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVMSKPD[] = {
    {I_VMOVMSKPD, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10046, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+10046, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS64,YMMREG,0,0,0}, nasm_bytecodes+10053, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPD, 2, {REG_GPR|BITS32,YMMREG,0,0,0}, nasm_bytecodes+10053, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVMSKPS[] = {
    {I_VMOVMSKPS, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10060, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+10060, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS64,YMMREG,0,0,0}, nasm_bytecodes+10067, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VMOVMSKPS, 2, {REG_GPR|BITS32,YMMREG,0,0,0}, nasm_bytecodes+10067, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTDQ[] = {
    {I_VMOVNTDQ, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10074, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTDQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10081, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTDQA[] = {
    {I_VMOVNTDQA, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+10088, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTDQA, 2, {YMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+14771, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTPD[] = {
    {I_VMOVNTPD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10095, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTPD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10102, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTPS[] = {
    {I_VMOVNTPS, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10109, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVNTPS, 2, {MEMORY|BITS128,YMMREG,0,0,0}, nasm_bytecodes+10116, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVNTQQ[] = {
    {I_VMOVNTQQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10081, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQ[] = {
    {I_VMOVQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+9864, IF_AVX|IF_SANDYBRIDGE|IF_SQ},
    {I_VMOVQ, 2, {RM_XMM|BITS64,XMMREG,0,0,0}, nasm_bytecodes+9871, IF_AVX|IF_SANDYBRIDGE|IF_SQ},
    {I_VMOVQ, 2, {XMMREG,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+9878, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    {I_VMOVQ, 2, {RM_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+9885, IF_AVX|IF_SANDYBRIDGE|IF_LONG|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQQA[] = {
    {I_VMOVQQA, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9920, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVQQA, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9927, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVQQU[] = {
    {I_VMOVQQU, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+9948, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVQQU, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+9955, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSD[] = {
    {I_VMOVSD, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10123, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10130, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10137, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10144, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10151, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSD, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10158, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSHDUP[] = {
    {I_VMOVSHDUP, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10165, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSHDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10172, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSLDUP[] = {
    {I_VMOVSLDUP, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10179, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSLDUP, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10186, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVSS[] = {
    {I_VMOVSS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10193, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10200, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+10207, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 3, {XMMREG,XMMREG,XMMREG,0,0}, nasm_bytecodes+10214, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+10221, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVSS, 2, {MEMORY|BITS64,XMMREG,0,0,0}, nasm_bytecodes+10228, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVUPD[] = {
    {I_VMOVUPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10235, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPD, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10242, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10249, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPD, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10256, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMOVUPS[] = {
    {I_VMOVUPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10263, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPS, 2, {RM_XMM|BITS128,XMMREG,0,0,0}, nasm_bytecodes+10270, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10277, IF_AVX|IF_SANDYBRIDGE},
    {I_VMOVUPS, 2, {RM_YMM|BITS256,YMMREG,0,0,0}, nasm_bytecodes+10284, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPSADBW[] = {
    {I_VMPSADBW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4618, IF_AVX|IF_SANDYBRIDGE},
    {I_VMPSADBW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4626, IF_AVX|IF_SANDYBRIDGE},
    {I_VMPSADBW, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6746, IF_FUTURE|IF_AVX2},
    {I_VMPSADBW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6754, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPTRLD[] = {
    {I_VMPTRLD, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17675, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMPTRST[] = {
    {I_VMPTRST, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+20727, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMREAD[] = {
    {I_VMREAD, 2, {RM_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+8178, IF_VMX|IF_NOLONG|IF_SD},
    {I_VMREAD, 2, {RM_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+8177, IF_X64|IF_VMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMRESUME[] = {
    {I_VMRESUME, 0, {0,0,0,0,0}, nasm_bytecodes+20732, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMRUN[] = {
    {I_VMRUN, 0, {0,0,0,0,0}, nasm_bytecodes+20737, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMSAVE[] = {
    {I_VMSAVE, 0, {0,0,0,0,0}, nasm_bytecodes+20742, IF_X64|IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULPD[] = {
    {I_VMULPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10291, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10298, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10305, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10312, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULPS[] = {
    {I_VMULPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10319, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10326, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10333, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10340, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULSD[] = {
    {I_VMULSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+10347, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+10354, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMULSS[] = {
    {I_VMULSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+10361, IF_AVX|IF_SANDYBRIDGE},
    {I_VMULSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+10368, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMWRITE[] = {
    {I_VMWRITE, 2, {REG_GPR|BITS32,RM_GPR|BITS32,0,0,0}, nasm_bytecodes+8185, IF_VMX|IF_NOLONG|IF_SD},
    {I_VMWRITE, 2, {REG_GPR|BITS64,RM_GPR|BITS64,0,0,0}, nasm_bytecodes+8184, IF_X64|IF_VMX|IF_SQ},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMXOFF[] = {
    {I_VMXOFF, 0, {0,0,0,0,0}, nasm_bytecodes+20747, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VMXON[] = {
    {I_VMXON, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+17620, IF_VMX},
    ITEMPLATE_END
};

static const struct itemplate instrux_VORPD[] = {
    {I_VORPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10375, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10382, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VORPS[] = {
    {I_VORPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10389, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10396, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10403, IF_AVX|IF_SANDYBRIDGE},
    {I_VORPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+10410, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSB[] = {
    {I_VPABSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10417, IF_AVX|IF_SANDYBRIDGE},
    {I_VPABSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13511, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSD[] = {
    {I_VPABSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10431, IF_AVX|IF_SANDYBRIDGE},
    {I_VPABSD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13525, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPABSW[] = {
    {I_VPABSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10424, IF_AVX|IF_SANDYBRIDGE},
    {I_VPABSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13518, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKSSDW[] = {
    {I_VPACKSSDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10452, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKSSDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10459, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKSSDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13546, IF_FUTURE|IF_AVX2},
    {I_VPACKSSDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13553, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKSSWB[] = {
    {I_VPACKSSWB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10438, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKSSWB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10445, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKSSWB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13532, IF_FUTURE|IF_AVX2},
    {I_VPACKSSWB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13539, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKUSDW[] = {
    {I_VPACKUSDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10480, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKUSDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10487, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKUSDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13560, IF_FUTURE|IF_AVX2},
    {I_VPACKUSDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13567, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPACKUSWB[] = {
    {I_VPACKUSWB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10466, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKUSWB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10473, IF_AVX|IF_SANDYBRIDGE},
    {I_VPACKUSWB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13574, IF_FUTURE|IF_AVX2},
    {I_VPACKUSWB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13581, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDB[] = {
    {I_VPADDB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10494, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10501, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13588, IF_FUTURE|IF_AVX2},
    {I_VPADDB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13595, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDD[] = {
    {I_VPADDD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10522, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10529, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13616, IF_FUTURE|IF_AVX2},
    {I_VPADDD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13623, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDQ[] = {
    {I_VPADDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10536, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10543, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13630, IF_FUTURE|IF_AVX2},
    {I_VPADDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13637, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDSB[] = {
    {I_VPADDSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10550, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10557, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13644, IF_FUTURE|IF_AVX2},
    {I_VPADDSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13651, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDSW[] = {
    {I_VPADDSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10564, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10571, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13658, IF_FUTURE|IF_AVX2},
    {I_VPADDSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13665, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDUSB[] = {
    {I_VPADDUSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10578, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDUSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10585, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDUSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13672, IF_FUTURE|IF_AVX2},
    {I_VPADDUSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13679, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDUSW[] = {
    {I_VPADDUSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10592, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDUSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10599, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDUSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13686, IF_FUTURE|IF_AVX2},
    {I_VPADDUSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13693, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPADDW[] = {
    {I_VPADDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10508, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10515, IF_AVX|IF_SANDYBRIDGE},
    {I_VPADDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13602, IF_FUTURE|IF_AVX2},
    {I_VPADDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13609, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPALIGNR[] = {
    {I_VPALIGNR, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4634, IF_AVX|IF_SANDYBRIDGE},
    {I_VPALIGNR, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4642, IF_AVX|IF_SANDYBRIDGE},
    {I_VPALIGNR, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6762, IF_FUTURE|IF_AVX2},
    {I_VPALIGNR, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6770, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAND[] = {
    {I_VPAND, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10606, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAND, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10613, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAND, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13700, IF_FUTURE|IF_AVX2},
    {I_VPAND, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13707, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPANDN[] = {
    {I_VPANDN, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10620, IF_AVX|IF_SANDYBRIDGE},
    {I_VPANDN, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10627, IF_AVX|IF_SANDYBRIDGE},
    {I_VPANDN, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13714, IF_FUTURE|IF_AVX2},
    {I_VPANDN, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13721, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAVGB[] = {
    {I_VPAVGB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10634, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAVGB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10641, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAVGB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13728, IF_FUTURE|IF_AVX2},
    {I_VPAVGB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13735, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPAVGW[] = {
    {I_VPAVGW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10648, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAVGW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10655, IF_AVX|IF_SANDYBRIDGE},
    {I_VPAVGW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13742, IF_FUTURE|IF_AVX2},
    {I_VPAVGW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13749, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDD[] = {
    {I_VPBLENDD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6994, IF_FUTURE|IF_AVX2},
    {I_VPBLENDD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7002, IF_FUTURE|IF_AVX2},
    {I_VPBLENDD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+7010, IF_FUTURE|IF_AVX2},
    {I_VPBLENDD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7018, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDVB[] = {
    {I_VPBLENDVB, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+4650, IF_AVX|IF_SANDYBRIDGE},
    {I_VPBLENDVB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+4658, IF_AVX|IF_SANDYBRIDGE},
    {I_VPBLENDVB, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+6778, IF_FUTURE|IF_AVX2},
    {I_VPBLENDVB, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+6786, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBLENDW[] = {
    {I_VPBLENDW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+4666, IF_AVX|IF_SANDYBRIDGE},
    {I_VPBLENDW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4674, IF_AVX|IF_SANDYBRIDGE},
    {I_VPBLENDW, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+6794, IF_FUTURE|IF_AVX2},
    {I_VPBLENDW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6802, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTB[] = {
    {I_VPBROADCASTB, 2, {XMMREG,MEMORY|BITS8,0,0,0}, nasm_bytecodes+14785, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14785, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTB, 2, {YMMREG,MEMORY|BITS8,0,0,0}, nasm_bytecodes+14792, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTB, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14792, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTD[] = {
    {I_VPBROADCASTD, 2, {XMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+14813, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14813, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTD, 2, {YMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+14820, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTD, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14820, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTQ[] = {
    {I_VPBROADCASTQ, 2, {XMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+14827, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14827, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTQ, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+14834, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTQ, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14834, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPBROADCASTW[] = {
    {I_VPBROADCASTW, 2, {XMMREG,MEMORY|BITS16,0,0,0}, nasm_bytecodes+14799, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+14799, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTW, 2, {YMMREG,MEMORY|BITS16,0,0,0}, nasm_bytecodes+14806, IF_FUTURE|IF_AVX2},
    {I_VPBROADCASTW, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14806, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULHQHQDQ[] = {
    {I_VPCLMULHQHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3600, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULHQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3609, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULHQLQDQ[] = {
    {I_VPCLMULHQLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3564, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULHQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3573, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULLQHQDQ[] = {
    {I_VPCLMULLQHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3582, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULLQHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3591, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULLQLQDQ[] = {
    {I_VPCLMULLQLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+3546, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULLQLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+3555, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCLMULQDQ[] = {
    {I_VPCLMULQDQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+5178, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCLMULQDQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5186, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMOV[] = {
    {I_VPCMOV, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6266, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6274, IF_AMD|IF_SSE5},
    {I_VPCMOV, 4, {YMMREG,YMMREG,RM_YMM|BITS256,YMMREG,0}, nasm_bytecodes+6282, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {YMMREG,RM_YMM|BITS256,YMMREG,0,0}, nasm_bytecodes+6290, IF_AMD|IF_SSE5},
    {I_VPCMOV, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+6298, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+6306, IF_AMD|IF_SSE5},
    {I_VPCMOV, 4, {YMMREG,YMMREG,YMMREG,RM_YMM|BITS256,0}, nasm_bytecodes+6314, IF_AMD|IF_SSE5},
    {I_VPCMOV, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+6322, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQB[] = {
    {I_VPCMPEQB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10662, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10669, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13756, IF_FUTURE|IF_AVX2},
    {I_VPCMPEQB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13763, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQD[] = {
    {I_VPCMPEQD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10690, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10697, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13784, IF_FUTURE|IF_AVX2},
    {I_VPCMPEQD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13791, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQQ[] = {
    {I_VPCMPEQQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10704, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10711, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13798, IF_FUTURE|IF_AVX2},
    {I_VPCMPEQQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13805, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPEQW[] = {
    {I_VPCMPEQW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10676, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10683, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPEQW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13770, IF_FUTURE|IF_AVX2},
    {I_VPCMPEQW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13777, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPESTRI[] = {
    {I_VPCMPESTRI, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4682, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPESTRM[] = {
    {I_VPCMPESTRM, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4690, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTB[] = {
    {I_VPCMPGTB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10718, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10725, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13812, IF_FUTURE|IF_AVX2},
    {I_VPCMPGTB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13819, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTD[] = {
    {I_VPCMPGTD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10746, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10753, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13840, IF_FUTURE|IF_AVX2},
    {I_VPCMPGTD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13847, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTQ[] = {
    {I_VPCMPGTQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10760, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10767, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13854, IF_FUTURE|IF_AVX2},
    {I_VPCMPGTQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13861, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPGTW[] = {
    {I_VPCMPGTW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10732, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10739, IF_AVX|IF_SANDYBRIDGE},
    {I_VPCMPGTW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13826, IF_FUTURE|IF_AVX2},
    {I_VPCMPGTW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13833, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPISTRI[] = {
    {I_VPCMPISTRI, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4698, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCMPISTRM[] = {
    {I_VPCMPISTRM, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4706, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMB[] = {
    {I_VPCOMB, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6330, IF_AMD|IF_SSE5},
    {I_VPCOMB, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6338, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMD[] = {
    {I_VPCOMD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6346, IF_AMD|IF_SSE5},
    {I_VPCOMD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6354, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMQ[] = {
    {I_VPCOMQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6362, IF_AMD|IF_SSE5},
    {I_VPCOMQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6370, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUB[] = {
    {I_VPCOMUB, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6378, IF_AMD|IF_SSE5},
    {I_VPCOMUB, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6386, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUD[] = {
    {I_VPCOMUD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6394, IF_AMD|IF_SSE5},
    {I_VPCOMUD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6402, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUQ[] = {
    {I_VPCOMUQ, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6410, IF_AMD|IF_SSE5},
    {I_VPCOMUQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6418, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMUW[] = {
    {I_VPCOMUW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6426, IF_AMD|IF_SSE5},
    {I_VPCOMUW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6434, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPCOMW[] = {
    {I_VPCOMW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+6442, IF_AMD|IF_SSE5},
    {I_VPCOMW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6450, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERM2F128[] = {
    {I_VPERM2F128, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+4746, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERM2I128[] = {
    {I_VPERM2I128, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+7042, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMD[] = {
    {I_VPERMD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14841, IF_FUTURE|IF_AVX2},
    {I_VPERMD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14848, IF_FUTURE|IF_AVX2},
    {I_VPERMD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7026, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILPD[] = {
    {I_VPERMILPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10774, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10781, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4714, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4722, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMILPS[] = {
    {I_VPERMILPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10788, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+10795, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4730, IF_AVX|IF_SANDYBRIDGE},
    {I_VPERMILPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4738, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMPQ[] = {
    {I_VPERMPQ, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+7034, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPERMPS[] = {
    {I_VPERMPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14855, IF_FUTURE|IF_AVX2},
    {I_VPERMPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14862, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRB[] = {
    {I_VPEXTRB, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4754, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRB, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4754, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRB, 3, {MEMORY|BITS8,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4754, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRD[] = {
    {I_VPEXTRD, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4778, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRD, 3, {RM_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4778, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRQ[] = {
    {I_VPEXTRQ, 3, {RM_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4786, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPEXTRW[] = {
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4762, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4762, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRW, 3, {REG_GPR|BITS64,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4770, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPEXTRW, 3, {REG_GPR|BITS32,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4770, IF_AVX|IF_SANDYBRIDGE},
    {I_VPEXTRW, 3, {MEMORY|BITS16,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4770, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERDD[] = {
    {I_VPGATHERDD, 3, {XMMREG,MEMORY|BITS32,XMMREG,0,0}, nasm_bytecodes+7138, IF_FUTURE|IF_AVX2},
    {I_VPGATHERDD, 3, {YMMREG,MEMORY|BITS32,YMMREG,0,0}, nasm_bytecodes+7154, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERDQ[] = {
    {I_VPGATHERDQ, 3, {XMMREG,MEMORY|BITS32,XMMREG,0,0}, nasm_bytecodes+7170, IF_FUTURE|IF_AVX2},
    {I_VPGATHERDQ, 3, {YMMREG,MEMORY|BITS32,YMMREG,0,0}, nasm_bytecodes+7186, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERQD[] = {
    {I_VPGATHERQD, 3, {XMMREG,MEMORY|BITS64,XMMREG,0,0}, nasm_bytecodes+7146, IF_FUTURE|IF_AVX2},
    {I_VPGATHERQD, 3, {XMMREG,MEMORY|BITS64,XMMREG,0,0}, nasm_bytecodes+7162, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPGATHERQQ[] = {
    {I_VPGATHERQQ, 3, {XMMREG,MEMORY|BITS64,XMMREG,0,0}, nasm_bytecodes+7178, IF_FUTURE|IF_AVX2},
    {I_VPGATHERQQ, 3, {YMMREG,MEMORY|BITS64,YMMREG,0,0}, nasm_bytecodes+7194, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBD[] = {
    {I_VPHADDBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12965, IF_AMD|IF_SSE5},
    {I_VPHADDBD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12972, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBQ[] = {
    {I_VPHADDBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12979, IF_AMD|IF_SSE5},
    {I_VPHADDBQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+12986, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDBW[] = {
    {I_VPHADDBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12993, IF_AMD|IF_SSE5},
    {I_VPHADDBW, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13000, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDD[] = {
    {I_VPHADDD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10816, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10823, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13882, IF_FUTURE|IF_AVX2},
    {I_VPHADDD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13889, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDDQ[] = {
    {I_VPHADDDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13007, IF_AMD|IF_SSE5},
    {I_VPHADDDQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13014, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDSW[] = {
    {I_VPHADDSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10830, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10837, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13896, IF_FUTURE|IF_AVX2},
    {I_VPHADDSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13903, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBD[] = {
    {I_VPHADDUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13021, IF_AMD|IF_SSE5},
    {I_VPHADDUBD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13028, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBQ[] = {
    {I_VPHADDUBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13035, IF_AMD|IF_SSE5},
    {I_VPHADDUBQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13042, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUBW[] = {
    {I_VPHADDUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13049, IF_AMD|IF_SSE5},
    {I_VPHADDUBW, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13056, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUDQ[] = {
    {I_VPHADDUDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13063, IF_AMD|IF_SSE5},
    {I_VPHADDUDQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13070, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUWD[] = {
    {I_VPHADDUWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13077, IF_AMD|IF_SSE5},
    {I_VPHADDUWD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13084, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDUWQ[] = {
    {I_VPHADDUWQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13091, IF_AMD|IF_SSE5},
    {I_VPHADDUWQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13098, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDW[] = {
    {I_VPHADDW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10802, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10809, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHADDW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13868, IF_FUTURE|IF_AVX2},
    {I_VPHADDW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13875, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDWD[] = {
    {I_VPHADDWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13105, IF_AMD|IF_SSE5},
    {I_VPHADDWD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13112, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHADDWQ[] = {
    {I_VPHADDWQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13119, IF_AMD|IF_SSE5},
    {I_VPHADDWQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13126, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHMINPOSUW[] = {
    {I_VPHMINPOSUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10844, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBBW[] = {
    {I_VPHSUBBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13133, IF_AMD|IF_SSE5},
    {I_VPHSUBBW, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13140, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBD[] = {
    {I_VPHSUBD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10865, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10872, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13924, IF_FUTURE|IF_AVX2},
    {I_VPHSUBD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13931, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBDQ[] = {
    {I_VPHSUBDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13147, IF_AMD|IF_SSE5},
    {I_VPHSUBDQ, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13154, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBSW[] = {
    {I_VPHSUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10879, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10886, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13938, IF_FUTURE|IF_AVX2},
    {I_VPHSUBSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13945, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBW[] = {
    {I_VPHSUBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10851, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10858, IF_AVX|IF_SANDYBRIDGE},
    {I_VPHSUBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13910, IF_FUTURE|IF_AVX2},
    {I_VPHSUBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13917, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPHSUBWD[] = {
    {I_VPHSUBWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13161, IF_AMD|IF_SSE5},
    {I_VPHSUBWD, 1, {XMMREG,0,0,0,0}, nasm_bytecodes+13168, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRB[] = {
    {I_VPINSRB, 4, {XMMREG,XMMREG,MEMORY|BITS8,IMMEDIATE|BITS8,0}, nasm_bytecodes+4794, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 3, {XMMREG,MEMORY|BITS8,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4802, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 4, {XMMREG,XMMREG,RM_GPR|BITS8,IMMEDIATE|BITS8,0}, nasm_bytecodes+4794, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 3, {XMMREG,RM_GPR|BITS8,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4802, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 4, {XMMREG,XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+4794, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRB, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4802, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRD[] = {
    {I_VPINSRD, 4, {XMMREG,XMMREG,MEMORY|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+4826, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRD, 3, {XMMREG,MEMORY|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4834, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRD, 4, {XMMREG,XMMREG,RM_GPR|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+4826, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRD, 3, {XMMREG,RM_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4834, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRQ[] = {
    {I_VPINSRQ, 4, {XMMREG,XMMREG,MEMORY|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+4842, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPINSRQ, 3, {XMMREG,MEMORY|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4850, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPINSRQ, 4, {XMMREG,XMMREG,RM_GPR|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+4842, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPINSRQ, 3, {XMMREG,RM_GPR|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4850, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPINSRW[] = {
    {I_VPINSRW, 4, {XMMREG,XMMREG,MEMORY|BITS16,IMMEDIATE|BITS8,0}, nasm_bytecodes+4810, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 3, {XMMREG,MEMORY|BITS16,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4818, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 4, {XMMREG,XMMREG,RM_GPR|BITS16,IMMEDIATE|BITS8,0}, nasm_bytecodes+4810, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 3, {XMMREG,RM_GPR|BITS16,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4818, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 4, {XMMREG,XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+4810, IF_AVX|IF_SANDYBRIDGE},
    {I_VPINSRW, 3, {XMMREG,REG_GPR|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4818, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDD[] = {
    {I_VPMACSDD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6458, IF_AMD|IF_SSE5},
    {I_VPMACSDD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6466, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDQH[] = {
    {I_VPMACSDQH, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6474, IF_AMD|IF_SSE5},
    {I_VPMACSDQH, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6482, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSDQL[] = {
    {I_VPMACSDQL, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6490, IF_AMD|IF_SSE5},
    {I_VPMACSDQL, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6498, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDD[] = {
    {I_VPMACSSDD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6506, IF_AMD|IF_SSE5},
    {I_VPMACSSDD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6514, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDQH[] = {
    {I_VPMACSSDQH, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6522, IF_AMD|IF_SSE5},
    {I_VPMACSSDQH, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6530, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSDQL[] = {
    {I_VPMACSSDQL, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6538, IF_AMD|IF_SSE5},
    {I_VPMACSSDQL, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6546, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSWD[] = {
    {I_VPMACSSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6554, IF_AMD|IF_SSE5},
    {I_VPMACSSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6562, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSSWW[] = {
    {I_VPMACSSWW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6570, IF_AMD|IF_SSE5},
    {I_VPMACSSWW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6578, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSWD[] = {
    {I_VPMACSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6586, IF_AMD|IF_SSE5},
    {I_VPMACSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6594, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMACSWW[] = {
    {I_VPMACSWW, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6602, IF_AMD|IF_SSE5},
    {I_VPMACSWW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6610, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADCSSWD[] = {
    {I_VPMADCSSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6618, IF_AMD|IF_SSE5},
    {I_VPMADCSSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6626, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADCSWD[] = {
    {I_VPMADCSWD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6634, IF_AMD|IF_SSE5},
    {I_VPMADCSWD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6642, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADDUBSW[] = {
    {I_VPMADDUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10907, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMADDUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10914, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMADDUBSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13952, IF_FUTURE|IF_AVX2},
    {I_VPMADDUBSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13959, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMADDWD[] = {
    {I_VPMADDWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10893, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMADDWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10900, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMADDWD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13966, IF_FUTURE|IF_AVX2},
    {I_VPMADDWD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13973, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMASKMOVD[] = {
    {I_VPMASKMOVD, 3, {XMMREG,XMMREG,MEMORY|BITS128,0,0}, nasm_bytecodes+14869, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+14876, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 3, {YMMREG,YMMREG,MEMORY|BITS256,0,0}, nasm_bytecodes+14883, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 2, {YMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+14890, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 3, {MEMORY|BITS128,XMMREG,XMMREG,0,0}, nasm_bytecodes+14925, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+14932, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 3, {MEMORY|BITS256,YMMREG,YMMREG,0,0}, nasm_bytecodes+14939, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVD, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+14946, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMASKMOVQ[] = {
    {I_VPMASKMOVQ, 3, {XMMREG,XMMREG,MEMORY|BITS128,0,0}, nasm_bytecodes+14897, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 2, {XMMREG,MEMORY|BITS128,0,0,0}, nasm_bytecodes+14904, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 3, {YMMREG,YMMREG,MEMORY|BITS256,0,0}, nasm_bytecodes+14911, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 2, {YMMREG,MEMORY|BITS256,0,0,0}, nasm_bytecodes+14918, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 3, {MEMORY|BITS128,XMMREG,XMMREG,0,0}, nasm_bytecodes+14953, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 2, {MEMORY|BITS128,XMMREG,0,0,0}, nasm_bytecodes+14960, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 3, {MEMORY|BITS256,YMMREG,YMMREG,0,0}, nasm_bytecodes+14967, IF_FUTURE|IF_AVX2},
    {I_VPMASKMOVQ, 2, {MEMORY|BITS256,YMMREG,0,0,0}, nasm_bytecodes+14974, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSB[] = {
    {I_VPMAXSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10921, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10928, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13980, IF_FUTURE|IF_AVX2},
    {I_VPMAXSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+13987, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSD[] = {
    {I_VPMAXSD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10949, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10956, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14008, IF_FUTURE|IF_AVX2},
    {I_VPMAXSD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14015, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXSW[] = {
    {I_VPMAXSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10935, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10942, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+13994, IF_FUTURE|IF_AVX2},
    {I_VPMAXSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14001, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUB[] = {
    {I_VPMAXUB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10963, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10970, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14022, IF_FUTURE|IF_AVX2},
    {I_VPMAXUB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14029, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUD[] = {
    {I_VPMAXUD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10991, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10998, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14050, IF_FUTURE|IF_AVX2},
    {I_VPMAXUD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14057, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMAXUW[] = {
    {I_VPMAXUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+10977, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+10984, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMAXUW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14036, IF_FUTURE|IF_AVX2},
    {I_VPMAXUW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14043, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSB[] = {
    {I_VPMINSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11005, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11012, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14064, IF_FUTURE|IF_AVX2},
    {I_VPMINSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14071, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSD[] = {
    {I_VPMINSD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11033, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11040, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14092, IF_FUTURE|IF_AVX2},
    {I_VPMINSD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14099, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINSW[] = {
    {I_VPMINSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11019, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11026, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14078, IF_FUTURE|IF_AVX2},
    {I_VPMINSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14085, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUB[] = {
    {I_VPMINUB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11047, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11054, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14106, IF_FUTURE|IF_AVX2},
    {I_VPMINUB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14113, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUD[] = {
    {I_VPMINUD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11075, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11082, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14134, IF_FUTURE|IF_AVX2},
    {I_VPMINUD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14141, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMINUW[] = {
    {I_VPMINUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11061, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11068, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMINUW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14120, IF_FUTURE|IF_AVX2},
    {I_VPMINUW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14127, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVMSKB[] = {
    {I_VPMOVMSKB, 2, {REG_GPR|BITS64,XMMREG,0,0,0}, nasm_bytecodes+11089, IF_AVX|IF_SANDYBRIDGE|IF_LONG},
    {I_VPMOVMSKB, 2, {REG_GPR|BITS32,XMMREG,0,0,0}, nasm_bytecodes+11089, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVMSKB, 2, {REG_GPR|BITS64,YMMREG,0,0,0}, nasm_bytecodes+14148, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBD[] = {
    {I_VPMOVSXBD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11103, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVSXBD, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+14162, IF_FUTURE|IF_AVX2},
    {I_VPMOVSXBD, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14162, IF_FUTURE|IF_AVX2},
    {I_VPMOVSXBD, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14169, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBQ[] = {
    {I_VPMOVSXBQ, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, nasm_bytecodes+11110, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVSXBQ, 2, {YMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+14169, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXBW[] = {
    {I_VPMOVSXBW, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11096, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVSXBW, 2, {REG_GPR|BITS64,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14155, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXDQ[] = {
    {I_VPMOVSXDQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11131, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVSXDQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14190, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXWD[] = {
    {I_VPMOVSXWD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11117, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVSXWD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14176, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVSXWQ[] = {
    {I_VPMOVSXWQ, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11124, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVSXWQ, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+14183, IF_FUTURE|IF_AVX2},
    {I_VPMOVSXWQ, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14183, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBD[] = {
    {I_VPMOVZXBD, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11145, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVZXBD, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+14204, IF_FUTURE|IF_AVX2},
    {I_VPMOVZXBD, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14204, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBQ[] = {
    {I_VPMOVZXBQ, 2, {XMMREG,RM_XMM|BITS16,0,0,0}, nasm_bytecodes+11152, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVZXBQ, 2, {YMMREG,MEMORY|BITS32,0,0,0}, nasm_bytecodes+14211, IF_FUTURE|IF_AVX2},
    {I_VPMOVZXBQ, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14211, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXBW[] = {
    {I_VPMOVZXBW, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11138, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVZXBW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14197, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXDQ[] = {
    {I_VPMOVZXDQ, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11173, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVZXDQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14232, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXWD[] = {
    {I_VPMOVZXWD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11159, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVZXWD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14218, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMOVZXWQ[] = {
    {I_VPMOVZXWQ, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11166, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMOVZXWQ, 2, {YMMREG,MEMORY|BITS64,0,0,0}, nasm_bytecodes+14225, IF_FUTURE|IF_AVX2},
    {I_VPMOVZXWQ, 2, {YMMREG,XMMREG,0,0,0}, nasm_bytecodes+14225, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULDQ[] = {
    {I_VPMULDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11264, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11271, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14239, IF_FUTURE|IF_AVX2},
    {I_VPMULDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14246, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHRSW[] = {
    {I_VPMULHRSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11194, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHRSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11201, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHRSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14253, IF_FUTURE|IF_AVX2},
    {I_VPMULHRSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14260, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHUW[] = {
    {I_VPMULHUW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11180, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHUW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11187, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHUW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14267, IF_FUTURE|IF_AVX2},
    {I_VPMULHUW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14274, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULHW[] = {
    {I_VPMULHW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11208, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11215, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULHW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14281, IF_FUTURE|IF_AVX2},
    {I_VPMULHW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14288, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLD[] = {
    {I_VPMULLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11236, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11243, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULLD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14309, IF_FUTURE|IF_AVX2},
    {I_VPMULLD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14316, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULLW[] = {
    {I_VPMULLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11222, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11229, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULLW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14295, IF_FUTURE|IF_AVX2},
    {I_VPMULLW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14302, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPMULUDQ[] = {
    {I_VPMULUDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11250, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULUDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11257, IF_AVX|IF_SANDYBRIDGE},
    {I_VPMULUDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14323, IF_FUTURE|IF_AVX2},
    {I_VPMULUDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14330, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPOR[] = {
    {I_VPOR, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11278, IF_AVX|IF_SANDYBRIDGE},
    {I_VPOR, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11285, IF_AVX|IF_SANDYBRIDGE},
    {I_VPOR, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14337, IF_FUTURE|IF_AVX2},
    {I_VPOR, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14344, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPPERM[] = {
    {I_VPPERM, 4, {XMMREG,XMMREG,XMMREG,RM_XMM|BITS128,0}, nasm_bytecodes+6650, IF_AMD|IF_SSE5},
    {I_VPPERM, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+6658, IF_AMD|IF_SSE5},
    {I_VPPERM, 4, {XMMREG,XMMREG,RM_XMM|BITS128,XMMREG,0}, nasm_bytecodes+6666, IF_AMD|IF_SSE5},
    {I_VPPERM, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+6674, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTB[] = {
    {I_VPROTB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13175, IF_AMD|IF_SSE5},
    {I_VPROTB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13182, IF_AMD|IF_SSE5},
    {I_VPROTB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13189, IF_AMD|IF_SSE5},
    {I_VPROTB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13196, IF_AMD|IF_SSE5},
    {I_VPROTB, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6682, IF_AMD|IF_SSE5},
    {I_VPROTB, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6690, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTD[] = {
    {I_VPROTD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13203, IF_AMD|IF_SSE5},
    {I_VPROTD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13210, IF_AMD|IF_SSE5},
    {I_VPROTD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13217, IF_AMD|IF_SSE5},
    {I_VPROTD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13224, IF_AMD|IF_SSE5},
    {I_VPROTD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6698, IF_AMD|IF_SSE5},
    {I_VPROTD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6706, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTQ[] = {
    {I_VPROTQ, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13231, IF_AMD|IF_SSE5},
    {I_VPROTQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13238, IF_AMD|IF_SSE5},
    {I_VPROTQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13245, IF_AMD|IF_SSE5},
    {I_VPROTQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13252, IF_AMD|IF_SSE5},
    {I_VPROTQ, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6714, IF_AMD|IF_SSE5},
    {I_VPROTQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6722, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPROTW[] = {
    {I_VPROTW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13259, IF_AMD|IF_SSE5},
    {I_VPROTW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13266, IF_AMD|IF_SSE5},
    {I_VPROTW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13273, IF_AMD|IF_SSE5},
    {I_VPROTW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13280, IF_AMD|IF_SSE5},
    {I_VPROTW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6730, IF_AMD|IF_SSE5},
    {I_VPROTW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6738, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSADBW[] = {
    {I_VPSADBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11292, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSADBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11299, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSADBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14351, IF_FUTURE|IF_AVX2},
    {I_VPSADBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14358, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAB[] = {
    {I_VPSHAB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13287, IF_AMD|IF_SSE5},
    {I_VPSHAB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13294, IF_AMD|IF_SSE5},
    {I_VPSHAB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13301, IF_AMD|IF_SSE5},
    {I_VPSHAB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13308, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAD[] = {
    {I_VPSHAD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13315, IF_AMD|IF_SSE5},
    {I_VPSHAD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13322, IF_AMD|IF_SSE5},
    {I_VPSHAD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13329, IF_AMD|IF_SSE5},
    {I_VPSHAD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13336, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAQ[] = {
    {I_VPSHAQ, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13343, IF_AMD|IF_SSE5},
    {I_VPSHAQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13350, IF_AMD|IF_SSE5},
    {I_VPSHAQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13357, IF_AMD|IF_SSE5},
    {I_VPSHAQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13364, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHAW[] = {
    {I_VPSHAW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13371, IF_AMD|IF_SSE5},
    {I_VPSHAW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13378, IF_AMD|IF_SSE5},
    {I_VPSHAW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13385, IF_AMD|IF_SSE5},
    {I_VPSHAW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13392, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLB[] = {
    {I_VPSHLB, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13399, IF_AMD|IF_SSE5},
    {I_VPSHLB, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13406, IF_AMD|IF_SSE5},
    {I_VPSHLB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13413, IF_AMD|IF_SSE5},
    {I_VPSHLB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13420, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLD[] = {
    {I_VPSHLD, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13427, IF_AMD|IF_SSE5},
    {I_VPSHLD, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13434, IF_AMD|IF_SSE5},
    {I_VPSHLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13441, IF_AMD|IF_SSE5},
    {I_VPSHLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13448, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLQ[] = {
    {I_VPSHLQ, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13455, IF_AMD|IF_SSE5},
    {I_VPSHLQ, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13462, IF_AMD|IF_SSE5},
    {I_VPSHLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13469, IF_AMD|IF_SSE5},
    {I_VPSHLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13476, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHLW[] = {
    {I_VPSHLW, 3, {XMMREG,RM_XMM|BITS128,XMMREG,0,0}, nasm_bytecodes+13483, IF_AMD|IF_SSE5},
    {I_VPSHLW, 2, {XMMREG,XMMREG,0,0,0}, nasm_bytecodes+13490, IF_AMD|IF_SSE5},
    {I_VPSHLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+13497, IF_AMD|IF_SSE5},
    {I_VPSHLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+13504, IF_AMD|IF_SSE5},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFB[] = {
    {I_VPSHUFB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11306, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSHUFB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11313, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSHUFB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14365, IF_FUTURE|IF_AVX2},
    {I_VPSHUFB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14372, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFD[] = {
    {I_VPSHUFD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4858, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSHUFD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6810, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFHW[] = {
    {I_VPSHUFHW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4866, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSHUFHW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6818, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSHUFLW[] = {
    {I_VPSHUFLW, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4874, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSHUFLW, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6826, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGNB[] = {
    {I_VPSIGNB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11320, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGNB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11327, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGNB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14379, IF_FUTURE|IF_AVX2},
    {I_VPSIGNB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14386, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGND[] = {
    {I_VPSIGND, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11348, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGND, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11355, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGND, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14407, IF_FUTURE|IF_AVX2},
    {I_VPSIGND, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14414, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSIGNW[] = {
    {I_VPSIGNW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11334, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGNW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11341, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSIGNW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14393, IF_FUTURE|IF_AVX2},
    {I_VPSIGNW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14400, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLD[] = {
    {I_VPSLLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11376, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11383, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4930, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4938, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLD, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14435, IF_FUTURE|IF_AVX2},
    {I_VPSLLD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14442, IF_FUTURE|IF_AVX2},
    {I_VPSLLD, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6866, IF_FUTURE|IF_AVX2},
    {I_VPSLLD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6874, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLDQ[] = {
    {I_VPSLLDQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4882, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLDQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4890, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLDQ, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6834, IF_FUTURE|IF_AVX2},
    {I_VPSLLDQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6842, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLQ[] = {
    {I_VPSLLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11390, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11397, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4946, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4954, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLQ, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14449, IF_FUTURE|IF_AVX2},
    {I_VPSLLQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14456, IF_FUTURE|IF_AVX2},
    {I_VPSLLQ, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6882, IF_FUTURE|IF_AVX2},
    {I_VPSLLQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6890, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLVD[] = {
    {I_VPSLLVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14981, IF_FUTURE|IF_AVX2},
    {I_VPSLLVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14988, IF_FUTURE|IF_AVX2},
    {I_VPSLLVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+15009, IF_FUTURE|IF_AVX2},
    {I_VPSLLVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+15016, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLVQ[] = {
    {I_VPSLLVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14995, IF_FUTURE|IF_AVX2},
    {I_VPSLLVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+15002, IF_FUTURE|IF_AVX2},
    {I_VPSLLVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+15023, IF_FUTURE|IF_AVX2},
    {I_VPSLLVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+15030, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSLLW[] = {
    {I_VPSLLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11362, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11369, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4914, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4922, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSLLW, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14421, IF_FUTURE|IF_AVX2},
    {I_VPSLLW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14428, IF_FUTURE|IF_AVX2},
    {I_VPSLLW, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6850, IF_FUTURE|IF_AVX2},
    {I_VPSLLW, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6858, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAD[] = {
    {I_VPSRAD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11418, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11425, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4978, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4986, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAD, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14477, IF_FUTURE|IF_AVX2},
    {I_VPSRAD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14484, IF_FUTURE|IF_AVX2},
    {I_VPSRAD, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6914, IF_FUTURE|IF_AVX2},
    {I_VPSRAD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6922, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAVD[] = {
    {I_VPSRAVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+15037, IF_FUTURE|IF_AVX2},
    {I_VPSRAVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+15044, IF_FUTURE|IF_AVX2},
    {I_VPSRAVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+15051, IF_FUTURE|IF_AVX2},
    {I_VPSRAVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+15058, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRAW[] = {
    {I_VPSRAW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11404, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11411, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4962, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4970, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRAW, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14463, IF_FUTURE|IF_AVX2},
    {I_VPSRAW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14470, IF_FUTURE|IF_AVX2},
    {I_VPSRAW, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6898, IF_FUTURE|IF_AVX2},
    {I_VPSRAW, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6906, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLD[] = {
    {I_VPSRLD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11446, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11453, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5010, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+5018, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLD, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14505, IF_FUTURE|IF_AVX2},
    {I_VPSRLD, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14512, IF_FUTURE|IF_AVX2},
    {I_VPSRLD, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6962, IF_FUTURE|IF_AVX2},
    {I_VPSRLD, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6970, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLDQ[] = {
    {I_VPSRLDQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4898, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLDQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+4906, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLDQ, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6930, IF_FUTURE|IF_AVX2},
    {I_VPSRLDQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6938, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLQ[] = {
    {I_VPSRLQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11460, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11467, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5026, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+5034, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLQ, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14519, IF_FUTURE|IF_AVX2},
    {I_VPSRLQ, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14526, IF_FUTURE|IF_AVX2},
    {I_VPSRLQ, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6978, IF_FUTURE|IF_AVX2},
    {I_VPSRLQ, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6986, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLVD[] = {
    {I_VPSRLVD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+15065, IF_FUTURE|IF_AVX2},
    {I_VPSRLVD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+15072, IF_FUTURE|IF_AVX2},
    {I_VPSRLVD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+15093, IF_FUTURE|IF_AVX2},
    {I_VPSRLVD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+15100, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLVQ[] = {
    {I_VPSRLVQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+15079, IF_FUTURE|IF_AVX2},
    {I_VPSRLVQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+15086, IF_FUTURE|IF_AVX2},
    {I_VPSRLVQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+15107, IF_FUTURE|IF_AVX2},
    {I_VPSRLVQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+15114, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSRLW[] = {
    {I_VPSRLW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11432, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11439, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 3, {XMMREG,XMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+4994, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 2, {XMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+5002, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSRLW, 3, {YMMREG,YMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+14491, IF_FUTURE|IF_AVX2},
    {I_VPSRLW, 2, {YMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+14498, IF_FUTURE|IF_AVX2},
    {I_VPSRLW, 3, {YMMREG,YMMREG,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+6946, IF_FUTURE|IF_AVX2},
    {I_VPSRLW, 2, {YMMREG,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+6954, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBB[] = {
    {I_VPSUBB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11488, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11495, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14533, IF_FUTURE|IF_AVX2},
    {I_VPSUBB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14540, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBD[] = {
    {I_VPSUBD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11516, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11523, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14561, IF_FUTURE|IF_AVX2},
    {I_VPSUBD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14568, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBQ[] = {
    {I_VPSUBQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11530, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11537, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14575, IF_FUTURE|IF_AVX2},
    {I_VPSUBQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14582, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBSB[] = {
    {I_VPSUBSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11544, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11551, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14589, IF_FUTURE|IF_AVX2},
    {I_VPSUBSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14596, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBSW[] = {
    {I_VPSUBSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11558, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11565, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14603, IF_FUTURE|IF_AVX2},
    {I_VPSUBSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14610, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBUSB[] = {
    {I_VPSUBUSB, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11572, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBUSB, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11579, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBUSB, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14617, IF_FUTURE|IF_AVX2},
    {I_VPSUBUSB, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14624, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBUSW[] = {
    {I_VPSUBUSW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11586, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBUSW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11593, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBUSW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14631, IF_FUTURE|IF_AVX2},
    {I_VPSUBUSW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14638, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPSUBW[] = {
    {I_VPSUBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11502, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11509, IF_AVX|IF_SANDYBRIDGE},
    {I_VPSUBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14547, IF_FUTURE|IF_AVX2},
    {I_VPSUBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14554, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPTEST[] = {
    {I_VPTEST, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11474, IF_AVX|IF_SANDYBRIDGE},
    {I_VPTEST, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11481, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHBW[] = {
    {I_VPUNPCKHBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11600, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11607, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14645, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKHBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14652, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHDQ[] = {
    {I_VPUNPCKHDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11628, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11635, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14673, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKHDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14680, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHQDQ[] = {
    {I_VPUNPCKHQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11642, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11649, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14687, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKHQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14694, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKHWD[] = {
    {I_VPUNPCKHWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11614, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11621, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKHWD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14659, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKHWD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14666, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLBW[] = {
    {I_VPUNPCKLBW, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11656, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLBW, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11663, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLBW, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14701, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKLBW, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14708, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLDQ[] = {
    {I_VPUNPCKLDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11684, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11691, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14729, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKLDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14736, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLQDQ[] = {
    {I_VPUNPCKLQDQ, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11698, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLQDQ, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11705, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLQDQ, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14743, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKLQDQ, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14750, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPUNPCKLWD[] = {
    {I_VPUNPCKLWD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11670, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLWD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11677, IF_AVX|IF_SANDYBRIDGE},
    {I_VPUNPCKLWD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14715, IF_FUTURE|IF_AVX2},
    {I_VPUNPCKLWD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14722, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VPXOR[] = {
    {I_VPXOR, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11712, IF_AVX|IF_SANDYBRIDGE},
    {I_VPXOR, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11719, IF_AVX|IF_SANDYBRIDGE},
    {I_VPXOR, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+14757, IF_FUTURE|IF_AVX2},
    {I_VPXOR, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+14764, IF_FUTURE|IF_AVX2},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCPPS[] = {
    {I_VRCPPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11726, IF_AVX|IF_SANDYBRIDGE},
    {I_VRCPPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11733, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRCPSS[] = {
    {I_VRCPSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11740, IF_AVX|IF_SANDYBRIDGE},
    {I_VRCPSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11747, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDPD[] = {
    {I_VROUNDPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5042, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5050, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDPS[] = {
    {I_VROUNDPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5058, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5066, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDSD[] = {
    {I_VROUNDSD, 4, {XMMREG,XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0}, nasm_bytecodes+5074, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDSD, 3, {XMMREG,RM_XMM|BITS64,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5082, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VROUNDSS[] = {
    {I_VROUNDSS, 4, {XMMREG,XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0}, nasm_bytecodes+5090, IF_AVX|IF_SANDYBRIDGE},
    {I_VROUNDSS, 3, {XMMREG,RM_XMM|BITS32,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5098, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRTPS[] = {
    {I_VRSQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11754, IF_AVX|IF_SANDYBRIDGE},
    {I_VRSQRTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11761, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VRSQRTSS[] = {
    {I_VRSQRTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11768, IF_AVX|IF_SANDYBRIDGE},
    {I_VRSQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11775, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFPD[] = {
    {I_VSHUFPD, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+5106, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPD, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5114, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPD, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+5122, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPD, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5130, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSHUFPS[] = {
    {I_VSHUFPS, 4, {XMMREG,XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0}, nasm_bytecodes+5138, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPS, 3, {XMMREG,RM_XMM|BITS128,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5146, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPS, 4, {YMMREG,YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0}, nasm_bytecodes+5154, IF_AVX|IF_SANDYBRIDGE},
    {I_VSHUFPS, 3, {YMMREG,RM_YMM|BITS256,IMMEDIATE|BITS8,0,0}, nasm_bytecodes+5162, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTPD[] = {
    {I_VSQRTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11782, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11789, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTPS[] = {
    {I_VSQRTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11796, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11803, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTSD[] = {
    {I_VSQRTSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+11810, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11817, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSQRTSS[] = {
    {I_VSQRTSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11824, IF_AVX|IF_SANDYBRIDGE},
    {I_VSQRTSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11831, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSTMXCSR[] = {
    {I_VSTMXCSR, 1, {MEMORY|BITS32,0,0,0,0}, nasm_bytecodes+11838, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBPD[] = {
    {I_VSUBPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11845, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11852, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+11859, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11866, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBPS[] = {
    {I_VSUBPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11873, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11880, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+11887, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11894, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBSD[] = {
    {I_VSUBSD, 3, {XMMREG,XMMREG,RM_XMM|BITS64,0,0}, nasm_bytecodes+11901, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBSD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11908, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VSUBSS[] = {
    {I_VSUBSS, 3, {XMMREG,XMMREG,RM_XMM|BITS32,0,0}, nasm_bytecodes+11915, IF_AVX|IF_SANDYBRIDGE},
    {I_VSUBSS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11922, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VTESTPD[] = {
    {I_VTESTPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11943, IF_AVX|IF_SANDYBRIDGE},
    {I_VTESTPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11950, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VTESTPS[] = {
    {I_VTESTPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11929, IF_AVX|IF_SANDYBRIDGE},
    {I_VTESTPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11936, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUCOMISD[] = {
    {I_VUCOMISD, 2, {XMMREG,RM_XMM|BITS64,0,0,0}, nasm_bytecodes+11957, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUCOMISS[] = {
    {I_VUCOMISS, 2, {XMMREG,RM_XMM|BITS32,0,0,0}, nasm_bytecodes+11964, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKHPD[] = {
    {I_VUNPCKHPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11971, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+11978, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+11985, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+11992, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKHPS[] = {
    {I_VUNPCKHPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+11999, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12006, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12013, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKHPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12020, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKLPD[] = {
    {I_VUNPCKLPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12027, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12034, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12041, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12048, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VUNPCKLPS[] = {
    {I_VUNPCKLPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12055, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12062, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12069, IF_AVX|IF_SANDYBRIDGE},
    {I_VUNPCKLPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12076, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VXORPD[] = {
    {I_VXORPD, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12083, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12090, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPD, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12097, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPD, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12104, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VXORPS[] = {
    {I_VXORPS, 3, {XMMREG,XMMREG,RM_XMM|BITS128,0,0}, nasm_bytecodes+12111, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+12118, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPS, 3, {YMMREG,YMMREG,RM_YMM|BITS256,0,0}, nasm_bytecodes+12125, IF_AVX|IF_SANDYBRIDGE},
    {I_VXORPS, 2, {YMMREG,RM_YMM|BITS256,0,0,0}, nasm_bytecodes+12132, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VZEROALL[] = {
    {I_VZEROALL, 0, {0,0,0,0,0}, nasm_bytecodes+17650, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_VZEROUPPER[] = {
    {I_VZEROUPPER, 0, {0,0,0,0,0}, nasm_bytecodes+17656, IF_AVX|IF_SANDYBRIDGE},
    ITEMPLATE_END
};

static const struct itemplate instrux_WBINVD[] = {
    {I_WBINVD, 0, {0,0,0,0,0}, nasm_bytecodes+21745, IF_486|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRFSBASE[] = {
    {I_WRFSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12826, IF_LONG|IF_FUTURE},
    {I_WRFSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12825, IF_LONG|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRGSBASE[] = {
    {I_WRGSBASE, 1, {REG_GPR|BITS32,0,0,0,0}, nasm_bytecodes+12833, IF_LONG|IF_FUTURE},
    {I_WRGSBASE, 1, {REG_GPR|BITS64,0,0,0,0}, nasm_bytecodes+12832, IF_LONG|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRMSR[] = {
    {I_WRMSR, 0, {0,0,0,0,0}, nasm_bytecodes+21749, IF_PENT|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_WRSHR[] = {
    {I_WRSHR, 1, {RM_GPR|BITS32,0,0,0,0}, nasm_bytecodes+16480, IF_P6|IF_CYRIX|IF_SMM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XADD[] = {
    {I_XADD, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20612, IF_486|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+20612, IF_486},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+16486, IF_486|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+16486, IF_486},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+16492, IF_486|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+16492, IF_486},
    {I_XADD, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+16498, IF_X64|IF_SM},
    {I_XADD, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+16498, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_XBTS[] = {
    {I_XBTS, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+16504, IF_386|IF_SW|IF_UNDOC},
    {I_XBTS, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+16504, IF_386|IF_UNDOC},
    {I_XBTS, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+16510, IF_386|IF_SD|IF_UNDOC},
    {I_XBTS, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+16510, IF_386|IF_UNDOC},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCHG[] = {
    {I_XCHG, 2, {REG_AX,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+21753, IF_8086},
    {I_XCHG, 2, {REG_EAX,REG32NA,0,0,0}, nasm_bytecodes+21757, IF_386},
    {I_XCHG, 2, {REG_RAX,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+21761, IF_X64},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_AX,0,0,0}, nasm_bytecodes+21765, IF_8086},
    {I_XCHG, 2, {REG32NA,REG_EAX,0,0,0}, nasm_bytecodes+21769, IF_386},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_RAX,0,0,0}, nasm_bytecodes+21773, IF_X64},
    {I_XCHG, 2, {REG_EAX,REG_EAX,0,0,0}, nasm_bytecodes+21777, IF_386|IF_NOLONG},
    {I_XCHG, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+21781, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21781, IF_8086},
    {I_XCHG, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+20617, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20617, IF_8086},
    {I_XCHG, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+20622, IF_386|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20622, IF_386},
    {I_XCHG, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+20627, IF_X64|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20627, IF_X64},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21785, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21785, IF_8086},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20632, IF_8086|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20632, IF_8086},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20637, IF_386|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20637, IF_386},
    {I_XCHG, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20642, IF_X64|IF_SM},
    {I_XCHG, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20642, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCBC[] = {
    {I_XCRYPTCBC, 0, {0,0,0,0,0}, nasm_bytecodes+17686, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCFB[] = {
    {I_XCRYPTCFB, 0, {0,0,0,0,0}, nasm_bytecodes+17698, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTCTR[] = {
    {I_XCRYPTCTR, 0, {0,0,0,0,0}, nasm_bytecodes+17692, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTECB[] = {
    {I_XCRYPTECB, 0, {0,0,0,0,0}, nasm_bytecodes+17680, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XCRYPTOFB[] = {
    {I_XCRYPTOFB, 0, {0,0,0,0,0}, nasm_bytecodes+17704, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XGETBV[] = {
    {I_XGETBV, 0, {0,0,0,0,0}, nasm_bytecodes+16810, IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XLAT[] = {
    {I_XLAT, 0, {0,0,0,0,0}, nasm_bytecodes+21864, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_XLATB[] = {
    {I_XLATB, 0, {0,0,0,0,0}, nasm_bytecodes+21864, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_XOR[] = {
    {I_XOR, 2, {MEMORY,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21789, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+21789, IF_8086},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20647, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20647, IF_8086},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20652, IF_386|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20652, IF_386},
    {I_XOR, 2, {MEMORY,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20657, IF_X64|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20657, IF_X64},
    {I_XOR, 2, {REG_GPR|BITS8,MEMORY,0,0,0}, nasm_bytecodes+14214, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS8,REG_GPR|BITS8,0,0,0}, nasm_bytecodes+14214, IF_8086},
    {I_XOR, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+20662, IF_8086|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+20662, IF_8086},
    {I_XOR, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+20667, IF_386|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+20667, IF_386},
    {I_XOR, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+20672, IF_X64|IF_SM},
    {I_XOR, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+20672, IF_X64},
    {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16516, IF_8086},
    {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16522, IF_386},
    {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+16528, IF_X64},
    {I_XOR, 2, {REG_AL,IMMEDIATE,0,0,0}, nasm_bytecodes+21793, IF_8086|IF_SM},
    {I_XOR, 2, {REG_AX,SBYTE16,0,0,0}, nasm_bytecodes+16516, IF_8086|IF_SM},
    {I_XOR, 2, {REG_AX,IMMEDIATE,0,0,0}, nasm_bytecodes+20677, IF_8086|IF_SM},
    {I_XOR, 2, {REG_EAX,SBYTE32,0,0,0}, nasm_bytecodes+16522, IF_386|IF_SM},
    {I_XOR, 2, {REG_EAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20682, IF_386|IF_SM},
    {I_XOR, 2, {REG_RAX,SBYTE64,0,0,0}, nasm_bytecodes+16528, IF_X64|IF_SM},
    {I_XOR, 2, {REG_RAX,IMMEDIATE,0,0,0}, nasm_bytecodes+20687, IF_X64|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS8,IMMEDIATE,0,0,0}, nasm_bytecodes+20692, IF_8086|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS16,IMMEDIATE,0,0,0}, nasm_bytecodes+16534, IF_8086|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS32,IMMEDIATE,0,0,0}, nasm_bytecodes+16540, IF_386|IF_SM},
    {I_XOR, 2, {RM_GPR|BITS64,IMMEDIATE,0,0,0}, nasm_bytecodes+16546, IF_X64|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS8,0,0,0}, nasm_bytecodes+20692, IF_8086|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS16,0,0,0}, nasm_bytecodes+16534, IF_8086|IF_SM},
    {I_XOR, 2, {MEMORY,IMMEDIATE|BITS32,0,0,0}, nasm_bytecodes+16540, IF_386|IF_SM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XORPD[] = {
    {I_XORPD, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+17548, IF_WILLAMETTE|IF_SSE2},
    ITEMPLATE_END
};

static const struct itemplate instrux_XORPS[] = {
    {I_XORPS, 2, {XMMREG,RM_XMM|BITS128,0,0,0}, nasm_bytecodes+16792, IF_KATMAI|IF_SSE},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTOR[] = {
    {I_XRSTOR, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16835, IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XRSTOR64[] = {
    {I_XRSTOR64, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16834, IF_LONG|IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVE[] = {
    {I_XSAVE, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16823, IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVE64[] = {
    {I_XSAVE64, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16822, IF_LONG|IF_NEHALEM},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVEOPT[] = {
    {I_XSAVEOPT, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16829, IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSAVEOPT64[] = {
    {I_XSAVEOPT64, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16828, IF_LONG|IF_FUTURE},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSETBV[] = {
    {I_XSETBV, 0, {0,0,0,0,0}, nasm_bytecodes+16816, IF_NEHALEM|IF_PRIV},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSHA1[] = {
    {I_XSHA1, 0, {0,0,0,0,0}, nasm_bytecodes+17716, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSHA256[] = {
    {I_XSHA256, 0, {0,0,0,0,0}, nasm_bytecodes+17722, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_XSTORE[] = {
    {I_XSTORE, 0, {0,0,0,0,0}, nasm_bytecodes+20752, IF_PENT|IF_CYRIX},
    ITEMPLATE_END
};

static const struct itemplate instrux_CMOVcc[] = {
    {I_CMOVcc, 2, {REG_GPR|BITS16,MEMORY,0,0,0}, nasm_bytecodes+7806, IF_P6|IF_SM},
    {I_CMOVcc, 2, {REG_GPR|BITS16,REG_GPR|BITS16,0,0,0}, nasm_bytecodes+7806, IF_P6},
    {I_CMOVcc, 2, {REG_GPR|BITS32,MEMORY,0,0,0}, nasm_bytecodes+7813, IF_P6|IF_SM},
    {I_CMOVcc, 2, {REG_GPR|BITS32,REG_GPR|BITS32,0,0,0}, nasm_bytecodes+7813, IF_P6},
    {I_CMOVcc, 2, {REG_GPR|BITS64,MEMORY,0,0,0}, nasm_bytecodes+7820, IF_X64|IF_SM},
    {I_CMOVcc, 2, {REG_GPR|BITS64,REG_GPR|BITS64,0,0,0}, nasm_bytecodes+7820, IF_X64},
    ITEMPLATE_END
};

static const struct itemplate instrux_Jcc[] = {
    {I_Jcc, 1, {IMMEDIATE|NEAR,0,0,0,0}, nasm_bytecodes+7827, IF_386},
    {I_Jcc, 1, {IMMEDIATE|BITS16|NEAR,0,0,0,0}, nasm_bytecodes+7834, IF_386},
    {I_Jcc, 1, {IMMEDIATE|BITS32|NEAR,0,0,0,0}, nasm_bytecodes+7841, IF_386},
    {I_Jcc, 1, {IMMEDIATE|SHORT,0,0,0,0}, nasm_bytecodes+20698, IF_8086},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+20697, IF_8086},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+7842, IF_386},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+7848, IF_8086},
    {I_Jcc, 1, {IMMEDIATE,0,0,0,0}, nasm_bytecodes+20698, IF_8086},
    ITEMPLATE_END
};

static const struct itemplate instrux_SETcc[] = {
    {I_SETcc, 1, {MEMORY,0,0,0,0}, nasm_bytecodes+16552, IF_386|IF_SB},
    {I_SETcc, 1, {REG_GPR|BITS8,0,0,0,0}, nasm_bytecodes+16552, IF_386},
    ITEMPLATE_END
};

const struct itemplate * const nasm_instructions[] = {
    instrux_AAA,
    instrux_AAD,
    instrux_AAM,
    instrux_AAS,
    instrux_ADC,
    instrux_ADD,
    instrux_ADDPD,
    instrux_ADDPS,
    instrux_ADDSD,
    instrux_ADDSS,
    instrux_ADDSUBPD,
    instrux_ADDSUBPS,
    instrux_AESDEC,
    instrux_AESDECLAST,
    instrux_AESENC,
    instrux_AESENCLAST,
    instrux_AESIMC,
    instrux_AESKEYGENASSIST,
    instrux_AND,
    instrux_ANDN,
    instrux_ANDNPD,
    instrux_ANDNPS,
    instrux_ANDPD,
    instrux_ANDPS,
    instrux_ARPL,
    instrux_BB0_RESET,
    instrux_BB1_RESET,
    instrux_BEXTR,
    instrux_BLENDPD,
    instrux_BLENDPS,
    instrux_BLENDVPD,
    instrux_BLENDVPS,
    instrux_BLSI,
    instrux_BLSMSK,
    instrux_BLSR,
    instrux_BOUND,
    instrux_BSF,
    instrux_BSR,
    instrux_BSWAP,
    instrux_BT,
    instrux_BTC,
    instrux_BTR,
    instrux_BTS,
    instrux_BZHI,
    instrux_CALL,
    instrux_CBW,
    instrux_CDQ,
    instrux_CDQE,
    instrux_CLC,
    instrux_CLD,
    instrux_CLFLUSH,
    instrux_CLGI,
    instrux_CLI,
    instrux_CLTS,
    instrux_CMC,
    instrux_CMP,
    instrux_CMPEQPD,
    instrux_CMPEQPS,
    instrux_CMPEQSD,
    instrux_CMPEQSS,
    instrux_CMPLEPD,
    instrux_CMPLEPS,
    instrux_CMPLESD,
    instrux_CMPLESS,
    instrux_CMPLTPD,
    instrux_CMPLTPS,
    instrux_CMPLTSD,
    instrux_CMPLTSS,
    instrux_CMPNEQPD,
    instrux_CMPNEQPS,
    instrux_CMPNEQSD,
    instrux_CMPNEQSS,
    instrux_CMPNLEPD,
    instrux_CMPNLEPS,
    instrux_CMPNLESD,
    instrux_CMPNLESS,
    instrux_CMPNLTPD,
    instrux_CMPNLTPS,
    instrux_CMPNLTSD,
    instrux_CMPNLTSS,
    instrux_CMPORDPD,
    instrux_CMPORDPS,
    instrux_CMPORDSD,
    instrux_CMPORDSS,
    instrux_CMPPD,
    instrux_CMPPS,
    instrux_CMPSB,
    instrux_CMPSD,
    instrux_CMPSQ,
    instrux_CMPSS,
    instrux_CMPSW,
    instrux_CMPUNORDPD,
    instrux_CMPUNORDPS,
    instrux_CMPUNORDSD,
    instrux_CMPUNORDSS,
    instrux_CMPXCHG,
    instrux_CMPXCHG16B,
    instrux_CMPXCHG486,
    instrux_CMPXCHG8B,
    instrux_COMISD,
    instrux_COMISS,
    instrux_CPUID,
    instrux_CPU_READ,
    instrux_CPU_WRITE,
    instrux_CQO,
    instrux_CRC32,
    instrux_CVTDQ2PD,
    instrux_CVTDQ2PS,
    instrux_CVTPD2DQ,
    instrux_CVTPD2PI,
    instrux_CVTPD2PS,
    instrux_CVTPI2PD,
    instrux_CVTPI2PS,
    instrux_CVTPS2DQ,
    instrux_CVTPS2PD,
    instrux_CVTPS2PI,
    instrux_CVTSD2SI,
    instrux_CVTSD2SS,
    instrux_CVTSI2SD,
    instrux_CVTSI2SS,
    instrux_CVTSS2SD,
    instrux_CVTSS2SI,
    instrux_CVTTPD2DQ,
    instrux_CVTTPD2PI,
    instrux_CVTTPS2DQ,
    instrux_CVTTPS2PI,
    instrux_CVTTSD2SI,
    instrux_CVTTSS2SI,
    instrux_CWD,
    instrux_CWDE,
    instrux_DAA,
    instrux_DAS,
    instrux_DB,
    instrux_DD,
    instrux_DEC,
    instrux_DIV,
    instrux_DIVPD,
    instrux_DIVPS,
    instrux_DIVSD,
    instrux_DIVSS,
    instrux_DMINT,
    instrux_DO,
    instrux_DPPD,
    instrux_DPPS,
    instrux_DQ,
    instrux_DT,
    instrux_DW,
    instrux_DY,
    instrux_EMMS,
    instrux_ENTER,
    instrux_EQU,
    instrux_EXTRACTPS,
    instrux_EXTRQ,
    instrux_F2XM1,
    instrux_FABS,
    instrux_FADD,
    instrux_FADDP,
    instrux_FBLD,
    instrux_FBSTP,
    instrux_FCHS,
    instrux_FCLEX,
    instrux_FCMOVB,
    instrux_FCMOVBE,
    instrux_FCMOVE,
    instrux_FCMOVNB,
    instrux_FCMOVNBE,
    instrux_FCMOVNE,
    instrux_FCMOVNU,
    instrux_FCMOVU,
    instrux_FCOM,
    instrux_FCOMI,
    instrux_FCOMIP,
    instrux_FCOMP,
    instrux_FCOMPP,
    instrux_FCOS,
    instrux_FDECSTP,
    instrux_FDISI,
    instrux_FDIV,
    instrux_FDIVP,
    instrux_FDIVR,
    instrux_FDIVRP,
    instrux_FEMMS,
    instrux_FENI,
    instrux_FFREE,
    instrux_FFREEP,
    instrux_FIADD,
    instrux_FICOM,
    instrux_FICOMP,
    instrux_FIDIV,
    instrux_FIDIVR,
    instrux_FILD,
    instrux_FIMUL,
    instrux_FINCSTP,
    instrux_FINIT,
    instrux_FIST,
    instrux_FISTP,
    instrux_FISTTP,
    instrux_FISUB,
    instrux_FISUBR,
    instrux_FLD,
    instrux_FLD1,
    instrux_FLDCW,
    instrux_FLDENV,
    instrux_FLDL2E,
    instrux_FLDL2T,
    instrux_FLDLG2,
    instrux_FLDLN2,
    instrux_FLDPI,
    instrux_FLDZ,
    instrux_FMUL,
    instrux_FMULP,
    instrux_FNCLEX,
    instrux_FNDISI,
    instrux_FNENI,
    instrux_FNINIT,
    instrux_FNOP,
    instrux_FNSAVE,
    instrux_FNSTCW,
    instrux_FNSTENV,
    instrux_FNSTSW,
    instrux_FPATAN,
    instrux_FPREM,
    instrux_FPREM1,
    instrux_FPTAN,
    instrux_FRNDINT,
    instrux_FRSTOR,
    instrux_FSAVE,
    instrux_FSCALE,
    instrux_FSETPM,
    instrux_FSIN,
    instrux_FSINCOS,
    instrux_FSQRT,
    instrux_FST,
    instrux_FSTCW,
    instrux_FSTENV,
    instrux_FSTP,
    instrux_FSTSW,
    instrux_FSUB,
    instrux_FSUBP,
    instrux_FSUBR,
    instrux_FSUBRP,
    instrux_FTST,
    instrux_FUCOM,
    instrux_FUCOMI,
    instrux_FUCOMIP,
    instrux_FUCOMP,
    instrux_FUCOMPP,
    instrux_FWAIT,
    instrux_FXAM,
    instrux_FXCH,
    instrux_FXRSTOR,
    instrux_FXRSTOR64,
    instrux_FXSAVE,
    instrux_FXSAVE64,
    instrux_FXTRACT,
    instrux_FYL2X,
    instrux_FYL2XP1,
    instrux_GETSEC,
    instrux_HADDPD,
    instrux_HADDPS,
    instrux_HINT_NOP0,
    instrux_HINT_NOP1,
    instrux_HINT_NOP10,
    instrux_HINT_NOP11,
    instrux_HINT_NOP12,
    instrux_HINT_NOP13,
    instrux_HINT_NOP14,
    instrux_HINT_NOP15,
    instrux_HINT_NOP16,
    instrux_HINT_NOP17,
    instrux_HINT_NOP18,
    instrux_HINT_NOP19,
    instrux_HINT_NOP2,
    instrux_HINT_NOP20,
    instrux_HINT_NOP21,
    instrux_HINT_NOP22,
    instrux_HINT_NOP23,
    instrux_HINT_NOP24,
    instrux_HINT_NOP25,
    instrux_HINT_NOP26,
    instrux_HINT_NOP27,
    instrux_HINT_NOP28,
    instrux_HINT_NOP29,
    instrux_HINT_NOP3,
    instrux_HINT_NOP30,
    instrux_HINT_NOP31,
    instrux_HINT_NOP32,
    instrux_HINT_NOP33,
    instrux_HINT_NOP34,
    instrux_HINT_NOP35,
    instrux_HINT_NOP36,
    instrux_HINT_NOP37,
    instrux_HINT_NOP38,
    instrux_HINT_NOP39,
    instrux_HINT_NOP4,
    instrux_HINT_NOP40,
    instrux_HINT_NOP41,
    instrux_HINT_NOP42,
    instrux_HINT_NOP43,
    instrux_HINT_NOP44,
    instrux_HINT_NOP45,
    instrux_HINT_NOP46,
    instrux_HINT_NOP47,
    instrux_HINT_NOP48,
    instrux_HINT_NOP49,
    instrux_HINT_NOP5,
    instrux_HINT_NOP50,
    instrux_HINT_NOP51,
    instrux_HINT_NOP52,
    instrux_HINT_NOP53,
    instrux_HINT_NOP54,
    instrux_HINT_NOP55,
    instrux_HINT_NOP56,
    instrux_HINT_NOP57,
    instrux_HINT_NOP58,
    instrux_HINT_NOP59,
    instrux_HINT_NOP6,
    instrux_HINT_NOP60,
    instrux_HINT_NOP61,
    instrux_HINT_NOP62,
    instrux_HINT_NOP63,
    instrux_HINT_NOP7,
    instrux_HINT_NOP8,
    instrux_HINT_NOP9,
    instrux_HLT,
    instrux_HSUBPD,
    instrux_HSUBPS,
    instrux_IBTS,
    instrux_ICEBP,
    instrux_IDIV,
    instrux_IMUL,
    instrux_IN,
    instrux_INC,
    instrux_INCBIN,
    instrux_INSB,
    instrux_INSD,
    instrux_INSERTPS,
    instrux_INSERTQ,
    instrux_INSW,
    instrux_INT,
    instrux_INT01,
    instrux_INT03,
    instrux_INT1,
    instrux_INT3,
    instrux_INTO,
    instrux_INVD,
    instrux_INVEPT,
    instrux_INVLPG,
    instrux_INVLPGA,
    instrux_INVPCID,
    instrux_INVVPID,
    instrux_IRET,
    instrux_IRETD,
    instrux_IRETQ,
    instrux_IRETW,
    instrux_JCXZ,
    instrux_JECXZ,
    instrux_JMP,
    instrux_JMPE,
    instrux_JRCXZ,
    instrux_LAHF,
    instrux_LAR,
    instrux_LDDQU,
    instrux_LDMXCSR,
    instrux_LDS,
    instrux_LEA,
    instrux_LEAVE,
    instrux_LES,
    instrux_LFENCE,
    instrux_LFS,
    instrux_LGDT,
    instrux_LGS,
    instrux_LIDT,
    instrux_LLDT,
    instrux_LLWPCB,
    instrux_LMSW,
    instrux_LOADALL,
    instrux_LOADALL286,
    instrux_LODSB,
    instrux_LODSD,
    instrux_LODSQ,
    instrux_LODSW,
    instrux_LOOP,
    instrux_LOOPE,
    instrux_LOOPNE,
    instrux_LOOPNZ,
    instrux_LOOPZ,
    instrux_LSL,
    instrux_LSS,
    instrux_LTR,
    instrux_LWPINS,
    instrux_LWPVAL,
    instrux_LZCNT,
    instrux_MASKMOVDQU,
    instrux_MASKMOVQ,
    instrux_MAXPD,
    instrux_MAXPS,
    instrux_MAXSD,
    instrux_MAXSS,
    instrux_MFENCE,
    instrux_MINPD,
    instrux_MINPS,
    instrux_MINSD,
    instrux_MINSS,
    instrux_MONITOR,
    instrux_MONTMUL,
    instrux_MOV,
    instrux_MOVAPD,
    instrux_MOVAPS,
    instrux_MOVBE,
    instrux_MOVD,
    instrux_MOVDDUP,
    instrux_MOVDQ2Q,
    instrux_MOVDQA,
    instrux_MOVDQU,
    instrux_MOVHLPS,
    instrux_MOVHPD,
    instrux_MOVHPS,
    instrux_MOVLHPS,
    instrux_MOVLPD,
    instrux_MOVLPS,
    instrux_MOVMSKPD,
    instrux_MOVMSKPS,
    instrux_MOVNTDQ,
    instrux_MOVNTDQA,
    instrux_MOVNTI,
    instrux_MOVNTPD,
    instrux_MOVNTPS,
    instrux_MOVNTQ,
    instrux_MOVNTSD,
    instrux_MOVNTSS,
    instrux_MOVQ,
    instrux_MOVQ2DQ,
    instrux_MOVSB,
    instrux_MOVSD,
    instrux_MOVSHDUP,
    instrux_MOVSLDUP,
    instrux_MOVSQ,
    instrux_MOVSS,
    instrux_MOVSW,
    instrux_MOVSX,
    instrux_MOVSXD,
    instrux_MOVUPD,
    instrux_MOVUPS,
    instrux_MOVZX,
    instrux_MPSADBW,
    instrux_MUL,
    instrux_MULPD,
    instrux_MULPS,
    instrux_MULSD,
    instrux_MULSS,
    instrux_MULX,
    instrux_MWAIT,
    instrux_NEG,
    instrux_NOP,
    instrux_NOT,
    instrux_OR,
    instrux_ORPD,
    instrux_ORPS,
    instrux_OUT,
    instrux_OUTSB,
    instrux_OUTSD,
    instrux_OUTSW,
    instrux_PABSB,
    instrux_PABSD,
    instrux_PABSW,
    instrux_PACKSSDW,
    instrux_PACKSSWB,
    instrux_PACKUSDW,
    instrux_PACKUSWB,
    instrux_PADDB,
    instrux_PADDD,
    instrux_PADDQ,
    instrux_PADDSB,
    instrux_PADDSIW,
    instrux_PADDSW,
    instrux_PADDUSB,
    instrux_PADDUSW,
    instrux_PADDW,
    instrux_PALIGNR,
    instrux_PAND,
    instrux_PANDN,
    instrux_PAUSE,
    instrux_PAVEB,
    instrux_PAVGB,
    instrux_PAVGUSB,
    instrux_PAVGW,
    instrux_PBLENDVB,
    instrux_PBLENDW,
    instrux_PCLMULHQHQDQ,
    instrux_PCLMULHQLQDQ,
    instrux_PCLMULLQHQDQ,
    instrux_PCLMULLQLQDQ,
    instrux_PCLMULQDQ,
    instrux_PCMPEQB,
    instrux_PCMPEQD,
    instrux_PCMPEQQ,
    instrux_PCMPEQW,
    instrux_PCMPESTRI,
    instrux_PCMPESTRM,
    instrux_PCMPGTB,
    instrux_PCMPGTD,
    instrux_PCMPGTQ,
    instrux_PCMPGTW,
    instrux_PCMPISTRI,
    instrux_PCMPISTRM,
    instrux_PDEP,
    instrux_PDISTIB,
    instrux_PEXT,
    instrux_PEXTRB,
    instrux_PEXTRD,
    instrux_PEXTRQ,
    instrux_PEXTRW,
    instrux_PF2ID,
    instrux_PF2IW,
    instrux_PFACC,
    instrux_PFADD,
    instrux_PFCMPEQ,
    instrux_PFCMPGE,
    instrux_PFCMPGT,
    instrux_PFMAX,
    instrux_PFMIN,
    instrux_PFMUL,
    instrux_PFNACC,
    instrux_PFPNACC,
    instrux_PFRCP,
    instrux_PFRCPIT1,
    instrux_PFRCPIT2,
    instrux_PFRCPV,
    instrux_PFRSQIT1,
    instrux_PFRSQRT,
    instrux_PFRSQRTV,
    instrux_PFSUB,
    instrux_PFSUBR,
    instrux_PHADDD,
    instrux_PHADDSW,
    instrux_PHADDW,
    instrux_PHMINPOSUW,
    instrux_PHSUBD,
    instrux_PHSUBSW,
    instrux_PHSUBW,
    instrux_PI2FD,
    instrux_PI2FW,
    instrux_PINSRB,
    instrux_PINSRD,
    instrux_PINSRQ,
    instrux_PINSRW,
    instrux_PMACHRIW,
    instrux_PMADDUBSW,
    instrux_PMADDWD,
    instrux_PMAGW,
    instrux_PMAXSB,
    instrux_PMAXSD,
    instrux_PMAXSW,
    instrux_PMAXUB,
    instrux_PMAXUD,
    instrux_PMAXUW,
    instrux_PMINSB,
    instrux_PMINSD,
    instrux_PMINSW,
    instrux_PMINUB,
    instrux_PMINUD,
    instrux_PMINUW,
    instrux_PMOVMSKB,
    instrux_PMOVSXBD,
    instrux_PMOVSXBQ,
    instrux_PMOVSXBW,
    instrux_PMOVSXDQ,
    instrux_PMOVSXWD,
    instrux_PMOVSXWQ,
    instrux_PMOVZXBD,
    instrux_PMOVZXBQ,
    instrux_PMOVZXBW,
    instrux_PMOVZXDQ,
    instrux_PMOVZXWD,
    instrux_PMOVZXWQ,
    instrux_PMULDQ,
    instrux_PMULHRIW,
    instrux_PMULHRSW,
    instrux_PMULHRWA,
    instrux_PMULHRWC,
    instrux_PMULHUW,
    instrux_PMULHW,
    instrux_PMULLD,
    instrux_PMULLW,
    instrux_PMULUDQ,
    instrux_PMVGEZB,
    instrux_PMVLZB,
    instrux_PMVNZB,
    instrux_PMVZB,
    instrux_POP,
    instrux_POPA,
    instrux_POPAD,
    instrux_POPAW,
    instrux_POPCNT,
    instrux_POPF,
    instrux_POPFD,
    instrux_POPFQ,
    instrux_POPFW,
    instrux_POR,
    instrux_PREFETCH,
    instrux_PREFETCHNTA,
    instrux_PREFETCHT0,
    instrux_PREFETCHT1,
    instrux_PREFETCHT2,
    instrux_PREFETCHW,
    instrux_PSADBW,
    instrux_PSHUFB,
    instrux_PSHUFD,
    instrux_PSHUFHW,
    instrux_PSHUFLW,
    instrux_PSHUFW,
    instrux_PSIGNB,
    instrux_PSIGND,
    instrux_PSIGNW,
    instrux_PSLLD,
    instrux_PSLLDQ,
    instrux_PSLLQ,
    instrux_PSLLW,
    instrux_PSRAD,
    instrux_PSRAW,
    instrux_PSRLD,
    instrux_PSRLDQ,
    instrux_PSRLQ,
    instrux_PSRLW,
    instrux_PSUBB,
    instrux_PSUBD,
    instrux_PSUBQ,
    instrux_PSUBSB,
    instrux_PSUBSIW,
    instrux_PSUBSW,
    instrux_PSUBUSB,
    instrux_PSUBUSW,
    instrux_PSUBW,
    instrux_PSWAPD,
    instrux_PTEST,
    instrux_PUNPCKHBW,
    instrux_PUNPCKHDQ,
    instrux_PUNPCKHQDQ,
    instrux_PUNPCKHWD,
    instrux_PUNPCKLBW,
    instrux_PUNPCKLDQ,
    instrux_PUNPCKLQDQ,
    instrux_PUNPCKLWD,
    instrux_PUSH,
    instrux_PUSHA,
    instrux_PUSHAD,
    instrux_PUSHAW,
    instrux_PUSHF,
    instrux_PUSHFD,
    instrux_PUSHFQ,
    instrux_PUSHFW,
    instrux_PXOR,
    instrux_RCL,
    instrux_RCPPS,
    instrux_RCPSS,
    instrux_RCR,
    instrux_RDFSBASE,
    instrux_RDGSBASE,
    instrux_RDM,
    instrux_RDMSR,
    instrux_RDPMC,
    instrux_RDRAND,
    instrux_RDSHR,
    instrux_RDTSC,
    instrux_RDTSCP,
    instrux_RESB,
    instrux_RESD,
    instrux_RESO,
    instrux_RESQ,
    instrux_REST,
    instrux_RESW,
    instrux_RESY,
    instrux_RET,
    instrux_RETF,
    instrux_RETN,
    instrux_ROL,
    instrux_ROR,
    instrux_RORX,
    instrux_ROUNDPD,
    instrux_ROUNDPS,
    instrux_ROUNDSD,
    instrux_ROUNDSS,
    instrux_RSDC,
    instrux_RSLDT,
    instrux_RSM,
    instrux_RSQRTPS,
    instrux_RSQRTSS,
    instrux_RSTS,
    instrux_SAHF,
    instrux_SAL,
    instrux_SALC,
    instrux_SAR,
    instrux_SARX,
    instrux_SBB,
    instrux_SCASB,
    instrux_SCASD,
    instrux_SCASQ,
    instrux_SCASW,
    instrux_SFENCE,
    instrux_SGDT,
    instrux_SHL,
    instrux_SHLD,
    instrux_SHLX,
    instrux_SHR,
    instrux_SHRD,
    instrux_SHRX,
    instrux_SHUFPD,
    instrux_SHUFPS,
    instrux_SIDT,
    instrux_SKINIT,
    instrux_SLDT,
    instrux_SLWPCB,
    instrux_SMI,
    instrux_SMINT,
    instrux_SMINTOLD,
    instrux_SMSW,
    instrux_SQRTPD,
    instrux_SQRTPS,
    instrux_SQRTSD,
    instrux_SQRTSS,
    instrux_STC,
    instrux_STD,
    instrux_STGI,
    instrux_STI,
    instrux_STMXCSR,
    instrux_STOSB,
    instrux_STOSD,
    instrux_STOSQ,
    instrux_STOSW,
    instrux_STR,
    instrux_SUB,
    instrux_SUBPD,
    instrux_SUBPS,
    instrux_SUBSD,
    instrux_SUBSS,
    instrux_SVDC,
    instrux_SVLDT,
    instrux_SVTS,
    instrux_SWAPGS,
    instrux_SYSCALL,
    instrux_SYSENTER,
    instrux_SYSEXIT,
    instrux_SYSRET,
    instrux_TEST,
    instrux_TZCNT,
    instrux_UCOMISD,
    instrux_UCOMISS,
    instrux_UD0,
    instrux_UD1,
    instrux_UD2,
    instrux_UD2A,
    instrux_UD2B,
    instrux_UMOV,
    instrux_UNPCKHPD,
    instrux_UNPCKHPS,
    instrux_UNPCKLPD,
    instrux_UNPCKLPS,
    instrux_VADDPD,
    instrux_VADDPS,
    instrux_VADDSD,
    instrux_VADDSS,
    instrux_VADDSUBPD,
    instrux_VADDSUBPS,
    instrux_VAESDEC,
    instrux_VAESDECLAST,
    instrux_VAESENC,
    instrux_VAESENCLAST,
    instrux_VAESIMC,
    instrux_VAESKEYGENASSIST,
    instrux_VANDNPD,
    instrux_VANDNPS,
    instrux_VANDPD,
    instrux_VANDPS,
    instrux_VBLENDPD,
    instrux_VBLENDPS,
    instrux_VBLENDVPD,
    instrux_VBLENDVPS,
    instrux_VBROADCASTF128,
    instrux_VBROADCASTI128,
    instrux_VBROADCASTSD,
    instrux_VBROADCASTSS,
    instrux_VCMPEQPD,
    instrux_VCMPEQPS,
    instrux_VCMPEQSD,
    instrux_VCMPEQSS,
    instrux_VCMPEQ_OSPD,
    instrux_VCMPEQ_OSPS,
    instrux_VCMPEQ_OSSD,
    instrux_VCMPEQ_OSSS,
    instrux_VCMPEQ_UQPD,
    instrux_VCMPEQ_UQPS,
    instrux_VCMPEQ_UQSD,
    instrux_VCMPEQ_UQSS,
    instrux_VCMPEQ_USPD,
    instrux_VCMPEQ_USPS,
    instrux_VCMPEQ_USSD,
    instrux_VCMPEQ_USSS,
    instrux_VCMPFALSEPD,
    instrux_VCMPFALSEPS,
    instrux_VCMPFALSESD,
    instrux_VCMPFALSESS,
    instrux_VCMPFALSE_OQPD,
    instrux_VCMPFALSE_OQPS,
    instrux_VCMPFALSE_OQSD,
    instrux_VCMPFALSE_OQSS,
    instrux_VCMPFALSE_OSPD,
    instrux_VCMPFALSE_OSPS,
    instrux_VCMPFALSE_OSSD,
    instrux_VCMPFALSE_OSSS,
    instrux_VCMPGEPD,
    instrux_VCMPGEPS,
    instrux_VCMPGESD,
    instrux_VCMPGESS,
    instrux_VCMPGE_OQPD,
    instrux_VCMPGE_OQPS,
    instrux_VCMPGE_OQSD,
    instrux_VCMPGE_OQSS,
    instrux_VCMPGE_OSPD,
    instrux_VCMPGE_OSPS,
    instrux_VCMPGE_OSSD,
    instrux_VCMPGE_OSSS,
    instrux_VCMPGTPD,
    instrux_VCMPGTPS,
    instrux_VCMPGTSD,
    instrux_VCMPGTSS,
    instrux_VCMPGT_OQPD,
    instrux_VCMPGT_OQPS,
    instrux_VCMPGT_OQSD,
    instrux_VCMPGT_OQSS,
    instrux_VCMPGT_OSPD,
    instrux_VCMPGT_OSPS,
    instrux_VCMPGT_OSSD,
    instrux_VCMPGT_OSSS,
    instrux_VCMPLEPD,
    instrux_VCMPLEPS,
    instrux_VCMPLESD,
    instrux_VCMPLESS,
    instrux_VCMPLE_OQPD,
    instrux_VCMPLE_OQPS,
    instrux_VCMPLE_OQSD,
    instrux_VCMPLE_OQSS,
    instrux_VCMPLE_OSPD,
    instrux_VCMPLE_OSPS,
    instrux_VCMPLE_OSSD,
    instrux_VCMPLE_OSSS,
    instrux_VCMPLTPD,
    instrux_VCMPLTPS,
    instrux_VCMPLTSD,
    instrux_VCMPLTSS,
    instrux_VCMPLT_OQPD,
    instrux_VCMPLT_OQPS,
    instrux_VCMPLT_OQSD,
    instrux_VCMPLT_OQSS,
    instrux_VCMPLT_OSPD,
    instrux_VCMPLT_OSPS,
    instrux_VCMPLT_OSSD,
    instrux_VCMPLT_OSSS,
    instrux_VCMPNEQPD,
    instrux_VCMPNEQPS,
    instrux_VCMPNEQSD,
    instrux_VCMPNEQSS,
    instrux_VCMPNEQ_OQPD,
    instrux_VCMPNEQ_OQPS,
    instrux_VCMPNEQ_OQSD,
    instrux_VCMPNEQ_OQSS,
    instrux_VCMPNEQ_OSPD,
    instrux_VCMPNEQ_OSPS,
    instrux_VCMPNEQ_OSSD,
    instrux_VCMPNEQ_OSSS,
    instrux_VCMPNEQ_UQPD,
    instrux_VCMPNEQ_UQPS,
    instrux_VCMPNEQ_UQSD,
    instrux_VCMPNEQ_UQSS,
    instrux_VCMPNEQ_USPD,
    instrux_VCMPNEQ_USPS,
    instrux_VCMPNEQ_USSD,
    instrux_VCMPNEQ_USSS,
    instrux_VCMPNGEPD,
    instrux_VCMPNGEPS,
    instrux_VCMPNGESD,
    instrux_VCMPNGESS,
    instrux_VCMPNGE_UQPD,
    instrux_VCMPNGE_UQPS,
    instrux_VCMPNGE_UQSD,
    instrux_VCMPNGE_UQSS,
    instrux_VCMPNGE_USPD,
    instrux_VCMPNGE_USPS,
    instrux_VCMPNGE_USSD,
    instrux_VCMPNGE_USSS,
    instrux_VCMPNGTPD,
    instrux_VCMPNGTPS,
    instrux_VCMPNGTSD,
    instrux_VCMPNGTSS,
    instrux_VCMPNGT_UQPD,
    instrux_VCMPNGT_UQPS,
    instrux_VCMPNGT_UQSD,
    instrux_VCMPNGT_UQSS,
    instrux_VCMPNGT_USPD,
    instrux_VCMPNGT_USPS,
    instrux_VCMPNGT_USSD,
    instrux_VCMPNGT_USSS,
    instrux_VCMPNLEPD,
    instrux_VCMPNLEPS,
    instrux_VCMPNLESD,
    instrux_VCMPNLESS,
    instrux_VCMPNLE_UQPD,
    instrux_VCMPNLE_UQPS,
    instrux_VCMPNLE_UQSD,
    instrux_VCMPNLE_UQSS,
    instrux_VCMPNLE_USPD,
    instrux_VCMPNLE_USPS,
    instrux_VCMPNLE_USSD,
    instrux_VCMPNLE_USSS,
    instrux_VCMPNLTPD,
    instrux_VCMPNLTPS,
    instrux_VCMPNLTSD,
    instrux_VCMPNLTSS,
    instrux_VCMPNLT_UQPD,
    instrux_VCMPNLT_UQPS,
    instrux_VCMPNLT_UQSD,
    instrux_VCMPNLT_UQSS,
    instrux_VCMPNLT_USPD,
    instrux_VCMPNLT_USPS,
    instrux_VCMPNLT_USSD,
    instrux_VCMPNLT_USSS,
    instrux_VCMPORDPD,
    instrux_VCMPORDPS,
    instrux_VCMPORDSD,
    instrux_VCMPORDSS,
    instrux_VCMPORD_QPD,
    instrux_VCMPORD_QPS,
    instrux_VCMPORD_QSD,
    instrux_VCMPORD_QSS,
    instrux_VCMPORD_SPD,
    instrux_VCMPORD_SPS,
    instrux_VCMPORD_SSD,
    instrux_VCMPORD_SSS,
    instrux_VCMPPD,
    instrux_VCMPPS,
    instrux_VCMPSD,
    instrux_VCMPSS,
    instrux_VCMPTRUEPD,
    instrux_VCMPTRUEPS,
    instrux_VCMPTRUESD,
    instrux_VCMPTRUESS,
    instrux_VCMPTRUE_UQPD,
    instrux_VCMPTRUE_UQPS,
    instrux_VCMPTRUE_UQSD,
    instrux_VCMPTRUE_UQSS,
    instrux_VCMPTRUE_USPD,
    instrux_VCMPTRUE_USPS,
    instrux_VCMPTRUE_USSD,
    instrux_VCMPTRUE_USSS,
    instrux_VCMPUNORDPD,
    instrux_VCMPUNORDPS,
    instrux_VCMPUNORDSD,
    instrux_VCMPUNORDSS,
    instrux_VCMPUNORD_QPD,
    instrux_VCMPUNORD_QPS,
    instrux_VCMPUNORD_QSD,
    instrux_VCMPUNORD_QSS,
    instrux_VCMPUNORD_SPD,
    instrux_VCMPUNORD_SPS,
    instrux_VCMPUNORD_SSD,
    instrux_VCMPUNORD_SSS,
    instrux_VCOMISD,
    instrux_VCOMISS,
    instrux_VCVTDQ2PD,
    instrux_VCVTDQ2PS,
    instrux_VCVTPD2DQ,
    instrux_VCVTPD2PS,
    instrux_VCVTPH2PS,
    instrux_VCVTPS2DQ,
    instrux_VCVTPS2PD,
    instrux_VCVTPS2PH,
    instrux_VCVTSD2SI,
    instrux_VCVTSD2SS,
    instrux_VCVTSI2SD,
    instrux_VCVTSI2SS,
    instrux_VCVTSS2SD,
    instrux_VCVTSS2SI,
    instrux_VCVTTPD2DQ,
    instrux_VCVTTPS2DQ,
    instrux_VCVTTSD2SI,
    instrux_VCVTTSS2SI,
    instrux_VDIVPD,
    instrux_VDIVPS,
    instrux_VDIVSD,
    instrux_VDIVSS,
    instrux_VDPPD,
    instrux_VDPPS,
    instrux_VERR,
    instrux_VERW,
    instrux_VEXTRACTF128,
    instrux_VEXTRACTI128,
    instrux_VEXTRACTPS,
    instrux_VFMADD123PD,
    instrux_VFMADD123PS,
    instrux_VFMADD123SD,
    instrux_VFMADD123SS,
    instrux_VFMADD132PD,
    instrux_VFMADD132PS,
    instrux_VFMADD132SD,
    instrux_VFMADD132SS,
    instrux_VFMADD213PD,
    instrux_VFMADD213PS,
    instrux_VFMADD213SD,
    instrux_VFMADD213SS,
    instrux_VFMADD231PD,
    instrux_VFMADD231PS,
    instrux_VFMADD231SD,
    instrux_VFMADD231SS,
    instrux_VFMADD312PD,
    instrux_VFMADD312PS,
    instrux_VFMADD312SD,
    instrux_VFMADD312SS,
    instrux_VFMADD321PD,
    instrux_VFMADD321PS,
    instrux_VFMADD321SD,
    instrux_VFMADD321SS,
    instrux_VFMADDPD,
    instrux_VFMADDPS,
    instrux_VFMADDSD,
    instrux_VFMADDSS,
    instrux_VFMADDSUB123PD,
    instrux_VFMADDSUB123PS,
    instrux_VFMADDSUB132PD,
    instrux_VFMADDSUB132PS,
    instrux_VFMADDSUB213PD,
    instrux_VFMADDSUB213PS,
    instrux_VFMADDSUB231PD,
    instrux_VFMADDSUB231PS,
    instrux_VFMADDSUB312PD,
    instrux_VFMADDSUB312PS,
    instrux_VFMADDSUB321PD,
    instrux_VFMADDSUB321PS,
    instrux_VFMADDSUBPD,
    instrux_VFMADDSUBPS,
    instrux_VFMSUB123PD,
    instrux_VFMSUB123PS,
    instrux_VFMSUB123SD,
    instrux_VFMSUB123SS,
    instrux_VFMSUB132PD,
    instrux_VFMSUB132PS,
    instrux_VFMSUB132SD,
    instrux_VFMSUB132SS,
    instrux_VFMSUB213PD,
    instrux_VFMSUB213PS,
    instrux_VFMSUB213SD,
    instrux_VFMSUB213SS,
    instrux_VFMSUB231PD,
    instrux_VFMSUB231PS,
    instrux_VFMSUB231SD,
    instrux_VFMSUB231SS,
    instrux_VFMSUB312PD,
    instrux_VFMSUB312PS,
    instrux_VFMSUB312SD,
    instrux_VFMSUB312SS,
    instrux_VFMSUB321PD,
    instrux_VFMSUB321PS,
    instrux_VFMSUB321SD,
    instrux_VFMSUB321SS,
    instrux_VFMSUBADD123PD,
    instrux_VFMSUBADD123PS,
    instrux_VFMSUBADD132PD,
    instrux_VFMSUBADD132PS,
    instrux_VFMSUBADD213PD,
    instrux_VFMSUBADD213PS,
    instrux_VFMSUBADD231PD,
    instrux_VFMSUBADD231PS,
    instrux_VFMSUBADD312PD,
    instrux_VFMSUBADD312PS,
    instrux_VFMSUBADD321PD,
    instrux_VFMSUBADD321PS,
    instrux_VFMSUBADDPD,
    instrux_VFMSUBADDPS,
    instrux_VFMSUBPD,
    instrux_VFMSUBPS,
    instrux_VFMSUBSD,
    instrux_VFMSUBSS,
    instrux_VFNMADD123PD,
    instrux_VFNMADD123PS,
    instrux_VFNMADD123SD,
    instrux_VFNMADD123SS,
    instrux_VFNMADD132PD,
    instrux_VFNMADD132PS,
    instrux_VFNMADD132SD,
    instrux_VFNMADD132SS,
    instrux_VFNMADD213PD,
    instrux_VFNMADD213PS,
    instrux_VFNMADD213SD,
    instrux_VFNMADD213SS,
    instrux_VFNMADD231PD,
    instrux_VFNMADD231PS,
    instrux_VFNMADD231SD,
    instrux_VFNMADD231SS,
    instrux_VFNMADD312PD,
    instrux_VFNMADD312PS,
    instrux_VFNMADD312SD,
    instrux_VFNMADD312SS,
    instrux_VFNMADD321PD,
    instrux_VFNMADD321PS,
    instrux_VFNMADD321SD,
    instrux_VFNMADD321SS,
    instrux_VFNMADDPD,
    instrux_VFNMADDPS,
    instrux_VFNMADDSD,
    instrux_VFNMADDSS,
    instrux_VFNMSUB123PD,
    instrux_VFNMSUB123PS,
    instrux_VFNMSUB123SD,
    instrux_VFNMSUB123SS,
    instrux_VFNMSUB132PD,
    instrux_VFNMSUB132PS,
    instrux_VFNMSUB132SD,
    instrux_VFNMSUB132SS,
    instrux_VFNMSUB213PD,
    instrux_VFNMSUB213PS,
    instrux_VFNMSUB213SD,
    instrux_VFNMSUB213SS,
    instrux_VFNMSUB231PD,
    instrux_VFNMSUB231PS,
    instrux_VFNMSUB231SD,
    instrux_VFNMSUB231SS,
    instrux_VFNMSUB312PD,
    instrux_VFNMSUB312PS,
    instrux_VFNMSUB312SD,
    instrux_VFNMSUB312SS,
    instrux_VFNMSUB321PD,
    instrux_VFNMSUB321PS,
    instrux_VFNMSUB321SD,
    instrux_VFNMSUB321SS,
    instrux_VFNMSUBPD,
    instrux_VFNMSUBPS,
    instrux_VFNMSUBSD,
    instrux_VFNMSUBSS,
    instrux_VFRCZPD,
    instrux_VFRCZPS,
    instrux_VFRCZSD,
    instrux_VFRCZSS,
    instrux_VGATHERDPD,
    instrux_VGATHERDPS,
    instrux_VGATHERQPD,
    instrux_VGATHERQPS,
    instrux_VHADDPD,
    instrux_VHADDPS,
    instrux_VHSUBPD,
    instrux_VHSUBPS,
    instrux_VINSERTF128,
    instrux_VINSERTI128,
    instrux_VINSERTPS,
    instrux_VLDDQU,
    instrux_VLDMXCSR,
    instrux_VLDQQU,
    instrux_VMASKMOVDQU,
    instrux_VMASKMOVPD,
    instrux_VMASKMOVPS,
    instrux_VMAXPD,
    instrux_VMAXPS,
    instrux_VMAXSD,
    instrux_VMAXSS,
    instrux_VMCALL,
    instrux_VMCLEAR,
    instrux_VMINPD,
    instrux_VMINPS,
    instrux_VMINSD,
    instrux_VMINSS,
    instrux_VMLAUNCH,
    instrux_VMLOAD,
    instrux_VMMCALL,
    instrux_VMOVAPD,
    instrux_VMOVAPS,
    instrux_VMOVD,
    instrux_VMOVDDUP,
    instrux_VMOVDQA,
    instrux_VMOVDQU,
    instrux_VMOVHLPS,
    instrux_VMOVHPD,
    instrux_VMOVHPS,
    instrux_VMOVLHPS,
    instrux_VMOVLPD,
    instrux_VMOVLPS,
    instrux_VMOVMSKPD,
    instrux_VMOVMSKPS,
    instrux_VMOVNTDQ,
    instrux_VMOVNTDQA,
    instrux_VMOVNTPD,
    instrux_VMOVNTPS,
    instrux_VMOVNTQQ,
    instrux_VMOVQ,
    instrux_VMOVQQA,
    instrux_VMOVQQU,
    instrux_VMOVSD,
    instrux_VMOVSHDUP,
    instrux_VMOVSLDUP,
    instrux_VMOVSS,
    instrux_VMOVUPD,
    instrux_VMOVUPS,
    instrux_VMPSADBW,
    instrux_VMPTRLD,
    instrux_VMPTRST,
    instrux_VMREAD,
    instrux_VMRESUME,
    instrux_VMRUN,
    instrux_VMSAVE,
    instrux_VMULPD,
    instrux_VMULPS,
    instrux_VMULSD,
    instrux_VMULSS,
    instrux_VMWRITE,
    instrux_VMXOFF,
    instrux_VMXON,
    instrux_VORPD,
    instrux_VORPS,
    instrux_VPABSB,
    instrux_VPABSD,
    instrux_VPABSW,
    instrux_VPACKSSDW,
    instrux_VPACKSSWB,
    instrux_VPACKUSDW,
    instrux_VPACKUSWB,
    instrux_VPADDB,
    instrux_VPADDD,
    instrux_VPADDQ,
    instrux_VPADDSB,
    instrux_VPADDSW,
    instrux_VPADDUSB,
    instrux_VPADDUSW,
    instrux_VPADDW,
    instrux_VPALIGNR,
    instrux_VPAND,
    instrux_VPANDN,
    instrux_VPAVGB,
    instrux_VPAVGW,
    instrux_VPBLENDD,
    instrux_VPBLENDVB,
    instrux_VPBLENDW,
    instrux_VPBROADCASTB,
    instrux_VPBROADCASTD,
    instrux_VPBROADCASTQ,
    instrux_VPBROADCASTW,
    instrux_VPCLMULHQHQDQ,
    instrux_VPCLMULHQLQDQ,
    instrux_VPCLMULLQHQDQ,
    instrux_VPCLMULLQLQDQ,
    instrux_VPCLMULQDQ,
    instrux_VPCMOV,
    instrux_VPCMPEQB,
    instrux_VPCMPEQD,
    instrux_VPCMPEQQ,
    instrux_VPCMPEQW,
    instrux_VPCMPESTRI,
    instrux_VPCMPESTRM,
    instrux_VPCMPGTB,
    instrux_VPCMPGTD,
    instrux_VPCMPGTQ,
    instrux_VPCMPGTW,
    instrux_VPCMPISTRI,
    instrux_VPCMPISTRM,
    instrux_VPCOMB,
    instrux_VPCOMD,
    instrux_VPCOMQ,
    instrux_VPCOMUB,
    instrux_VPCOMUD,
    instrux_VPCOMUQ,
    instrux_VPCOMUW,
    instrux_VPCOMW,
    instrux_VPERM2F128,
    instrux_VPERM2I128,
    instrux_VPERMD,
    instrux_VPERMILPD,
    instrux_VPERMILPS,
    instrux_VPERMPQ,
    instrux_VPERMPS,
    instrux_VPEXTRB,
    instrux_VPEXTRD,
    instrux_VPEXTRQ,
    instrux_VPEXTRW,
    instrux_VPGATHERDD,
    instrux_VPGATHERDQ,
    instrux_VPGATHERQD,
    instrux_VPGATHERQQ,
    instrux_VPHADDBD,
    instrux_VPHADDBQ,
    instrux_VPHADDBW,
    instrux_VPHADDD,
    instrux_VPHADDDQ,
    instrux_VPHADDSW,
    instrux_VPHADDUBD,
    instrux_VPHADDUBQ,
    instrux_VPHADDUBW,
    instrux_VPHADDUDQ,
    instrux_VPHADDUWD,
    instrux_VPHADDUWQ,
    instrux_VPHADDW,
    instrux_VPHADDWD,
    instrux_VPHADDWQ,
    instrux_VPHMINPOSUW,
    instrux_VPHSUBBW,
    instrux_VPHSUBD,
    instrux_VPHSUBDQ,
    instrux_VPHSUBSW,
    instrux_VPHSUBW,
    instrux_VPHSUBWD,
    instrux_VPINSRB,
    instrux_VPINSRD,
    instrux_VPINSRQ,
    instrux_VPINSRW,
    instrux_VPMACSDD,
    instrux_VPMACSDQH,
    instrux_VPMACSDQL,
    instrux_VPMACSSDD,
    instrux_VPMACSSDQH,
    instrux_VPMACSSDQL,
    instrux_VPMACSSWD,
    instrux_VPMACSSWW,
    instrux_VPMACSWD,
    instrux_VPMACSWW,
    instrux_VPMADCSSWD,
    instrux_VPMADCSWD,
    instrux_VPMADDUBSW,
    instrux_VPMADDWD,
    instrux_VPMASKMOVD,
    instrux_VPMASKMOVQ,
    instrux_VPMAXSB,
    instrux_VPMAXSD,
    instrux_VPMAXSW,
    instrux_VPMAXUB,
    instrux_VPMAXUD,
    instrux_VPMAXUW,
    instrux_VPMINSB,
    instrux_VPMINSD,
    instrux_VPMINSW,
    instrux_VPMINUB,
    instrux_VPMINUD,
    instrux_VPMINUW,
    instrux_VPMOVMSKB,
    instrux_VPMOVSXBD,
    instrux_VPMOVSXBQ,
    instrux_VPMOVSXBW,
    instrux_VPMOVSXDQ,
    instrux_VPMOVSXWD,
    instrux_VPMOVSXWQ,
    instrux_VPMOVZXBD,
    instrux_VPMOVZXBQ,
    instrux_VPMOVZXBW,
    instrux_VPMOVZXDQ,
    instrux_VPMOVZXWD,
    instrux_VPMOVZXWQ,
    instrux_VPMULDQ,
    instrux_VPMULHRSW,
    instrux_VPMULHUW,
    instrux_VPMULHW,
    instrux_VPMULLD,
    instrux_VPMULLW,
    instrux_VPMULUDQ,
    instrux_VPOR,
    instrux_VPPERM,
    instrux_VPROTB,
    instrux_VPROTD,
    instrux_VPROTQ,
    instrux_VPROTW,
    instrux_VPSADBW,
    instrux_VPSHAB,
    instrux_VPSHAD,
    instrux_VPSHAQ,
    instrux_VPSHAW,
    instrux_VPSHLB,
    instrux_VPSHLD,
    instrux_VPSHLQ,
    instrux_VPSHLW,
    instrux_VPSHUFB,
    instrux_VPSHUFD,
    instrux_VPSHUFHW,
    instrux_VPSHUFLW,
    instrux_VPSIGNB,
    instrux_VPSIGND,
    instrux_VPSIGNW,
    instrux_VPSLLD,
    instrux_VPSLLDQ,
    instrux_VPSLLQ,
    instrux_VPSLLVD,
    instrux_VPSLLVQ,
    instrux_VPSLLW,
    instrux_VPSRAD,
    instrux_VPSRAVD,
    instrux_VPSRAW,
    instrux_VPSRLD,
    instrux_VPSRLDQ,
    instrux_VPSRLQ,
    instrux_VPSRLVD,
    instrux_VPSRLVQ,
    instrux_VPSRLW,
    instrux_VPSUBB,
    instrux_VPSUBD,
    instrux_VPSUBQ,
    instrux_VPSUBSB,
    instrux_VPSUBSW,
    instrux_VPSUBUSB,
    instrux_VPSUBUSW,
    instrux_VPSUBW,
    instrux_VPTEST,
    instrux_VPUNPCKHBW,
    instrux_VPUNPCKHDQ,
    instrux_VPUNPCKHQDQ,
    instrux_VPUNPCKHWD,
    instrux_VPUNPCKLBW,
    instrux_VPUNPCKLDQ,
    instrux_VPUNPCKLQDQ,
    instrux_VPUNPCKLWD,
    instrux_VPXOR,
    instrux_VRCPPS,
    instrux_VRCPSS,
    instrux_VROUNDPD,
    instrux_VROUNDPS,
    instrux_VROUNDSD,
    instrux_VROUNDSS,
    instrux_VRSQRTPS,
    instrux_VRSQRTSS,
    instrux_VSHUFPD,
    instrux_VSHUFPS,
    instrux_VSQRTPD,
    instrux_VSQRTPS,
    instrux_VSQRTSD,
    instrux_VSQRTSS,
    instrux_VSTMXCSR,
    instrux_VSUBPD,
    instrux_VSUBPS,
    instrux_VSUBSD,
    instrux_VSUBSS,
    instrux_VTESTPD,
    instrux_VTESTPS,
    instrux_VUCOMISD,
    instrux_VUCOMISS,
    instrux_VUNPCKHPD,
    instrux_VUNPCKHPS,
    instrux_VUNPCKLPD,
    instrux_VUNPCKLPS,
    instrux_VXORPD,
    instrux_VXORPS,
    instrux_VZEROALL,
    instrux_VZEROUPPER,
    instrux_WBINVD,
    instrux_WRFSBASE,
    instrux_WRGSBASE,
    instrux_WRMSR,
    instrux_WRSHR,
    instrux_XADD,
    instrux_XBTS,
    instrux_XCHG,
    instrux_XCRYPTCBC,
    instrux_XCRYPTCFB,
    instrux_XCRYPTCTR,
    instrux_XCRYPTECB,
    instrux_XCRYPTOFB,
    instrux_XGETBV,
    instrux_XLAT,
    instrux_XLATB,
    instrux_XOR,
    instrux_XORPD,
    instrux_XORPS,
    instrux_XRSTOR,
    instrux_XRSTOR64,
    instrux_XSAVE,
    instrux_XSAVE64,
    instrux_XSAVEOPT,
    instrux_XSAVEOPT64,
    instrux_XSETBV,
    instrux_XSHA1,
    instrux_XSHA256,
    instrux_XSTORE,
    instrux_CMOVcc,
    instrux_Jcc,
    instrux_SETcc,
};
