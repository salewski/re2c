/* Generated by re2c */
#line 1 "encodings/unicode_group_N.x--encoding-policy(substitute).re"
#include <stdio.h>
#include "utf16.h"
#define YYCTYPE unsigned short
bool scan(const YYCTYPE * start, const YYCTYPE * const limit)
{
	__attribute__((unused)) const YYCTYPE * YYMARKER; // silence compiler warnings when YYMARKER is not used
#	define YYCURSOR start
N:
	
#line 13 "encodings/unicode_group_N.x--encoding-policy(substitute).c"
{
	YYCTYPE yych;
	yych = *YYCURSOR;
	if (yych <= 0x1C59) {
		if (yych <= 0x0D75) {
			if (yych <= 0x09F3) {
				if (yych <= 0x065F) {
					if (yych <= 0x00B3) {
						if (yych <= '/') goto yy2;
						if (yych <= '9') goto yy4;
						if (yych >= 0x00B2) goto yy4;
					} else {
						if (yych <= 0x00B9) {
							if (yych >= 0x00B9) goto yy4;
						} else {
							if (yych <= 0x00BB) goto yy2;
							if (yych <= 0x00BE) goto yy4;
						}
					}
				} else {
					if (yych <= 0x07C9) {
						if (yych <= 0x06EF) {
							if (yych <= 0x0669) goto yy4;
						} else {
							if (yych <= 0x06F9) goto yy4;
							if (yych >= 0x07C0) goto yy4;
						}
					} else {
						if (yych <= 0x096F) {
							if (yych >= 0x0966) goto yy4;
						} else {
							if (yych <= 0x09E5) goto yy2;
							if (yych <= 0x09EF) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x0B77) {
					if (yych <= 0x0AE5) {
						if (yych <= 0x09F9) goto yy4;
						if (yych <= 0x0A65) goto yy2;
						if (yych <= 0x0A6F) goto yy4;
					} else {
						if (yych <= 0x0B65) {
							if (yych <= 0x0AEF) goto yy4;
						} else {
							if (yych <= 0x0B6F) goto yy4;
							if (yych >= 0x0B72) goto yy4;
						}
					}
				} else {
					if (yych <= 0x0C77) {
						if (yych <= 0x0BF2) {
							if (yych >= 0x0BE6) goto yy4;
						} else {
							if (yych <= 0x0C65) goto yy2;
							if (yych <= 0x0C6F) goto yy4;
						}
					} else {
						if (yych <= 0x0CE5) {
							if (yych <= 0x0C7E) goto yy4;
						} else {
							if (yych <= 0x0CEF) goto yy4;
							if (yych >= 0x0D66) goto yy4;
						}
					}
				}
			}
		} else {
			if (yych <= 0x17EF) {
				if (yych <= 0x103F) {
					if (yych <= 0x0E59) {
						if (yych <= 0x0DE5) goto yy2;
						if (yych <= 0x0DEF) goto yy4;
						if (yych >= 0x0E50) goto yy4;
					} else {
						if (yych <= 0x0ED9) {
							if (yych >= 0x0ED0) goto yy4;
						} else {
							if (yych <= 0x0F1F) goto yy2;
							if (yych <= 0x0F33) goto yy4;
						}
					}
				} else {
					if (yych <= 0x137C) {
						if (yych <= 0x108F) {
							if (yych <= 0x1049) goto yy4;
						} else {
							if (yych <= 0x1099) goto yy4;
							if (yych >= 0x1369) goto yy4;
						}
					} else {
						if (yych <= 0x16F0) {
							if (yych >= 0x16EE) goto yy4;
						} else {
							if (yych <= 0x17DF) goto yy2;
							if (yych <= 0x17E9) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x1A89) {
					if (yych <= 0x1945) {
						if (yych <= 0x17F9) goto yy4;
						if (yych <= 0x180F) goto yy2;
						if (yych <= 0x1819) goto yy4;
					} else {
						if (yych <= 0x19CF) {
							if (yych <= 0x194F) goto yy4;
						} else {
							if (yych <= 0x19DA) goto yy4;
							if (yych >= 0x1A80) goto yy4;
						}
					}
				} else {
					if (yych <= 0x1BAF) {
						if (yych <= 0x1A99) {
							if (yych >= 0x1A90) goto yy4;
						} else {
							if (yych <= 0x1B4F) goto yy2;
							if (yych <= 0x1B59) goto yy4;
						}
					} else {
						if (yych <= 0x1C3F) {
							if (yych <= 0x1BB9) goto yy4;
						} else {
							if (yych <= 0x1C49) goto yy4;
							if (yych >= 0x1C50) goto yy4;
						}
					}
				}
			}
		}
	} else {
		if (yych <= 0xA629) {
			if (yych <= 0x3006) {
				if (yych <= 0x2184) {
					if (yych <= 0x2079) {
						if (yych == 0x2070) goto yy4;
						if (yych >= 0x2074) goto yy4;
					} else {
						if (yych <= 0x2089) {
							if (yych >= 0x2080) goto yy4;
						} else {
							if (yych <= 0x214F) goto yy2;
							if (yych <= 0x2182) goto yy4;
						}
					}
				} else {
					if (yych <= 0x24FF) {
						if (yych <= 0x245F) {
							if (yych <= 0x2189) goto yy4;
						} else {
							if (yych <= 0x249B) goto yy4;
							if (yych >= 0x24EA) goto yy4;
						}
					} else {
						if (yych <= 0x2793) {
							if (yych >= 0x2776) goto yy4;
						} else {
							if (yych == 0x2CFD) goto yy4;
						}
					}
				}
			} else {
				if (yych <= 0x3229) {
					if (yych <= 0x3037) {
						if (yych <= 0x3007) goto yy4;
						if (yych <= 0x3020) goto yy2;
						if (yych <= 0x3029) goto yy4;
					} else {
						if (yych <= 0x3191) {
							if (yych <= 0x303A) goto yy4;
						} else {
							if (yych <= 0x3195) goto yy4;
							if (yych >= 0x3220) goto yy4;
						}
					}
				} else {
					if (yych <= 0x327F) {
						if (yych <= 0x324F) {
							if (yych >= 0x3248) goto yy4;
						} else {
							if (yych <= 0x3250) goto yy2;
							if (yych <= 0x325F) goto yy4;
						}
					} else {
						if (yych <= 0x32B0) {
							if (yych <= 0x3289) goto yy4;
						} else {
							if (yych <= 0x32BF) goto yy4;
							if (yych >= 0xA620) goto yy4;
						}
					}
				}
			}
		} else {
			if (yych <= 0xD801) {
				if (yych <= 0xA9CF) {
					if (yych <= 0xA835) {
						if (yych <= 0xA6E5) goto yy2;
						if (yych <= 0xA6EF) goto yy4;
						if (yych >= 0xA830) goto yy4;
					} else {
						if (yych <= 0xA8D9) {
							if (yych >= 0xA8D0) goto yy4;
						} else {
							if (yych <= 0xA8FF) goto yy2;
							if (yych <= 0xA909) goto yy4;
						}
					}
				} else {
					if (yych <= 0xAA59) {
						if (yych <= 0xA9EF) {
							if (yych <= 0xA9D9) goto yy4;
						} else {
							if (yych <= 0xA9F9) goto yy4;
							if (yych >= 0xAA50) goto yy4;
						}
					} else {
						if (yych <= 0xABF9) {
							if (yych >= 0xABF0) goto yy4;
						} else {
							if (yych <= 0xD7FF) goto yy2;
							if (yych <= 0xD800) goto yy6;
							goto yy7;
						}
					}
				}
			} else {
				if (yych <= 0xD81A) {
					if (yych <= 0xD805) {
						if (yych <= 0xD802) goto yy8;
						if (yych <= 0xD803) goto yy9;
						if (yych <= 0xD804) goto yy10;
						goto yy11;
					} else {
						if (yych <= 0xD808) {
							if (yych <= 0xD806) goto yy12;
						} else {
							if (yych <= 0xD809) goto yy13;
							if (yych >= 0xD81A) goto yy14;
						}
					}
				} else {
					if (yych <= 0xD83A) {
						if (yych <= 0xD834) {
							if (yych >= 0xD834) goto yy15;
						} else {
							if (yych <= 0xD835) goto yy16;
							if (yych >= 0xD83A) goto yy17;
						}
					} else {
						if (yych <= 0xD83C) {
							if (yych >= 0xD83C) goto yy18;
						} else {
							if (yych <= 0xFF0F) goto yy2;
							if (yych <= 0xFF19) goto yy4;
						}
					}
				}
			}
		}
	}
yy2:
	++YYCURSOR;
yy3:
#line 13 "encodings/unicode_group_N.x--encoding-policy(substitute).re"
	{ return YYCURSOR == limit; }
#line 283 "encodings/unicode_group_N.x--encoding-policy(substitute).c"
yy4:
	++YYCURSOR;
#line 12 "encodings/unicode_group_N.x--encoding-policy(substitute).re"
	{ goto N; }
#line 288 "encodings/unicode_group_N.x--encoding-policy(substitute).c"
yy6:
	yych = *++YYCURSOR;
	if (yych <= 0xDEFB) {
		if (yych <= 0xDD78) {
			if (yych <= 0xDD06) goto yy3;
			if (yych <= 0xDD33) goto yy4;
			if (yych <= 0xDD3F) goto yy3;
			goto yy4;
		} else {
			if (yych <= 0xDD89) goto yy3;
			if (yych <= 0xDD8B) goto yy4;
			if (yych <= 0xDEE0) goto yy3;
			goto yy4;
		}
	} else {
		if (yych <= 0xDF41) {
			if (yych <= 0xDF1F) goto yy3;
			if (yych <= 0xDF23) goto yy4;
			if (yych <= 0xDF40) goto yy3;
			goto yy4;
		} else {
			if (yych <= 0xDF4A) {
				if (yych <= 0xDF49) goto yy3;
				goto yy4;
			} else {
				if (yych <= 0xDFD0) goto yy3;
				if (yych <= 0xDFD5) goto yy4;
				goto yy3;
			}
		}
	}
yy7:
	yych = *++YYCURSOR;
	if (yych <= 0xDC9F) goto yy3;
	if (yych <= 0xDCA9) goto yy4;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	if (yych <= 0xDE7C) {
		if (yych <= 0xDCA6) {
			if (yych <= 0xDC5F) {
				if (yych <= 0xDC57) goto yy3;
				goto yy4;
			} else {
				if (yych <= 0xDC78) goto yy3;
				if (yych <= 0xDC7F) goto yy4;
				goto yy3;
			}
		} else {
			if (yych <= 0xDD1B) {
				if (yych <= 0xDCAF) goto yy4;
				if (yych <= 0xDD15) goto yy3;
				goto yy4;
			} else {
				if (yych <= 0xDE3F) goto yy3;
				if (yych <= 0xDE47) goto yy4;
				goto yy3;
			}
		}
	} else {
		if (yych <= 0xDF57) {
			if (yych <= 0xDE9F) {
				if (yych <= 0xDE7E) goto yy4;
				if (yych <= 0xDE9C) goto yy3;
				goto yy4;
			} else {
				if (yych <= 0xDEEA) goto yy3;
				if (yych <= 0xDEEF) goto yy4;
				goto yy3;
			}
		} else {
			if (yych <= 0xDF7F) {
				if (yych <= 0xDF5F) goto yy4;
				if (yych <= 0xDF77) goto yy3;
				goto yy4;
			} else {
				if (yych <= 0xDFA8) goto yy3;
				if (yych <= 0xDFAF) goto yy4;
				goto yy3;
			}
		}
	}
yy9:
	yych = *++YYCURSOR;
	if (yych <= 0xDE5F) goto yy3;
	if (yych <= 0xDE7E) goto yy4;
	goto yy3;
yy10:
	yych = *++YYCURSOR;
	if (yych <= 0xDD3F) {
		if (yych <= 0xDCEF) {
			if (yych <= 0xDC51) goto yy3;
			if (yych <= 0xDC6F) goto yy4;
			goto yy3;
		} else {
			if (yych <= 0xDCF9) goto yy4;
			if (yych <= 0xDD35) goto yy3;
			goto yy4;
		}
	} else {
		if (yych <= 0xDDE0) {
			if (yych <= 0xDDCF) goto yy3;
			if (yych <= 0xDDD9) goto yy4;
			goto yy3;
		} else {
			if (yych <= 0xDDF4) goto yy4;
			if (yych <= 0xDEEF) goto yy3;
			if (yych <= 0xDEF9) goto yy4;
			goto yy3;
		}
	}
yy11:
	yych = *++YYCURSOR;
	if (yych <= 0xDE4F) {
		if (yych <= 0xDCCF) goto yy3;
		if (yych <= 0xDCD9) goto yy4;
		goto yy3;
	} else {
		if (yych <= 0xDE59) goto yy4;
		if (yych <= 0xDEBF) goto yy3;
		if (yych <= 0xDEC9) goto yy4;
		goto yy3;
	}
yy12:
	yych = *++YYCURSOR;
	if (yych <= 0xDCDF) goto yy3;
	if (yych <= 0xDCF2) goto yy4;
	goto yy3;
yy13:
	yych = *++YYCURSOR;
	if (yych <= 0xDBFF) goto yy3;
	if (yych <= 0xDC6E) goto yy4;
	goto yy3;
yy14:
	yych = *++YYCURSOR;
	if (yych <= 0xDF4F) {
		if (yych <= 0xDE5F) goto yy3;
		if (yych <= 0xDE69) goto yy4;
		goto yy3;
	} else {
		if (yych == 0xDF5A) goto yy3;
		if (yych <= 0xDF61) goto yy4;
		goto yy3;
	}
yy15:
	yych = *++YYCURSOR;
	if (yych <= 0xDF5F) goto yy3;
	if (yych <= 0xDF71) goto yy4;
	goto yy3;
yy16:
	yych = *++YYCURSOR;
	if (yych <= 0xDFCD) goto yy3;
	if (yych <= 0xDFFF) goto yy4;
	goto yy3;
yy17:
	yych = *++YYCURSOR;
	if (yych <= 0xDCC6) goto yy3;
	if (yych <= 0xDCCF) goto yy4;
	goto yy3;
yy18:
	yych = *++YYCURSOR;
	if (yych <= 0xDCFF) goto yy3;
	if (yych <= 0xDD0C) goto yy4;
	goto yy3;
}
#line 14 "encodings/unicode_group_N.x--encoding-policy(substitute).re"

}
static const unsigned int chars_N [] = {0x30,0x39,  0xb2,0xb3,  0xb9,0xb9,  0xbc,0xbe,  0x660,0x669,  0x6f0,0x6f9,  0x7c0,0x7c9,  0x966,0x96f,  0x9e6,0x9ef,  0x9f4,0x9f9,  0xa66,0xa6f,  0xae6,0xaef,  0xb66,0xb6f,  0xb72,0xb77,  0xbe6,0xbf2,  0xc66,0xc6f,  0xc78,0xc7e,  0xce6,0xcef,  0xd66,0xd75,  0xde6,0xdef,  0xe50,0xe59,  0xed0,0xed9,  0xf20,0xf33,  0x1040,0x1049,  0x1090,0x1099,  0x1369,0x137c,  0x16ee,0x16f0,  0x17e0,0x17e9,  0x17f0,0x17f9,  0x1810,0x1819,  0x1946,0x194f,  0x19d0,0x19da,  0x1a80,0x1a89,  0x1a90,0x1a99,  0x1b50,0x1b59,  0x1bb0,0x1bb9,  0x1c40,0x1c49,  0x1c50,0x1c59,  0x2070,0x2070,  0x2074,0x2079,  0x2080,0x2089,  0x2150,0x2182,  0x2185,0x2189,  0x2460,0x249b,  0x24ea,0x24ff,  0x2776,0x2793,  0x2cfd,0x2cfd,  0x3007,0x3007,  0x3021,0x3029,  0x3038,0x303a,  0x3192,0x3195,  0x3220,0x3229,  0x3248,0x324f,  0x3251,0x325f,  0x3280,0x3289,  0x32b1,0x32bf,  0xa620,0xa629,  0xa6e6,0xa6ef,  0xa830,0xa835,  0xa8d0,0xa8d9,  0xa900,0xa909,  0xa9d0,0xa9d9,  0xa9f0,0xa9f9,  0xaa50,0xaa59,  0xabf0,0xabf9,  0xff10,0xff19,  0x10107,0x10133,  0x10140,0x10178,  0x1018a,0x1018b,  0x102e1,0x102fb,  0x10320,0x10323,  0x10341,0x10341,  0x1034a,0x1034a,  0x103d1,0x103d5,  0x104a0,0x104a9,  0x10858,0x1085f,  0x10879,0x1087f,  0x108a7,0x108af,  0x10916,0x1091b,  0x10a40,0x10a47,  0x10a7d,0x10a7e,  0x10a9d,0x10a9f,  0x10aeb,0x10aef,  0x10b58,0x10b5f,  0x10b78,0x10b7f,  0x10ba9,0x10baf,  0x10e60,0x10e7e,  0x11052,0x1106f,  0x110f0,0x110f9,  0x11136,0x1113f,  0x111d0,0x111d9,  0x111e1,0x111f4,  0x112f0,0x112f9,  0x114d0,0x114d9,  0x11650,0x11659,  0x116c0,0x116c9,  0x118e0,0x118f2,  0x12400,0x1246e,  0x16a60,0x16a69,  0x16b50,0x16b59,  0x16b5b,0x16b61,  0x1d360,0x1d371,  0x1d7ce,0x1d7ff,  0x1e8c7,0x1e8cf,  0x1f100,0x1f10c,  0x0,0x0};
static unsigned int encode_utf16 (const unsigned int * ranges, unsigned int ranges_count, unsigned int * s)
{
	unsigned int * const s_start = s;
	for (unsigned int i = 0; i < ranges_count; i += 2)
		for (unsigned int j = ranges[i]; j <= ranges[i + 1]; ++j)
		{
			if (j <= re2c::utf16::MAX_1WORD_RUNE)
				*s++ = j;
			else
			{
				*s++ = re2c::utf16::lead_surr(j);
				*s++ = re2c::utf16::trail_surr(j);
			}
		}
	return s - s_start;
}

int main ()
{
	unsigned int * buffer_N = new unsigned int [2694];
	YYCTYPE * s = (YYCTYPE *) buffer_N;
	unsigned int buffer_len = encode_utf16 (chars_N, sizeof (chars_N) / sizeof (unsigned int), buffer_N);
	/* convert 32-bit code units to YYCTYPE; reuse the same buffer */
	for (unsigned int i = 0; i < buffer_len; ++i) s[i] = buffer_N[i];
	if (!scan (s, s + buffer_len))
		printf("test 'N' failed\n");
	delete [] buffer_N;
	return 0;
}