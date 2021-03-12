#include "arch.h"
#include "ecp_SECP160R1.h"

namespace SECP160R1 {

/* Curve SECP160R1 */

#if CHUNK==16

using namespace B160_13;
// Base Bits= 13

const int CURVE_A= -3;
const int CURVE_Cof_I= 1;
const BIG CURVE_Cof= {0x1,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0};
const int CURVE_B_I= 0;
const BIG CURVE_B= {0x1A45,0xB2F,0xB71,0x9A9,0x181D,0x1C4F,0x16B3,0x116C,0x1D7A,0x2A5,0xFBF,0x192F,0x1};
const BIG CURVE_Order= {0x257,0x13A9,0x14F2,0xF5D,0xF92,0x1A64,0x7,0x0,0x0,0x0,0x0,0x0,0x10};
const BIG CURVE_Gx= {0x1C82,0x1E5F,0xE44,0x717,0x168C,0x14C4,0x1991,0x508,0x1573,0x477,0xD5A,0x152D,0x4};
const BIG CURVE_Gy= {0x1B32,0x162F,0xDDE,0x6A2,0x42,0x489,0x773,0xFAB,0x894,0x98B,0xA15,0x74C,0x2};

#endif

#if CHUNK==32

using namespace B160_29;

const int CURVE_A= -3;
const int CURVE_Cof_I= 1;
const BIG CURVE_Cof= {0x1,0x0,0x0,0x0,0x0,0x0};
const int CURVE_B_I= 0;
const BIG CURVE_B= {0x565FA45,0xEA6A56E,0xB3E27E0,0x1AF516CB,0x1BEFC54B,0xE4B};
const BIG CURVE_Order= {0xA752257,0x93D769E,0x7D323E,0x0,0x0,0x8000};
const BIG CURVE_Gx= {0x13CBFC82,0x61C5DC8,0x191A625A,0xAE6508C,0xB5688EF,0x254B};
const BIG CURVE_Gy= {0x1AC5FB32,0x11A89BB,0x17324481,0x1128FAB3,0x2855316,0x11D3};

#endif

#if CHUNK==64

using namespace B160_56;

// Base Bits= 56
const int CURVE_A= -3;
const int CURVE_Cof_I= 1;
const BIG CURVE_Cof= {0x1L,0x0L,0x0L};
const int CURVE_B_I= 0;
const BIG CURVE_B= {0xD4D4ADC565FA45L,0x7A8B65ACF89F81L,0x1C97BEFC54BDL};
const BIG CURVE_Order= {0x27AED3CA752257L,0x1F4C8F9L,0x1000000000000L};
const BIG CURVE_Gx= {0xC38BB913CBFC82L,0x73284664698968L,0x4A96B5688EF5L};
const BIG CURVE_Gy= {0x2351377AC5FB32L,0x947D59DCC91204L,0x23A628553168L};


#endif

}
