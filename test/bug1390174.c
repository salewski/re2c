/* Generated by re2c */
#line 1 "bug1390174.re"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RET(n) return n

int scan(const char *s, int l) {
const char *p = s;
const char *q;
#define YYCTYPE         char
#define YYCURSOR        p
#define YYLIMIT         (s+l)
#define YYMARKER        q
#define YYFILL(n)

#line 19 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	if((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch(yych){
	case 0x0A:	goto yy4;
	case 'A':
	case 'a':	goto yy2;
	default:	goto yy6;
	}
yy2:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych){
	case 0x0A:	goto yy7;
	case 'A':
	case 'a':	goto yy8;
	default:	goto yy3;
	}
yy3:
#line 19 "bug1390174.re"
	{RET(0);}
#line 44 "<stdout>"
yy4:
	++YYCURSOR;
yy5:
#line 18 "bug1390174.re"
	{RET(1);}
#line 50 "<stdout>"
yy6:
	yych = *++YYCURSOR;
	goto yy3;
yy7:
	yych = *++YYCURSOR;
	goto yy5;
yy8:
	++YYCURSOR;
	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch(yych){
	case 0x0A:	goto yy7;
	case 'A':
	case 'a':	goto yy8;
	default:	goto yy10;
	}
yy10:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 0:	goto yy3;
	}
}
#line 20 "bug1390174.re"

}

void _do_scan(int exp, const char * str, int len)
{
	int ret = scan(str, len);
	
	printf("%d %s %d\n", exp, exp == ret ? "==" : "!=", ret);
}

#define do_scan(exp, str) _do_scan(exp, str, sizeof(str) - 1)

main()
{
	do_scan(1, "a\n");
	do_scan(1, "aa\n");
	do_scan(1, "aaa\n");
	do_scan(1, "aaaa\n");
	do_scan(1, "\n");

	do_scan(0, "q");
	do_scan(0, "a");
}
