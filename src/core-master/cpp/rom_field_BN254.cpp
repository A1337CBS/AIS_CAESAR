#include "arch.h"
#include "fp_BN254.h"

namespace BN254 {

/* Curve BN254 - Pairing friendly BN curve */

/* Nogami's fast curve */

#if CHUNK==16

using namespace B256_13;

// Base Bits= 13
const BIG Modulus= {0x13,0x0,0x0,0x0,0x1A70,0x9,0x0,0x0,0x100,0x309,0x2,0x0,0x1800,0x1A26,0x6E8,0x0,0x0,0x412,0x8D9,0x4A};
const BIG ROI= {0x12,0x0,0x0,0x0,0x1A70,0x9,0x0,0x0,0x100,0x309,0x2,0x0,0x1800,0x1A26,0x6E8,0x0,0x0,0x412,0x8D9,0x4A};
const BIG R2modp= {0xF32,0x239,0x14DC,0xCE8,0x928,0x11B6,0x130F,0x1183,0x56E,0x1AEE,0x124F,0xD2A,0x7F8,0x1CE6,0x1B50,0x77C,0x3A,0x1A9E,0x1EFD,0x1C};
const chunk MConst= 0x15E5;
const BIG Fra= {0xDE9,0x1953,0x101B,0x1BCD,0xE17,0x1BE1,0x14FD,0x1249,0x974,0x1C28,0x54F,0x108D,0x150A,0x4CD,0x12D9,0xF91,0x12E,0x10C9,0xDDD,0x36};
const BIG Frb= {0x122A,0x6AC,0xFE4,0x432,0xC58,0x428,0xB02,0xDB6,0x178B,0x6E0,0x1AB2,0xF72,0x2F5,0x1559,0x140F,0x106E,0x1ED1,0x1348,0x1AFB,0x13};

#endif

#if CHUNK==32

using namespace B256_28;

// Base Bits= 28
const BIG Modulus= {0x13,0x0,0x13A7,0x0,0x86121,0x8000000,0x1BA344D,0x4000000,0x5236482,0x2};
const BIG ROI= {0x12,0x0,0x13A7,0x0,0x86121,0x8000000,0x1BA344D,0x4000000,0x5236482,0x2};
const BIG R2modp= {0xF5E7E39,0x2F2A96F,0xB96F13C,0x64E8642,0xC7146,0x9926F7B,0x4DACD24,0x8321E7B,0xD127A2E,0x1};
const chunk MConst= 0x79435E5;
const BIG Fra= {0xF2A6DE9,0x7DE6C06,0xF77C2E1,0x74924D3,0x53F8509,0x50A8469,0xCB6499B,0x212E7C8,0xB377619,0x1};
const BIG Frb= {0xD5922A,0x82193F9,0x8850C5,0x8B6DB2C,0xAC8DC17,0x2F57B96,0x503EAB2,0x1ED1837,0x9EBEE69,0x0};

#endif

#if CHUNK==64

using namespace B256_56;

// Base Bits= 56
const BIG Modulus= {0x13L,0x13A7L,0x80000000086121L,0x40000001BA344DL,0x25236482L};
const BIG ROI= {0x12L,0x13A7L,0x80000000086121L,0x40000001BA344DL,0x25236482L};
const BIG R2modp= {0x2F2A96FF5E7E39L,0x64E8642B96F13CL,0x9926F7B00C7146L,0x8321E7B4DACD24L,0x1D127A2EL};
const chunk MConst= 0x435E50D79435E5L;
const BIG Fra= {0x7DE6C06F2A6DE9L,0x74924D3F77C2E1L,0x50A846953F8509L,0x212E7C8CB6499BL,0x1B377619L};
const BIG Frb= {0x82193F90D5922AL,0x8B6DB2C08850C5L,0x2F57B96AC8DC17L,0x1ED1837503EAB2L,0x9EBEE69L};
#endif

}
