/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER;
    const char *YYCTXMARKER;
    
{
	char yych;
	ptrdiff_t zzz_0, zzz_0p2;
	YYCTXMARKER = YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	case '1':	goto yy5;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '0':
	case '1':	goto yy7;
	default:	goto yy3;
	}
yy5:
	yych = *(YYMARKER = ++YYCURSOR);
	zzz_0p2 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '2':
	case '3':	goto yy11;
	default:	goto yy3;
	}
yy6:
	++YYCURSOR;
	yych = *YYCURSOR;
yy7:
	switch (yych) {
	case '0':	goto yy6;
	case '1':	goto yy9;
	default:	goto yy8;
	}
yy8:
	YYCURSOR = YYMARKER;
	goto yy3;
yy9:
	yych = *++YYCURSOR;
	zzz_0p2 = (YYCURSOR - YYCTXMARKER);
	goto yy11;
yy10:
	++YYCURSOR;
	yych = *YYCURSOR;
yy11:
	switch (yych) {
	case '2':	goto yy10;
	case '3':	goto yy12;
	default:	goto yy8;
	}
yy12:
	++YYCURSOR;
	zzz_0 = (YYCURSOR - YYCTXMARKER);
	yych = *YYCURSOR;
	goto yy15;
yy13:
	YYCURSOR = YYCTXMARKER + zzz_0;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%s'\n",
                (YYCTXMARKER + (zzz_0p2 - 1)) - YYCTXMARKER, YYCTXMARKER,
                (YYCTXMARKER + zzz_0p2) - (YYCTXMARKER + (zzz_0p2 - 1)), (YYCTXMARKER + (zzz_0p2 - 1)),
                (YYCTXMARKER + (zzz_0 - 1)) - (YYCTXMARKER + zzz_0p2), (YYCTXMARKER + zzz_0p2),
                YYCURSOR - (YYCTXMARKER + (zzz_0 - 1)), (YYCTXMARKER + (zzz_0 - 1)),
                YYCURSOR);
                return;
        }
yy14:
	++YYCURSOR;
	yych = *YYCURSOR;
yy15:
	switch (yych) {
	case '4':	goto yy14;
	default:	goto yy13;
	}
}

}

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i) {
        lex(argv[i]);
    }
    return 0;
}
