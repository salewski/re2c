/* Generated by re2c */
#line 1 "input11.b.re"
{
	static unsigned char yybm[] = {
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 0xE0, 
		0xE0, 0xE0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x80, 
		0x00, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 
		0xC0, 0xC0, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
	};

#line 40 "<stdout>"
	{
		YYCTYPE yych;
		unsigned int yyaccept = 0;

		if((YYLIMIT - YYCURSOR) < 6) YYFILL(6);
		yych = *YYCURSOR;
		if(yych <= '@') {
			if(yych <= '/') {
				if(yych == '-') goto yy7;
				goto yy10;
			} else {
				if(yych <= '0') goto yy5;
				if(yych <= '9') goto yy9;
				goto yy10;
			}
		} else {
			if(yych <= 'q') {
				if(yych <= 'Z') goto yy4;
				if(yych <= '`') goto yy10;
				goto yy4;
			} else {
				if(yych <= 'r') goto yy2;
				if(yych <= 'z') goto yy4;
				goto yy10;
			}
		}
yy2:
		++YYCURSOR;
		if((yych = *YYCURSOR) == 'e') goto yy15;
		goto yy14;
yy3:
#line 12 "input11.b.re"
		{ return 1; }
#line 74 "<stdout>"
yy4:
		yych = *++YYCURSOR;
		goto yy14;
yy5:
		++YYCURSOR;
yy6:
#line 13 "input11.b.re"
		{ return 2; }
#line 83 "<stdout>"
yy7:
		++YYCURSOR;
		if((yych = *YYCURSOR) <= '0') goto yy8;
		if(yych <= '9') goto yy11;
yy8:
#line 15 "input11.b.re"
		{ return -1; }
#line 91 "<stdout>"
yy9:
		yych = *++YYCURSOR;
		goto yy12;
yy10:
		yych = *++YYCURSOR;
		goto yy8;
yy11:
		++YYCURSOR;
		if(YYLIMIT == YYCURSOR) YYFILL(1);
		yych = *YYCURSOR;
yy12:
		if(yybm[0+yych] & 0x20) {
			goto yy11;
		}
		goto yy6;
yy13:
		++YYCURSOR;
		if(YYLIMIT == YYCURSOR) YYFILL(1);
		yych = *YYCURSOR;
yy14:
		if(yybm[0+yych] & 0x40) {
			goto yy13;
		}
		goto yy3;
yy15:
		yych = *++YYCURSOR;
		if(yych != '2') goto yy14;
		yych = *++YYCURSOR;
		if(yych != 'c') goto yy14;
		yyaccept = 0;
		yych = *(YYMARKER = ++YYCURSOR);
		if(yych != ':') goto yy14;
		yych = *++YYCURSOR;
		if(yych <= '^') {
			if(yych <= '@') goto yy19;
			if(yych <= 'Z') goto yy20;
		} else {
			if(yych == '`') goto yy19;
			if(yych <= 'z') goto yy20;
		}
yy19:
		YYCURSOR = YYMARKER;
		switch(yyaccept){
		case 0:	goto yy3;
		}
yy20:
		++YYCURSOR;
		if(YYLIMIT == YYCURSOR) YYFILL(1);
		yych = *YYCURSOR;
		if(yybm[0+yych] & 0x80) {
			goto yy20;
		}
#line 11 "input11.b.re"
		{ return 0; }
#line 146 "<stdout>"
	}
}
#line 17 "input11.b.re"

