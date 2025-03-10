/* Capstone Disassembly Engine, https://www.capstone-engine.org */
/* By Nguyen Anh Quynh <aquynh@gmail.com>, 2013-2022, */
/*    Rot127 <unisono@quyllur.org> 2022-2024 */
/* Automatically generated file by Capstone's LLVM TableGen Disassembler Backend. */

/* LLVM-commit: <commit> */
/* LLVM-tag: <tag> */

/* Do not edit. */

/* Capstone's LLVM TableGen Backends: */
/* https://github.com/capstone-engine/llvm-capstone */

  MIPS_INS_INVALID,
  MIPS_INS_ABS,
  MIPS_INS_ALIGN,
  MIPS_INS_BEQL,
  MIPS_INS_BGE,
  MIPS_INS_BGEL,
  MIPS_INS_BGEU,
  MIPS_INS_BGEUL,
  MIPS_INS_BGT,
  MIPS_INS_BGTL,
  MIPS_INS_BGTU,
  MIPS_INS_BGTUL,
  MIPS_INS_BLE,
  MIPS_INS_BLEL,
  MIPS_INS_BLEU,
  MIPS_INS_BLEUL,
  MIPS_INS_BLT,
  MIPS_INS_BLTL,
  MIPS_INS_BLTU,
  MIPS_INS_BLTUL,
  MIPS_INS_BNEL,
  MIPS_INS_B,
  MIPS_INS_BEQ,
  MIPS_INS_BNE,
  MIPS_INS_CFTC1,
  MIPS_INS_CTTC1,
  MIPS_INS_DMUL,
  MIPS_INS_DMULO,
  MIPS_INS_DMULOU,
  MIPS_INS_DROL,
  MIPS_INS_DROR,
  MIPS_INS_DDIV,
  MIPS_INS_DREM,
  MIPS_INS_DDIVU,
  MIPS_INS_DREMU,
  MIPS_INS_JAL,
  MIPS_INS_LD,
  MIPS_INS_LWM,
  MIPS_INS_LA,
  MIPS_INS_DLA,
  MIPS_INS_LI,
  MIPS_INS_DLI,
  MIPS_INS_LI_D,
  MIPS_INS_LI_S,
  MIPS_INS_MFTACX,
  MIPS_INS_MFTC0,
  MIPS_INS_MFTC1,
  MIPS_INS_MFTDSP,
  MIPS_INS_MFTGPR,
  MIPS_INS_MFTHC1,
  MIPS_INS_MFTHI,
  MIPS_INS_MFTLO,
  MIPS_INS_MTTACX,
  MIPS_INS_MTTC0,
  MIPS_INS_MTTC1,
  MIPS_INS_MTTDSP,
  MIPS_INS_MTTGPR,
  MIPS_INS_MTTHC1,
  MIPS_INS_MTTHI,
  MIPS_INS_MTTLO,
  MIPS_INS_MUL,
  MIPS_INS_MULO,
  MIPS_INS_MULOU,
  MIPS_INS_NOR,
  MIPS_INS_ADDIU,
  MIPS_INS_ANDI,
  MIPS_INS_SUBU,
  MIPS_INS_TRUNC_W_D,
  MIPS_INS_TRUNC_W_S,
  MIPS_INS_ROL,
  MIPS_INS_ROR,
  MIPS_INS_S_D,
  MIPS_INS_SD,
  MIPS_INS_DIV,
  MIPS_INS_SEQ,
  MIPS_INS_SGE,
  MIPS_INS_SGEU,
  MIPS_INS_SGT,
  MIPS_INS_SGTU,
  MIPS_INS_SLE,
  MIPS_INS_SLEU,
  MIPS_INS_SLT,
  MIPS_INS_SLTU,
  MIPS_INS_SNE,
  MIPS_INS_REM,
  MIPS_INS_SWM,
  MIPS_INS_SAA,
  MIPS_INS_SAAD,
  MIPS_INS_DIVU,
  MIPS_INS_REMU,
  MIPS_INS_ULH,
  MIPS_INS_ULHU,
  MIPS_INS_ULW,
  MIPS_INS_USH,
  MIPS_INS_USW,
  MIPS_INS_ABSQ_S_PH,
  MIPS_INS_ABSQ_S_QB,
  MIPS_INS_ABSQ_S_W,
  MIPS_INS_ADD,
  MIPS_INS_ADDIUPC,
  MIPS_INS_ADDIUR1SP,
  MIPS_INS_ADDIUR2,
  MIPS_INS_ADDIUS5,
  MIPS_INS_ADDIUSP,
  MIPS_INS_ADDQH_PH,
  MIPS_INS_ADDQH_R_PH,
  MIPS_INS_ADDQH_R_W,
  MIPS_INS_ADDQH_W,
  MIPS_INS_ADDQ_PH,
  MIPS_INS_ADDQ_S_PH,
  MIPS_INS_ADDQ_S_W,
  MIPS_INS_ADDR_PS,
  MIPS_INS_ADDSC,
  MIPS_INS_ADDS_A_B,
  MIPS_INS_ADDS_A_D,
  MIPS_INS_ADDS_A_H,
  MIPS_INS_ADDS_A_W,
  MIPS_INS_ADDS_S_B,
  MIPS_INS_ADDS_S_D,
  MIPS_INS_ADDS_S_H,
  MIPS_INS_ADDS_S_W,
  MIPS_INS_ADDS_U_B,
  MIPS_INS_ADDS_U_D,
  MIPS_INS_ADDS_U_H,
  MIPS_INS_ADDS_U_W,
  MIPS_INS_ADDU16,
  MIPS_INS_ADDUH_QB,
  MIPS_INS_ADDUH_R_QB,
  MIPS_INS_ADDU,
  MIPS_INS_ADDU_PH,
  MIPS_INS_ADDU_QB,
  MIPS_INS_ADDU_S_PH,
  MIPS_INS_ADDU_S_QB,
  MIPS_INS_ADDVI_B,
  MIPS_INS_ADDVI_D,
  MIPS_INS_ADDVI_H,
  MIPS_INS_ADDVI_W,
  MIPS_INS_ADDV_B,
  MIPS_INS_ADDV_D,
  MIPS_INS_ADDV_H,
  MIPS_INS_ADDV_W,
  MIPS_INS_ADDWC,
  MIPS_INS_ADD_A_B,
  MIPS_INS_ADD_A_D,
  MIPS_INS_ADD_A_H,
  MIPS_INS_ADD_A_W,
  MIPS_INS_ADDI,
  MIPS_INS_ALUIPC,
  MIPS_INS_AND,
  MIPS_INS_AND16,
  MIPS_INS_ANDI16,
  MIPS_INS_ANDI_B,
  MIPS_INS_AND_V,
  MIPS_INS_APPEND,
  MIPS_INS_ASUB_S_B,
  MIPS_INS_ASUB_S_D,
  MIPS_INS_ASUB_S_H,
  MIPS_INS_ASUB_S_W,
  MIPS_INS_ASUB_U_B,
  MIPS_INS_ASUB_U_D,
  MIPS_INS_ASUB_U_H,
  MIPS_INS_ASUB_U_W,
  MIPS_INS_AUI,
  MIPS_INS_AUIPC,
  MIPS_INS_AVER_S_B,
  MIPS_INS_AVER_S_D,
  MIPS_INS_AVER_S_H,
  MIPS_INS_AVER_S_W,
  MIPS_INS_AVER_U_B,
  MIPS_INS_AVER_U_D,
  MIPS_INS_AVER_U_H,
  MIPS_INS_AVER_U_W,
  MIPS_INS_AVE_S_B,
  MIPS_INS_AVE_S_D,
  MIPS_INS_AVE_S_H,
  MIPS_INS_AVE_S_W,
  MIPS_INS_AVE_U_B,
  MIPS_INS_AVE_U_D,
  MIPS_INS_AVE_U_H,
  MIPS_INS_AVE_U_W,
  MIPS_INS_B16,
  MIPS_INS_BADDU,
  MIPS_INS_BAL,
  MIPS_INS_BALC,
  MIPS_INS_BALIGN,
  MIPS_INS_BALRSC,
  MIPS_INS_BBEQZC,
  MIPS_INS_BBIT0,
  MIPS_INS_BBIT032,
  MIPS_INS_BBIT1,
  MIPS_INS_BBIT132,
  MIPS_INS_BBNEZC,
  MIPS_INS_BC,
  MIPS_INS_BC16,
  MIPS_INS_BC1EQZ,
  MIPS_INS_BC1EQZC,
  MIPS_INS_BC1F,
  MIPS_INS_BC1FL,
  MIPS_INS_BC1NEZ,
  MIPS_INS_BC1NEZC,
  MIPS_INS_BC1T,
  MIPS_INS_BC1TL,
  MIPS_INS_BC2EQZ,
  MIPS_INS_BC2EQZC,
  MIPS_INS_BC2NEZ,
  MIPS_INS_BC2NEZC,
  MIPS_INS_BCLRI_B,
  MIPS_INS_BCLRI_D,
  MIPS_INS_BCLRI_H,
  MIPS_INS_BCLRI_W,
  MIPS_INS_BCLR_B,
  MIPS_INS_BCLR_D,
  MIPS_INS_BCLR_H,
  MIPS_INS_BCLR_W,
  MIPS_INS_BEQC,
  MIPS_INS_BEQIC,
  MIPS_INS_BEQZ16,
  MIPS_INS_BEQZALC,
  MIPS_INS_BEQZC,
  MIPS_INS_BEQZC16,
  MIPS_INS_BGEC,
  MIPS_INS_BGEIC,
  MIPS_INS_BGEIUC,
  MIPS_INS_BGEUC,
  MIPS_INS_BGEZ,
  MIPS_INS_BGEZAL,
  MIPS_INS_BGEZALC,
  MIPS_INS_BGEZALL,
  MIPS_INS_BGEZALS,
  MIPS_INS_BGEZC,
  MIPS_INS_BGEZL,
  MIPS_INS_BGTZ,
  MIPS_INS_BGTZALC,
  MIPS_INS_BGTZC,
  MIPS_INS_BGTZL,
  MIPS_INS_BINSLI_B,
  MIPS_INS_BINSLI_D,
  MIPS_INS_BINSLI_H,
  MIPS_INS_BINSLI_W,
  MIPS_INS_BINSL_B,
  MIPS_INS_BINSL_D,
  MIPS_INS_BINSL_H,
  MIPS_INS_BINSL_W,
  MIPS_INS_BINSRI_B,
  MIPS_INS_BINSRI_D,
  MIPS_INS_BINSRI_H,
  MIPS_INS_BINSRI_W,
  MIPS_INS_BINSR_B,
  MIPS_INS_BINSR_D,
  MIPS_INS_BINSR_H,
  MIPS_INS_BINSR_W,
  MIPS_INS_BITREV,
  MIPS_INS_BITREVW,
  MIPS_INS_BITSWAP,
  MIPS_INS_BLEZ,
  MIPS_INS_BLEZALC,
  MIPS_INS_BLEZC,
  MIPS_INS_BLEZL,
  MIPS_INS_BLTC,
  MIPS_INS_BLTIC,
  MIPS_INS_BLTIUC,
  MIPS_INS_BLTUC,
  MIPS_INS_BLTZ,
  MIPS_INS_BLTZAL,
  MIPS_INS_BLTZALC,
  MIPS_INS_BLTZALL,
  MIPS_INS_BLTZALS,
  MIPS_INS_BLTZC,
  MIPS_INS_BLTZL,
  MIPS_INS_BMNZI_B,
  MIPS_INS_BMNZ_V,
  MIPS_INS_BMZI_B,
  MIPS_INS_BMZ_V,
  MIPS_INS_BNEC,
  MIPS_INS_BNEGI_B,
  MIPS_INS_BNEGI_D,
  MIPS_INS_BNEGI_H,
  MIPS_INS_BNEGI_W,
  MIPS_INS_BNEG_B,
  MIPS_INS_BNEG_D,
  MIPS_INS_BNEG_H,
  MIPS_INS_BNEG_W,
  MIPS_INS_BNEIC,
  MIPS_INS_BNEZ16,
  MIPS_INS_BNEZALC,
  MIPS_INS_BNEZC,
  MIPS_INS_BNEZC16,
  MIPS_INS_BNVC,
  MIPS_INS_BNZ_B,
  MIPS_INS_BNZ_D,
  MIPS_INS_BNZ_H,
  MIPS_INS_BNZ_V,
  MIPS_INS_BNZ_W,
  MIPS_INS_BOVC,
  MIPS_INS_BPOSGE32,
  MIPS_INS_BPOSGE32C,
  MIPS_INS_BREAK,
  MIPS_INS_BREAK16,
  MIPS_INS_BRSC,
  MIPS_INS_BSELI_B,
  MIPS_INS_BSEL_V,
  MIPS_INS_BSETI_B,
  MIPS_INS_BSETI_D,
  MIPS_INS_BSETI_H,
  MIPS_INS_BSETI_W,
  MIPS_INS_BSET_B,
  MIPS_INS_BSET_D,
  MIPS_INS_BSET_H,
  MIPS_INS_BSET_W,
  MIPS_INS_BYTEREVW,
  MIPS_INS_BZ_B,
  MIPS_INS_BZ_D,
  MIPS_INS_BZ_H,
  MIPS_INS_BZ_V,
  MIPS_INS_BZ_W,
  MIPS_INS_BEQZ,
  MIPS_INS_BNEZ,
  MIPS_INS_BTEQZ,
  MIPS_INS_BTNEZ,
  MIPS_INS_CACHE,
  MIPS_INS_CACHEE,
  MIPS_INS_CEIL_L_D,
  MIPS_INS_CEIL_L_S,
  MIPS_INS_CEIL_W_D,
  MIPS_INS_CEIL_W_S,
  MIPS_INS_CEQI_B,
  MIPS_INS_CEQI_D,
  MIPS_INS_CEQI_H,
  MIPS_INS_CEQI_W,
  MIPS_INS_CEQ_B,
  MIPS_INS_CEQ_D,
  MIPS_INS_CEQ_H,
  MIPS_INS_CEQ_W,
  MIPS_INS_CFC1,
  MIPS_INS_CFC2,
  MIPS_INS_CFCMSA,
  MIPS_INS_CINS,
  MIPS_INS_CINS32,
  MIPS_INS_CLASS_D,
  MIPS_INS_CLASS_S,
  MIPS_INS_CLEI_S_B,
  MIPS_INS_CLEI_S_D,
  MIPS_INS_CLEI_S_H,
  MIPS_INS_CLEI_S_W,
  MIPS_INS_CLEI_U_B,
  MIPS_INS_CLEI_U_D,
  MIPS_INS_CLEI_U_H,
  MIPS_INS_CLEI_U_W,
  MIPS_INS_CLE_S_B,
  MIPS_INS_CLE_S_D,
  MIPS_INS_CLE_S_H,
  MIPS_INS_CLE_S_W,
  MIPS_INS_CLE_U_B,
  MIPS_INS_CLE_U_D,
  MIPS_INS_CLE_U_H,
  MIPS_INS_CLE_U_W,
  MIPS_INS_CLO,
  MIPS_INS_CLTI_S_B,
  MIPS_INS_CLTI_S_D,
  MIPS_INS_CLTI_S_H,
  MIPS_INS_CLTI_S_W,
  MIPS_INS_CLTI_U_B,
  MIPS_INS_CLTI_U_D,
  MIPS_INS_CLTI_U_H,
  MIPS_INS_CLTI_U_W,
  MIPS_INS_CLT_S_B,
  MIPS_INS_CLT_S_D,
  MIPS_INS_CLT_S_H,
  MIPS_INS_CLT_S_W,
  MIPS_INS_CLT_U_B,
  MIPS_INS_CLT_U_D,
  MIPS_INS_CLT_U_H,
  MIPS_INS_CLT_U_W,
  MIPS_INS_CLZ,
  MIPS_INS_CMPGDU_EQ_QB,
  MIPS_INS_CMPGDU_LE_QB,
  MIPS_INS_CMPGDU_LT_QB,
  MIPS_INS_CMPGU_EQ_QB,
  MIPS_INS_CMPGU_LE_QB,
  MIPS_INS_CMPGU_LT_QB,
  MIPS_INS_CMPU_EQ_QB,
  MIPS_INS_CMPU_LE_QB,
  MIPS_INS_CMPU_LT_QB,
  MIPS_INS_CMP_AF_D,
  MIPS_INS_CMP_AF_S,
  MIPS_INS_CMP_EQ_D,
  MIPS_INS_CMP_EQ_PH,
  MIPS_INS_CMP_EQ_S,
  MIPS_INS_CMP_LE_D,
  MIPS_INS_CMP_LE_PH,
  MIPS_INS_CMP_LE_S,
  MIPS_INS_CMP_LT_D,
  MIPS_INS_CMP_LT_PH,
  MIPS_INS_CMP_LT_S,
  MIPS_INS_CMP_SAF_D,
  MIPS_INS_CMP_SAF_S,
  MIPS_INS_CMP_SEQ_D,
  MIPS_INS_CMP_SEQ_S,
  MIPS_INS_CMP_SLE_D,
  MIPS_INS_CMP_SLE_S,
  MIPS_INS_CMP_SLT_D,
  MIPS_INS_CMP_SLT_S,
  MIPS_INS_CMP_SUEQ_D,
  MIPS_INS_CMP_SUEQ_S,
  MIPS_INS_CMP_SULE_D,
  MIPS_INS_CMP_SULE_S,
  MIPS_INS_CMP_SULT_D,
  MIPS_INS_CMP_SULT_S,
  MIPS_INS_CMP_SUN_D,
  MIPS_INS_CMP_SUN_S,
  MIPS_INS_CMP_UEQ_D,
  MIPS_INS_CMP_UEQ_S,
  MIPS_INS_CMP_ULE_D,
  MIPS_INS_CMP_ULE_S,
  MIPS_INS_CMP_ULT_D,
  MIPS_INS_CMP_ULT_S,
  MIPS_INS_CMP_UN_D,
  MIPS_INS_CMP_UN_S,
  MIPS_INS_COPY_S_B,
  MIPS_INS_COPY_S_D,
  MIPS_INS_COPY_S_H,
  MIPS_INS_COPY_S_W,
  MIPS_INS_COPY_U_B,
  MIPS_INS_COPY_U_H,
  MIPS_INS_COPY_U_W,
  MIPS_INS_CRC32B,
  MIPS_INS_CRC32CB,
  MIPS_INS_CRC32CD,
  MIPS_INS_CRC32CH,
  MIPS_INS_CRC32CW,
  MIPS_INS_CRC32D,
  MIPS_INS_CRC32H,
  MIPS_INS_CRC32W,
  MIPS_INS_CTC1,
  MIPS_INS_CTC2,
  MIPS_INS_CTCMSA,
  MIPS_INS_CVT_D_S,
  MIPS_INS_CVT_D_W,
  MIPS_INS_CVT_D_L,
  MIPS_INS_CVT_L_D,
  MIPS_INS_CVT_L_S,
  MIPS_INS_CVT_PS_PW,
  MIPS_INS_CVT_PS_S,
  MIPS_INS_CVT_PW_PS,
  MIPS_INS_CVT_S_D,
  MIPS_INS_CVT_S_L,
  MIPS_INS_CVT_S_PL,
  MIPS_INS_CVT_S_PU,
  MIPS_INS_CVT_S_W,
  MIPS_INS_CVT_W_D,
  MIPS_INS_CVT_W_S,
  MIPS_INS_C_EQ_D,
  MIPS_INS_C_EQ_S,
  MIPS_INS_C_F_D,
  MIPS_INS_C_F_S,
  MIPS_INS_C_LE_D,
  MIPS_INS_C_LE_S,
  MIPS_INS_C_LT_D,
  MIPS_INS_C_LT_S,
  MIPS_INS_C_NGE_D,
  MIPS_INS_C_NGE_S,
  MIPS_INS_C_NGLE_D,
  MIPS_INS_C_NGLE_S,
  MIPS_INS_C_NGL_D,
  MIPS_INS_C_NGL_S,
  MIPS_INS_C_NGT_D,
  MIPS_INS_C_NGT_S,
  MIPS_INS_C_OLE_D,
  MIPS_INS_C_OLE_S,
  MIPS_INS_C_OLT_D,
  MIPS_INS_C_OLT_S,
  MIPS_INS_C_SEQ_D,
  MIPS_INS_C_SEQ_S,
  MIPS_INS_C_SF_D,
  MIPS_INS_C_SF_S,
  MIPS_INS_C_UEQ_D,
  MIPS_INS_C_UEQ_S,
  MIPS_INS_C_ULE_D,
  MIPS_INS_C_ULE_S,
  MIPS_INS_C_ULT_D,
  MIPS_INS_C_ULT_S,
  MIPS_INS_C_UN_D,
  MIPS_INS_C_UN_S,
  MIPS_INS_CMP,
  MIPS_INS_CMPI,
  MIPS_INS_DADD,
  MIPS_INS_DADDI,
  MIPS_INS_DADDIU,
  MIPS_INS_DADDU,
  MIPS_INS_DAHI,
  MIPS_INS_DALIGN,
  MIPS_INS_DATI,
  MIPS_INS_DAUI,
  MIPS_INS_DBITSWAP,
  MIPS_INS_DCLO,
  MIPS_INS_DCLZ,
  MIPS_INS_DERET,
  MIPS_INS_DEXT,
  MIPS_INS_DEXTM,
  MIPS_INS_DEXTU,
  MIPS_INS_DI,
  MIPS_INS_DINS,
  MIPS_INS_DINSM,
  MIPS_INS_DINSU,
  MIPS_INS_DIV_S_B,
  MIPS_INS_DIV_S_D,
  MIPS_INS_DIV_S_H,
  MIPS_INS_DIV_S_W,
  MIPS_INS_DIV_U_B,
  MIPS_INS_DIV_U_D,
  MIPS_INS_DIV_U_H,
  MIPS_INS_DIV_U_W,
  MIPS_INS_DLSA,
  MIPS_INS_DMFC0,
  MIPS_INS_DMFC1,
  MIPS_INS_DMFC2,
  MIPS_INS_DMFGC0,
  MIPS_INS_DMOD,
  MIPS_INS_DMODU,
  MIPS_INS_DMT,
  MIPS_INS_DMTC0,
  MIPS_INS_DMTC1,
  MIPS_INS_DMTC2,
  MIPS_INS_DMTGC0,
  MIPS_INS_DMUH,
  MIPS_INS_DMUHU,
  MIPS_INS_DMULT,
  MIPS_INS_DMULTU,
  MIPS_INS_DMULU,
  MIPS_INS_DOTP_S_D,
  MIPS_INS_DOTP_S_H,
  MIPS_INS_DOTP_S_W,
  MIPS_INS_DOTP_U_D,
  MIPS_INS_DOTP_U_H,
  MIPS_INS_DOTP_U_W,
  MIPS_INS_DPADD_S_D,
  MIPS_INS_DPADD_S_H,
  MIPS_INS_DPADD_S_W,
  MIPS_INS_DPADD_U_D,
  MIPS_INS_DPADD_U_H,
  MIPS_INS_DPADD_U_W,
  MIPS_INS_DPAQX_SA_W_PH,
  MIPS_INS_DPAQX_S_W_PH,
  MIPS_INS_DPAQ_SA_L_W,
  MIPS_INS_DPAQ_S_W_PH,
  MIPS_INS_DPAU_H_QBL,
  MIPS_INS_DPAU_H_QBR,
  MIPS_INS_DPAX_W_PH,
  MIPS_INS_DPA_W_PH,
  MIPS_INS_DPOP,
  MIPS_INS_DPSQX_SA_W_PH,
  MIPS_INS_DPSQX_S_W_PH,
  MIPS_INS_DPSQ_SA_L_W,
  MIPS_INS_DPSQ_S_W_PH,
  MIPS_INS_DPSUB_S_D,
  MIPS_INS_DPSUB_S_H,
  MIPS_INS_DPSUB_S_W,
  MIPS_INS_DPSUB_U_D,
  MIPS_INS_DPSUB_U_H,
  MIPS_INS_DPSUB_U_W,
  MIPS_INS_DPSU_H_QBL,
  MIPS_INS_DPSU_H_QBR,
  MIPS_INS_DPSX_W_PH,
  MIPS_INS_DPS_W_PH,
  MIPS_INS_DROTR,
  MIPS_INS_DROTR32,
  MIPS_INS_DROTRV,
  MIPS_INS_DSBH,
  MIPS_INS_DSHD,
  MIPS_INS_DSLL,
  MIPS_INS_DSLL32,
  MIPS_INS_DSLLV,
  MIPS_INS_DSRA,
  MIPS_INS_DSRA32,
  MIPS_INS_DSRAV,
  MIPS_INS_DSRL,
  MIPS_INS_DSRL32,
  MIPS_INS_DSRLV,
  MIPS_INS_DSUB,
  MIPS_INS_DSUBU,
  MIPS_INS_DVP,
  MIPS_INS_DVPE,
  MIPS_INS_EHB,
  MIPS_INS_EI,
  MIPS_INS_EMT,
  MIPS_INS_ERET,
  MIPS_INS_ERETNC,
  MIPS_INS_EVP,
  MIPS_INS_EVPE,
  MIPS_INS_EXT,
  MIPS_INS_EXTP,
  MIPS_INS_EXTPDP,
  MIPS_INS_EXTPDPV,
  MIPS_INS_EXTPV,
  MIPS_INS_EXTRV_RS_W,
  MIPS_INS_EXTRV_R_W,
  MIPS_INS_EXTRV_S_H,
  MIPS_INS_EXTRV_W,
  MIPS_INS_EXTR_RS_W,
  MIPS_INS_EXTR_R_W,
  MIPS_INS_EXTR_S_H,
  MIPS_INS_EXTR_W,
  MIPS_INS_EXTS,
  MIPS_INS_EXTS32,
  MIPS_INS_EXTW,
  MIPS_INS_ABS_D,
  MIPS_INS_ABS_S,
  MIPS_INS_FADD_D,
  MIPS_INS_ADD_D,
  MIPS_INS_ADD_PS,
  MIPS_INS_ADD_S,
  MIPS_INS_FADD_W,
  MIPS_INS_FCAF_D,
  MIPS_INS_FCAF_W,
  MIPS_INS_FCEQ_D,
  MIPS_INS_FCEQ_W,
  MIPS_INS_FCLASS_D,
  MIPS_INS_FCLASS_W,
  MIPS_INS_FCLE_D,
  MIPS_INS_FCLE_W,
  MIPS_INS_FCLT_D,
  MIPS_INS_FCLT_W,
  MIPS_INS_FCNE_D,
  MIPS_INS_FCNE_W,
  MIPS_INS_FCOR_D,
  MIPS_INS_FCOR_W,
  MIPS_INS_FCUEQ_D,
  MIPS_INS_FCUEQ_W,
  MIPS_INS_FCULE_D,
  MIPS_INS_FCULE_W,
  MIPS_INS_FCULT_D,
  MIPS_INS_FCULT_W,
  MIPS_INS_FCUNE_D,
  MIPS_INS_FCUNE_W,
  MIPS_INS_FCUN_D,
  MIPS_INS_FCUN_W,
  MIPS_INS_FDIV_D,
  MIPS_INS_DIV_D,
  MIPS_INS_DIV_S,
  MIPS_INS_FDIV_W,
  MIPS_INS_FEXDO_H,
  MIPS_INS_FEXDO_W,
  MIPS_INS_FEXP2_D,
  MIPS_INS_FEXP2_W,
  MIPS_INS_FEXUPL_D,
  MIPS_INS_FEXUPL_W,
  MIPS_INS_FEXUPR_D,
  MIPS_INS_FEXUPR_W,
  MIPS_INS_FFINT_S_D,
  MIPS_INS_FFINT_S_W,
  MIPS_INS_FFINT_U_D,
  MIPS_INS_FFINT_U_W,
  MIPS_INS_FFQL_D,
  MIPS_INS_FFQL_W,
  MIPS_INS_FFQR_D,
  MIPS_INS_FFQR_W,
  MIPS_INS_FILL_B,
  MIPS_INS_FILL_D,
  MIPS_INS_FILL_H,
  MIPS_INS_FILL_W,
  MIPS_INS_FLOG2_D,
  MIPS_INS_FLOG2_W,
  MIPS_INS_FLOOR_L_D,
  MIPS_INS_FLOOR_L_S,
  MIPS_INS_FLOOR_W_D,
  MIPS_INS_FLOOR_W_S,
  MIPS_INS_FMADD_D,
  MIPS_INS_FMADD_W,
  MIPS_INS_FMAX_A_D,
  MIPS_INS_FMAX_A_W,
  MIPS_INS_FMAX_D,
  MIPS_INS_FMAX_W,
  MIPS_INS_FMIN_A_D,
  MIPS_INS_FMIN_A_W,
  MIPS_INS_FMIN_D,
  MIPS_INS_FMIN_W,
  MIPS_INS_MOV_D,
  MIPS_INS_MOV_S,
  MIPS_INS_FMSUB_D,
  MIPS_INS_FMSUB_W,
  MIPS_INS_FMUL_D,
  MIPS_INS_MUL_D,
  MIPS_INS_MUL_PS,
  MIPS_INS_MUL_S,
  MIPS_INS_FMUL_W,
  MIPS_INS_NEG_D,
  MIPS_INS_NEG_S,
  MIPS_INS_FORK,
  MIPS_INS_FRCP_D,
  MIPS_INS_FRCP_W,
  MIPS_INS_FRINT_D,
  MIPS_INS_FRINT_W,
  MIPS_INS_FRSQRT_D,
  MIPS_INS_FRSQRT_W,
  MIPS_INS_FSAF_D,
  MIPS_INS_FSAF_W,
  MIPS_INS_FSEQ_D,
  MIPS_INS_FSEQ_W,
  MIPS_INS_FSLE_D,
  MIPS_INS_FSLE_W,
  MIPS_INS_FSLT_D,
  MIPS_INS_FSLT_W,
  MIPS_INS_FSNE_D,
  MIPS_INS_FSNE_W,
  MIPS_INS_FSOR_D,
  MIPS_INS_FSOR_W,
  MIPS_INS_FSQRT_D,
  MIPS_INS_SQRT_D,
  MIPS_INS_SQRT_S,
  MIPS_INS_FSQRT_W,
  MIPS_INS_FSUB_D,
  MIPS_INS_SUB_D,
  MIPS_INS_SUB_PS,
  MIPS_INS_SUB_S,
  MIPS_INS_FSUB_W,
  MIPS_INS_FSUEQ_D,
  MIPS_INS_FSUEQ_W,
  MIPS_INS_FSULE_D,
  MIPS_INS_FSULE_W,
  MIPS_INS_FSULT_D,
  MIPS_INS_FSULT_W,
  MIPS_INS_FSUNE_D,
  MIPS_INS_FSUNE_W,
  MIPS_INS_FSUN_D,
  MIPS_INS_FSUN_W,
  MIPS_INS_FTINT_S_D,
  MIPS_INS_FTINT_S_W,
  MIPS_INS_FTINT_U_D,
  MIPS_INS_FTINT_U_W,
  MIPS_INS_FTQ_H,
  MIPS_INS_FTQ_W,
  MIPS_INS_FTRUNC_S_D,
  MIPS_INS_FTRUNC_S_W,
  MIPS_INS_FTRUNC_U_D,
  MIPS_INS_FTRUNC_U_W,
  MIPS_INS_GINVI,
  MIPS_INS_GINVT,
  MIPS_INS_HADD_S_D,
  MIPS_INS_HADD_S_H,
  MIPS_INS_HADD_S_W,
  MIPS_INS_HADD_U_D,
  MIPS_INS_HADD_U_H,
  MIPS_INS_HADD_U_W,
  MIPS_INS_HSUB_S_D,
  MIPS_INS_HSUB_S_H,
  MIPS_INS_HSUB_S_W,
  MIPS_INS_HSUB_U_D,
  MIPS_INS_HSUB_U_H,
  MIPS_INS_HSUB_U_W,
  MIPS_INS_HYPCALL,
  MIPS_INS_ILVEV_B,
  MIPS_INS_ILVEV_D,
  MIPS_INS_ILVEV_H,
  MIPS_INS_ILVEV_W,
  MIPS_INS_ILVL_B,
  MIPS_INS_ILVL_D,
  MIPS_INS_ILVL_H,
  MIPS_INS_ILVL_W,
  MIPS_INS_ILVOD_B,
  MIPS_INS_ILVOD_D,
  MIPS_INS_ILVOD_H,
  MIPS_INS_ILVOD_W,
  MIPS_INS_ILVR_B,
  MIPS_INS_ILVR_D,
  MIPS_INS_ILVR_H,
  MIPS_INS_ILVR_W,
  MIPS_INS_INS,
  MIPS_INS_INSERT_B,
  MIPS_INS_INSERT_D,
  MIPS_INS_INSERT_H,
  MIPS_INS_INSERT_W,
  MIPS_INS_INSV,
  MIPS_INS_INSVE_B,
  MIPS_INS_INSVE_D,
  MIPS_INS_INSVE_H,
  MIPS_INS_INSVE_W,
  MIPS_INS_J,
  MIPS_INS_JALR,
  MIPS_INS_JALRC,
  MIPS_INS_JALRC_HB,
  MIPS_INS_JALRS16,
  MIPS_INS_JALRS,
  MIPS_INS_JALR_HB,
  MIPS_INS_JALS,
  MIPS_INS_JALX,
  MIPS_INS_JIALC,
  MIPS_INS_JIC,
  MIPS_INS_JR,
  MIPS_INS_JR16,
  MIPS_INS_JRADDIUSP,
  MIPS_INS_JRC,
  MIPS_INS_JRC16,
  MIPS_INS_JRCADDIUSP,
  MIPS_INS_JR_HB,
  MIPS_INS_LAPC_H,
  MIPS_INS_LAPC_B,
  MIPS_INS_LB,
  MIPS_INS_LBE,
  MIPS_INS_LBU16,
  MIPS_INS_LBU,
  MIPS_INS_LBUX,
  MIPS_INS_LBX,
  MIPS_INS_LBUE,
  MIPS_INS_LDC1,
  MIPS_INS_LDC2,
  MIPS_INS_LDC3,
  MIPS_INS_LDI_B,
  MIPS_INS_LDI_D,
  MIPS_INS_LDI_H,
  MIPS_INS_LDI_W,
  MIPS_INS_LDL,
  MIPS_INS_LDPC,
  MIPS_INS_LDR,
  MIPS_INS_LDXC1,
  MIPS_INS_LD_B,
  MIPS_INS_LD_D,
  MIPS_INS_LD_H,
  MIPS_INS_LD_W,
  MIPS_INS_LH,
  MIPS_INS_LHE,
  MIPS_INS_LHU16,
  MIPS_INS_LHU,
  MIPS_INS_LHUXS,
  MIPS_INS_LHUX,
  MIPS_INS_LHX,
  MIPS_INS_LHXS,
  MIPS_INS_LHUE,
  MIPS_INS_LI16,
  MIPS_INS_LL,
  MIPS_INS_LLD,
  MIPS_INS_LLE,
  MIPS_INS_LLWP,
  MIPS_INS_LSA,
  MIPS_INS_LUI,
  MIPS_INS_LUXC1,
  MIPS_INS_LW,
  MIPS_INS_LW16,
  MIPS_INS_LWC1,
  MIPS_INS_LWC2,
  MIPS_INS_LWC3,
  MIPS_INS_LWE,
  MIPS_INS_LWL,
  MIPS_INS_LWLE,
  MIPS_INS_LWM16,
  MIPS_INS_LWM32,
  MIPS_INS_LWPC,
  MIPS_INS_LWP,
  MIPS_INS_LWR,
  MIPS_INS_LWRE,
  MIPS_INS_LWUPC,
  MIPS_INS_LWU,
  MIPS_INS_LWX,
  MIPS_INS_LWXC1,
  MIPS_INS_LWXS,
  MIPS_INS_MADD,
  MIPS_INS_MADDF_D,
  MIPS_INS_MADDF_S,
  MIPS_INS_MADDR_Q_H,
  MIPS_INS_MADDR_Q_W,
  MIPS_INS_MADDU,
  MIPS_INS_MADDV_B,
  MIPS_INS_MADDV_D,
  MIPS_INS_MADDV_H,
  MIPS_INS_MADDV_W,
  MIPS_INS_MADD_D,
  MIPS_INS_MADD_Q_H,
  MIPS_INS_MADD_Q_W,
  MIPS_INS_MADD_S,
  MIPS_INS_MAQ_SA_W_PHL,
  MIPS_INS_MAQ_SA_W_PHR,
  MIPS_INS_MAQ_S_W_PHL,
  MIPS_INS_MAQ_S_W_PHR,
  MIPS_INS_MAXA_D,
  MIPS_INS_MAXA_S,
  MIPS_INS_MAXI_S_B,
  MIPS_INS_MAXI_S_D,
  MIPS_INS_MAXI_S_H,
  MIPS_INS_MAXI_S_W,
  MIPS_INS_MAXI_U_B,
  MIPS_INS_MAXI_U_D,
  MIPS_INS_MAXI_U_H,
  MIPS_INS_MAXI_U_W,
  MIPS_INS_MAX_A_B,
  MIPS_INS_MAX_A_D,
  MIPS_INS_MAX_A_H,
  MIPS_INS_MAX_A_W,
  MIPS_INS_MAX_D,
  MIPS_INS_MAX_S,
  MIPS_INS_MAX_S_B,
  MIPS_INS_MAX_S_D,
  MIPS_INS_MAX_S_H,
  MIPS_INS_MAX_S_W,
  MIPS_INS_MAX_U_B,
  MIPS_INS_MAX_U_D,
  MIPS_INS_MAX_U_H,
  MIPS_INS_MAX_U_W,
  MIPS_INS_MFC0,
  MIPS_INS_MFC1,
  MIPS_INS_MFC2,
  MIPS_INS_MFGC0,
  MIPS_INS_MFHC0,
  MIPS_INS_MFHC1,
  MIPS_INS_MFHC2,
  MIPS_INS_MFHGC0,
  MIPS_INS_MFHI,
  MIPS_INS_MFHI16,
  MIPS_INS_MFLO,
  MIPS_INS_MFLO16,
  MIPS_INS_MFTR,
  MIPS_INS_MINA_D,
  MIPS_INS_MINA_S,
  MIPS_INS_MINI_S_B,
  MIPS_INS_MINI_S_D,
  MIPS_INS_MINI_S_H,
  MIPS_INS_MINI_S_W,
  MIPS_INS_MINI_U_B,
  MIPS_INS_MINI_U_D,
  MIPS_INS_MINI_U_H,
  MIPS_INS_MINI_U_W,
  MIPS_INS_MIN_A_B,
  MIPS_INS_MIN_A_D,
  MIPS_INS_MIN_A_H,
  MIPS_INS_MIN_A_W,
  MIPS_INS_MIN_D,
  MIPS_INS_MIN_S,
  MIPS_INS_MIN_S_B,
  MIPS_INS_MIN_S_D,
  MIPS_INS_MIN_S_H,
  MIPS_INS_MIN_S_W,
  MIPS_INS_MIN_U_B,
  MIPS_INS_MIN_U_D,
  MIPS_INS_MIN_U_H,
  MIPS_INS_MIN_U_W,
  MIPS_INS_MOD,
  MIPS_INS_MODSUB,
  MIPS_INS_MODU,
  MIPS_INS_MOD_S_B,
  MIPS_INS_MOD_S_D,
  MIPS_INS_MOD_S_H,
  MIPS_INS_MOD_S_W,
  MIPS_INS_MOD_U_B,
  MIPS_INS_MOD_U_D,
  MIPS_INS_MOD_U_H,
  MIPS_INS_MOD_U_W,
  MIPS_INS_MOVE,
  MIPS_INS_MOVE16,
  MIPS_INS_MOVE_BALC,
  MIPS_INS_MOVEP,
  MIPS_INS_MOVE_V,
  MIPS_INS_MOVF_D,
  MIPS_INS_MOVF,
  MIPS_INS_MOVF_S,
  MIPS_INS_MOVN_D,
  MIPS_INS_MOVN,
  MIPS_INS_MOVN_S,
  MIPS_INS_MOVT_D,
  MIPS_INS_MOVT,
  MIPS_INS_MOVT_S,
  MIPS_INS_MOVZ_D,
  MIPS_INS_MOVZ,
  MIPS_INS_MOVZ_S,
  MIPS_INS_MSUB,
  MIPS_INS_MSUBF_D,
  MIPS_INS_MSUBF_S,
  MIPS_INS_MSUBR_Q_H,
  MIPS_INS_MSUBR_Q_W,
  MIPS_INS_MSUBU,
  MIPS_INS_MSUBV_B,
  MIPS_INS_MSUBV_D,
  MIPS_INS_MSUBV_H,
  MIPS_INS_MSUBV_W,
  MIPS_INS_MSUB_D,
  MIPS_INS_MSUB_Q_H,
  MIPS_INS_MSUB_Q_W,
  MIPS_INS_MSUB_S,
  MIPS_INS_MTC0,
  MIPS_INS_MTC1,
  MIPS_INS_MTC2,
  MIPS_INS_MTGC0,
  MIPS_INS_MTHC0,
  MIPS_INS_MTHC1,
  MIPS_INS_MTHC2,
  MIPS_INS_MTHGC0,
  MIPS_INS_MTHI,
  MIPS_INS_MTHLIP,
  MIPS_INS_MTLO,
  MIPS_INS_MTM0,
  MIPS_INS_MTM1,
  MIPS_INS_MTM2,
  MIPS_INS_MTP0,
  MIPS_INS_MTP1,
  MIPS_INS_MTP2,
  MIPS_INS_MTTR,
  MIPS_INS_MUH,
  MIPS_INS_MUHU,
  MIPS_INS_MULEQ_S_W_PHL,
  MIPS_INS_MULEQ_S_W_PHR,
  MIPS_INS_MULEU_S_PH_QBL,
  MIPS_INS_MULEU_S_PH_QBR,
  MIPS_INS_MULQ_RS_PH,
  MIPS_INS_MULQ_RS_W,
  MIPS_INS_MULQ_S_PH,
  MIPS_INS_MULQ_S_W,
  MIPS_INS_MULR_PS,
  MIPS_INS_MULR_Q_H,
  MIPS_INS_MULR_Q_W,
  MIPS_INS_MULSAQ_S_W_PH,
  MIPS_INS_MULSA_W_PH,
  MIPS_INS_MULT,
  MIPS_INS_MULTU,
  MIPS_INS_MULU,
  MIPS_INS_MULV_B,
  MIPS_INS_MULV_D,
  MIPS_INS_MULV_H,
  MIPS_INS_MULV_W,
  MIPS_INS_MUL_PH,
  MIPS_INS_MUL_Q_H,
  MIPS_INS_MUL_Q_W,
  MIPS_INS_MUL_S_PH,
  MIPS_INS_NLOC_B,
  MIPS_INS_NLOC_D,
  MIPS_INS_NLOC_H,
  MIPS_INS_NLOC_W,
  MIPS_INS_NLZC_B,
  MIPS_INS_NLZC_D,
  MIPS_INS_NLZC_H,
  MIPS_INS_NLZC_W,
  MIPS_INS_NMADD_D,
  MIPS_INS_NMADD_S,
  MIPS_INS_NMSUB_D,
  MIPS_INS_NMSUB_S,
  MIPS_INS_NOP32,
  MIPS_INS_NOP,
  MIPS_INS_NORI_B,
  MIPS_INS_NOR_V,
  MIPS_INS_NOT16,
  MIPS_INS_NOT,
  MIPS_INS_NEG,
  MIPS_INS_OR,
  MIPS_INS_OR16,
  MIPS_INS_ORI_B,
  MIPS_INS_ORI,
  MIPS_INS_OR_V,
  MIPS_INS_PACKRL_PH,
  MIPS_INS_PAUSE,
  MIPS_INS_PCKEV_B,
  MIPS_INS_PCKEV_D,
  MIPS_INS_PCKEV_H,
  MIPS_INS_PCKEV_W,
  MIPS_INS_PCKOD_B,
  MIPS_INS_PCKOD_D,
  MIPS_INS_PCKOD_H,
  MIPS_INS_PCKOD_W,
  MIPS_INS_PCNT_B,
  MIPS_INS_PCNT_D,
  MIPS_INS_PCNT_H,
  MIPS_INS_PCNT_W,
  MIPS_INS_PICK_PH,
  MIPS_INS_PICK_QB,
  MIPS_INS_PLL_PS,
  MIPS_INS_PLU_PS,
  MIPS_INS_POP,
  MIPS_INS_PRECEQU_PH_QBL,
  MIPS_INS_PRECEQU_PH_QBLA,
  MIPS_INS_PRECEQU_PH_QBR,
  MIPS_INS_PRECEQU_PH_QBRA,
  MIPS_INS_PRECEQ_W_PHL,
  MIPS_INS_PRECEQ_W_PHR,
  MIPS_INS_PRECEU_PH_QBL,
  MIPS_INS_PRECEU_PH_QBLA,
  MIPS_INS_PRECEU_PH_QBR,
  MIPS_INS_PRECEU_PH_QBRA,
  MIPS_INS_PRECRQU_S_QB_PH,
  MIPS_INS_PRECRQ_PH_W,
  MIPS_INS_PRECRQ_QB_PH,
  MIPS_INS_PRECRQ_RS_PH_W,
  MIPS_INS_PRECR_QB_PH,
  MIPS_INS_PRECR_SRA_PH_W,
  MIPS_INS_PRECR_SRA_R_PH_W,
  MIPS_INS_PREF,
  MIPS_INS_PREFE,
  MIPS_INS_PREFX,
  MIPS_INS_PREPEND,
  MIPS_INS_PUL_PS,
  MIPS_INS_PUU_PS,
  MIPS_INS_RADDU_W_QB,
  MIPS_INS_RDDSP,
  MIPS_INS_RDHWR,
  MIPS_INS_RDPGPR,
  MIPS_INS_RECIP_D,
  MIPS_INS_RECIP_S,
  MIPS_INS_REPLV_PH,
  MIPS_INS_REPLV_QB,
  MIPS_INS_REPL_PH,
  MIPS_INS_REPL_QB,
  MIPS_INS_RESTORE_JRC,
  MIPS_INS_RESTORE,
  MIPS_INS_RINT_D,
  MIPS_INS_RINT_S,
  MIPS_INS_ROTR,
  MIPS_INS_ROTRV,
  MIPS_INS_ROTX,
  MIPS_INS_ROUND_L_D,
  MIPS_INS_ROUND_L_S,
  MIPS_INS_ROUND_W_D,
  MIPS_INS_ROUND_W_S,
  MIPS_INS_RSQRT_D,
  MIPS_INS_RSQRT_S,
  MIPS_INS_SAT_S_B,
  MIPS_INS_SAT_S_D,
  MIPS_INS_SAT_S_H,
  MIPS_INS_SAT_S_W,
  MIPS_INS_SAT_U_B,
  MIPS_INS_SAT_U_D,
  MIPS_INS_SAT_U_H,
  MIPS_INS_SAT_U_W,
  MIPS_INS_SAVE,
  MIPS_INS_SB,
  MIPS_INS_SB16,
  MIPS_INS_SBE,
  MIPS_INS_SBX,
  MIPS_INS_SC,
  MIPS_INS_SCD,
  MIPS_INS_SCE,
  MIPS_INS_SCWP,
  MIPS_INS_SDBBP,
  MIPS_INS_SDBBP16,
  MIPS_INS_SDC1,
  MIPS_INS_SDC2,
  MIPS_INS_SDC3,
  MIPS_INS_SDL,
  MIPS_INS_SDR,
  MIPS_INS_SDXC1,
  MIPS_INS_SEB,
  MIPS_INS_SEH,
  MIPS_INS_SELEQZ,
  MIPS_INS_SELEQZ_D,
  MIPS_INS_SELEQZ_S,
  MIPS_INS_SELNEZ,
  MIPS_INS_SELNEZ_D,
  MIPS_INS_SELNEZ_S,
  MIPS_INS_SEL_D,
  MIPS_INS_SEL_S,
  MIPS_INS_SEQI,
  MIPS_INS_SH,
  MIPS_INS_SH16,
  MIPS_INS_SHE,
  MIPS_INS_SHF_B,
  MIPS_INS_SHF_H,
  MIPS_INS_SHF_W,
  MIPS_INS_SHILO,
  MIPS_INS_SHILOV,
  MIPS_INS_SHLLV_PH,
  MIPS_INS_SHLLV_QB,
  MIPS_INS_SHLLV_S_PH,
  MIPS_INS_SHLLV_S_W,
  MIPS_INS_SHLL_PH,
  MIPS_INS_SHLL_QB,
  MIPS_INS_SHLL_S_PH,
  MIPS_INS_SHLL_S_W,
  MIPS_INS_SHRAV_PH,
  MIPS_INS_SHRAV_QB,
  MIPS_INS_SHRAV_R_PH,
  MIPS_INS_SHRAV_R_QB,
  MIPS_INS_SHRAV_R_W,
  MIPS_INS_SHRA_PH,
  MIPS_INS_SHRA_QB,
  MIPS_INS_SHRA_R_PH,
  MIPS_INS_SHRA_R_QB,
  MIPS_INS_SHRA_R_W,
  MIPS_INS_SHRLV_PH,
  MIPS_INS_SHRLV_QB,
  MIPS_INS_SHRL_PH,
  MIPS_INS_SHRL_QB,
  MIPS_INS_SHXS,
  MIPS_INS_SHX,
  MIPS_INS_SIGRIE,
  MIPS_INS_SLDI_B,
  MIPS_INS_SLDI_D,
  MIPS_INS_SLDI_H,
  MIPS_INS_SLDI_W,
  MIPS_INS_SLD_B,
  MIPS_INS_SLD_D,
  MIPS_INS_SLD_H,
  MIPS_INS_SLD_W,
  MIPS_INS_SLL,
  MIPS_INS_SLL16,
  MIPS_INS_SLLI_B,
  MIPS_INS_SLLI_D,
  MIPS_INS_SLLI_H,
  MIPS_INS_SLLI_W,
  MIPS_INS_SLLV,
  MIPS_INS_SLL_B,
  MIPS_INS_SLL_D,
  MIPS_INS_SLL_H,
  MIPS_INS_SLL_W,
  MIPS_INS_SLTIU,
  MIPS_INS_SLTI,
  MIPS_INS_SNEI,
  MIPS_INS_SOV,
  MIPS_INS_SPLATI_B,
  MIPS_INS_SPLATI_D,
  MIPS_INS_SPLATI_H,
  MIPS_INS_SPLATI_W,
  MIPS_INS_SPLAT_B,
  MIPS_INS_SPLAT_D,
  MIPS_INS_SPLAT_H,
  MIPS_INS_SPLAT_W,
  MIPS_INS_SRA,
  MIPS_INS_SRAI_B,
  MIPS_INS_SRAI_D,
  MIPS_INS_SRAI_H,
  MIPS_INS_SRAI_W,
  MIPS_INS_SRARI_B,
  MIPS_INS_SRARI_D,
  MIPS_INS_SRARI_H,
  MIPS_INS_SRARI_W,
  MIPS_INS_SRAR_B,
  MIPS_INS_SRAR_D,
  MIPS_INS_SRAR_H,
  MIPS_INS_SRAR_W,
  MIPS_INS_SRAV,
  MIPS_INS_SRA_B,
  MIPS_INS_SRA_D,
  MIPS_INS_SRA_H,
  MIPS_INS_SRA_W,
  MIPS_INS_SRL,
  MIPS_INS_SRL16,
  MIPS_INS_SRLI_B,
  MIPS_INS_SRLI_D,
  MIPS_INS_SRLI_H,
  MIPS_INS_SRLI_W,
  MIPS_INS_SRLRI_B,
  MIPS_INS_SRLRI_D,
  MIPS_INS_SRLRI_H,
  MIPS_INS_SRLRI_W,
  MIPS_INS_SRLR_B,
  MIPS_INS_SRLR_D,
  MIPS_INS_SRLR_H,
  MIPS_INS_SRLR_W,
  MIPS_INS_SRLV,
  MIPS_INS_SRL_B,
  MIPS_INS_SRL_D,
  MIPS_INS_SRL_H,
  MIPS_INS_SRL_W,
  MIPS_INS_SSNOP,
  MIPS_INS_ST_B,
  MIPS_INS_ST_D,
  MIPS_INS_ST_H,
  MIPS_INS_ST_W,
  MIPS_INS_SUB,
  MIPS_INS_SUBQH_PH,
  MIPS_INS_SUBQH_R_PH,
  MIPS_INS_SUBQH_R_W,
  MIPS_INS_SUBQH_W,
  MIPS_INS_SUBQ_PH,
  MIPS_INS_SUBQ_S_PH,
  MIPS_INS_SUBQ_S_W,
  MIPS_INS_SUBSUS_U_B,
  MIPS_INS_SUBSUS_U_D,
  MIPS_INS_SUBSUS_U_H,
  MIPS_INS_SUBSUS_U_W,
  MIPS_INS_SUBSUU_S_B,
  MIPS_INS_SUBSUU_S_D,
  MIPS_INS_SUBSUU_S_H,
  MIPS_INS_SUBSUU_S_W,
  MIPS_INS_SUBS_S_B,
  MIPS_INS_SUBS_S_D,
  MIPS_INS_SUBS_S_H,
  MIPS_INS_SUBS_S_W,
  MIPS_INS_SUBS_U_B,
  MIPS_INS_SUBS_U_D,
  MIPS_INS_SUBS_U_H,
  MIPS_INS_SUBS_U_W,
  MIPS_INS_SUBU16,
  MIPS_INS_SUBUH_QB,
  MIPS_INS_SUBUH_R_QB,
  MIPS_INS_SUBU_PH,
  MIPS_INS_SUBU_QB,
  MIPS_INS_SUBU_S_PH,
  MIPS_INS_SUBU_S_QB,
  MIPS_INS_SUBVI_B,
  MIPS_INS_SUBVI_D,
  MIPS_INS_SUBVI_H,
  MIPS_INS_SUBVI_W,
  MIPS_INS_SUBV_B,
  MIPS_INS_SUBV_D,
  MIPS_INS_SUBV_H,
  MIPS_INS_SUBV_W,
  MIPS_INS_SUXC1,
  MIPS_INS_SW,
  MIPS_INS_SW16,
  MIPS_INS_SWC1,
  MIPS_INS_SWC2,
  MIPS_INS_SWC3,
  MIPS_INS_SWE,
  MIPS_INS_SWL,
  MIPS_INS_SWLE,
  MIPS_INS_SWM16,
  MIPS_INS_SWM32,
  MIPS_INS_SWPC,
  MIPS_INS_SWP,
  MIPS_INS_SWR,
  MIPS_INS_SWRE,
  MIPS_INS_SWSP,
  MIPS_INS_SWXC1,
  MIPS_INS_SWXS,
  MIPS_INS_SWX,
  MIPS_INS_SYNC,
  MIPS_INS_SYNCI,
  MIPS_INS_SYSCALL,
  MIPS_INS_TEQ,
  MIPS_INS_TEQI,
  MIPS_INS_TGE,
  MIPS_INS_TGEI,
  MIPS_INS_TGEIU,
  MIPS_INS_TGEU,
  MIPS_INS_TLBGINV,
  MIPS_INS_TLBGINVF,
  MIPS_INS_TLBGP,
  MIPS_INS_TLBGR,
  MIPS_INS_TLBGWI,
  MIPS_INS_TLBGWR,
  MIPS_INS_TLBINV,
  MIPS_INS_TLBINVF,
  MIPS_INS_TLBP,
  MIPS_INS_TLBR,
  MIPS_INS_TLBWI,
  MIPS_INS_TLBWR,
  MIPS_INS_TLT,
  MIPS_INS_TLTI,
  MIPS_INS_TLTIU,
  MIPS_INS_TLTU,
  MIPS_INS_TNE,
  MIPS_INS_TNEI,
  MIPS_INS_TRUNC_L_D,
  MIPS_INS_TRUNC_L_S,
  MIPS_INS_UALH,
  MIPS_INS_UALWM,
  MIPS_INS_UALW,
  MIPS_INS_UASH,
  MIPS_INS_UASWM,
  MIPS_INS_UASW,
  MIPS_INS_V3MULU,
  MIPS_INS_VMM0,
  MIPS_INS_VMULU,
  MIPS_INS_VSHF_B,
  MIPS_INS_VSHF_D,
  MIPS_INS_VSHF_H,
  MIPS_INS_VSHF_W,
  MIPS_INS_WAIT,
  MIPS_INS_WRDSP,
  MIPS_INS_WRPGPR,
  MIPS_INS_WSBH,
  MIPS_INS_XOR,
  MIPS_INS_XOR16,
  MIPS_INS_XORI_B,
  MIPS_INS_XORI,
  MIPS_INS_XOR_V,
  MIPS_INS_YIELD,
