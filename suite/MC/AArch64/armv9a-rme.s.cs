# CS_ARCH_AARCH64, 0, None

0xa0,0x60,0x1e,0xd5 == msr MFAR_EL3,  x0
0xc0,0x21,0x1e,0xd5 == msr GPCCR_EL3, x0
0x80,0x21,0x1e,0xd5 == msr GPTBR_EL3, x0
0xa0,0x60,0x3e,0xd5 == mrs x0, MFAR_EL3
0xc0,0x21,0x3e,0xd5 == mrs x0, GPCCR_EL3
0x80,0x21,0x3e,0xd5 == mrs x0, GPTBR_EL3
0x60,0x84,0x0e,0xd5 == tlbi rpaos, x0
0xe0,0x84,0x0e,0xd5 == tlbi rpalos, x0
0x9f,0x81,0x0e,0xd5 == tlbi paallos
0x9f,0x87,0x0e,0xd5 == tlbi paall
