/* Generated by re2c */
#line 1 "input8.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;

	if((YYLIMIT - YYCURSOR) < 4) YYFILL(4);
	yych = *YYCURSOR;
	switch(yych){
	case 0x0A:	goto yy4;
	default:	goto yy2;
	}
yy2:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych){
	case 0x00:	goto yy6;
	case 0x0A:	goto yy3;
	default:	goto yy8;
	}
yy3:
#line 6 "input8.re"
	{ return 1; }
#line 27 "<stdout>"
yy4:
	++YYCURSOR;
#line 7 "input8.re"
	{ return 2; }
#line 32 "<stdout>"
yy6:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch(yych){
	case 0x00:	goto yy10;
	case 0x0A:	goto yy7;
	default:	goto yy11;
	}
yy7:
#line 5 "input8.re"
	{ return 0; }
#line 44 "<stdout>"
yy8:
	yych = *++YYCURSOR;
	switch(yych){
	case 0x00:	goto yy10;
	case 0x0A:	goto yy9;
	default:	goto yy11;
	}
yy9:
	YYCURSOR = YYMARKER;
	switch(yyaccept){
	case 1:	goto yy7;
	case 0:	goto yy3;
	}
yy10:
	yych = *++YYCURSOR;
	if(yych <= 0x00) goto yy12;
	goto yy7;
yy11:
	yych = *++YYCURSOR;
	if(yych >= 0x01) goto yy9;
yy12:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy7;
}
#line 9 "input8.re"

