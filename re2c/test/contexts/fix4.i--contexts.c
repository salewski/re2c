/* Generated by re2c */
#include <stddef.h>
#include <stdio.h>

static void lex(const char *YYCURSOR)
{
    const char *YYMARKER;
    const char *YYCTXMARKER;
    
{
	char yych;
	long yyctx0p1, yyctx0p3;
	YYCTXMARKER = YYCURSOR;
	yych = *YYCURSOR;
	switch (yych) {
	case '0':	goto yy4;
	default:	goto yy2;
	}
yy2:
	++YYCURSOR;
yy3:
	{ printf("error\n"); return; }
yy4:
	yych = *(YYMARKER = ++YYCURSOR);
	yyctx0p1 = (YYCURSOR - YYCTXMARKER);
	switch (yych) {
	case '1':
	case '2':	goto yy6;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
	yych = *YYCURSOR;
yy6:
	switch (yych) {
	case '1':	goto yy5;
	case '2':	goto yy8;
	default:	goto yy7;
	}
yy7:
	YYCURSOR = YYMARKER;
	goto yy3;
yy8:
	yych = *++YYCURSOR;
	yyctx0p3 = (YYCURSOR - YYCTXMARKER);
	goto yy10;
yy9:
	++YYCURSOR;
	yych = *YYCURSOR;
yy10:
	switch (yych) {
	case '3':	goto yy9;
	case '4':	goto yy11;
	default:	goto yy7;
	}
yy11:
	++YYCURSOR;
	{
            printf("'%.*s', '%.*s', '%.*s', '%.*s', '%.*s'\n",
                (YYCTXMARKER + yyctx0p1) - YYCTXMARKER, YYCTXMARKER,
                (YYCTXMARKER + (yyctx0p3 - 1)) - (YYCTXMARKER + yyctx0p1), (YYCTXMARKER + yyctx0p1),
                (YYCTXMARKER + yyctx0p3) - (YYCTXMARKER + (yyctx0p3 - 1)), (YYCTXMARKER + (yyctx0p3 - 1)),
                (YYCTXMARKER + ((YYCURSOR - YYCTXMARKER) - 1)) - (YYCTXMARKER + yyctx0p3), (YYCTXMARKER + yyctx0p3),
                YYCURSOR - (YYCTXMARKER + ((YYCURSOR - YYCTXMARKER) - 1)), (YYCTXMARKER + ((YYCURSOR - YYCTXMARKER) - 1)));
                return;
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
