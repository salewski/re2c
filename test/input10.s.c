/* Generated by re2c */
#line 1 "input10.s.re"

#line 5 "<stdout>"
{
	YYCTYPE yych;

	if(YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	if(yych <= 'E') {
		if(yych <= '@') goto yy4;
		if(yych >= 'E') goto yy4;
	} else {
		if(yych <= 'G') goto yy2;
		if(yych <= '`') goto yy4;
		if(yych >= 'h') goto yy4;
	}
yy2:
	++YYCURSOR;
#line 8 "input10.s.re"
	{ return 1; }
#line 23 "<stdout>"
yy4:
	++YYCURSOR;
#line 10 "input10.s.re"
	{ return -1; }
#line 28 "<stdout>"
}
#line 12 "input10.s.re"

