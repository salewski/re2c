/* Generated by re2c */
#line 1 "scanner.re"
/* Id: scanner.re,v 1.37 2006/02/25 12:41:41 helly Exp */
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <sstream>
#include "scanner.h"
#include "parser.h"
#include "y.tab.h"
#include "globals.h"
#include "dfa.h"

extern YYSTYPE yylval;

#ifndef MAX
#define MAX(a,b) (((a)>(b))?(a):(b))
#endif

#define	BSIZE	8192

#define	YYCTYPE		char
#define	YYCURSOR	cursor
#define	YYLIMIT		lim
#define	YYMARKER	ptr
#define	YYFILL(n)	{cursor = fill(cursor);}

#define	RETURN(i)	{cur = cursor; return i;}

namespace re2c
{

Scanner::Scanner(std::istream& i, std::ostream& o)
	: in(i)
	, out(o)
	, bot(NULL), tok(NULL), ptr(NULL), cur(NULL), pos(NULL), lim(NULL)
	, top(NULL), eof(NULL), tchar(0), tline(0), cline(1), iscfg(0)
{
    ;
}

char *Scanner::fill(char *cursor)
{
	if(!eof)
	{
		uint cnt = tok - bot;
		if(cnt)
		{
			memcpy(bot, tok, lim - tok);
			tok = bot;
			ptr -= cnt;
			cursor -= cnt;
			pos -= cnt;
			lim -= cnt;
		}
		if((top - lim) < BSIZE)
		{
			char *buf = new char[(lim - bot) + BSIZE];
			memcpy(buf, tok, lim - tok);
			tok = buf;
			ptr = &buf[ptr - bot];
			cursor = &buf[cursor - bot];
			pos = &buf[pos - bot];
			lim = &buf[lim - bot];
			top = &lim[BSIZE];
			delete [] bot;
			bot = buf;
		}
		in.read(lim, BSIZE);
		if ((cnt = in.gcount()) != BSIZE )
		{
			eof = &lim[cnt]; *eof++ = '\0';
		}
		lim += cnt;
	}
	return cursor;
}

#line 95 "scanner.re"


int Scanner::echo()
{
    char *cursor = cur;
    bool ignore_eoc = false;

    if (eof && cursor == eof) // Catch EOF
	{
    	return 0;
	}

    tok = cursor;
echo:

#line 96 "<stdout>"
{
	YYCTYPE yych;

	if ((YYLIMIT - YYCURSOR) < 11) YYFILL(11);
	yych = *YYCURSOR;
	switch (yych) {
	case 0x00:	goto yy7;
	case '\n':	goto yy5;
	case '*':	goto yy4;
	case '/':	goto yy2;
	default:	goto yy9;
	}
yy2:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '*':	goto yy12;
	default:	goto yy3;
	}
yy3:
#line 141 "scanner.re"
	{
					goto echo;
				}
#line 120 "<stdout>"
yy4:
	yych = *++YYCURSOR;
	switch (yych) {
	case '/':	goto yy10;
	default:	goto yy3;
	}
yy5:
	++YYCURSOR;
#line 130 "scanner.re"
	{
					out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok));
					tok = pos = cursor; cline++;
				  	goto echo;
				}
#line 135 "<stdout>"
yy7:
	++YYCURSOR;
#line 135 "scanner.re"
	{
					out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok) - 1); // -1 so we don't write out the \0
					if(cursor == eof) {
						RETURN(0);
					}
				}
#line 145 "<stdout>"
yy9:
	yych = *++YYCURSOR;
	goto yy3;
yy10:
	++YYCURSOR;
#line 121 "scanner.re"
	{
					if (ignore_eoc) {
						ignore_eoc = false;
					} else {
						out.write((const char*)(tok), (const char*)(cursor) - (const char*)(tok));
					}
					tok = pos = cursor;
					goto echo;
				}
#line 161 "<stdout>"
yy12:
	yych = *++YYCURSOR;
	switch (yych) {
	case '!':	goto yy14;
	default:	goto yy13;
	}
yy13:
	YYCURSOR = YYMARKER;
	goto yy3;
yy14:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'm':	goto yy15;
	case 'r':	goto yy16;
	default:	goto yy13;
	}
yy15:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'a':	goto yy21;
	default:	goto yy13;
	}
yy16:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy17;
	default:	goto yy13;
	}
yy17:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy18;
	default:	goto yy13;
	}
yy18:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy19;
	default:	goto yy13;
	}
yy19:
	++YYCURSOR;
#line 110 "scanner.re"
	{ 
					out.write((const char*)(tok), (const char*)(&cursor[-7]) - (const char*)(tok));
					tok = cursor;
					RETURN(1);
				}
#line 210 "<stdout>"
yy21:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'x':	goto yy22;
	default:	goto yy13;
	}
yy22:
	yych = *++YYCURSOR;
	switch (yych) {
	case ':':	goto yy23;
	default:	goto yy13;
	}
yy23:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'r':	goto yy24;
	default:	goto yy13;
	}
yy24:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'e':	goto yy25;
	default:	goto yy13;
	}
yy25:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy26;
	default:	goto yy13;
	}
yy26:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy27;
	default:	goto yy13;
	}
yy27:
	++YYCURSOR;
#line 115 "scanner.re"
	{
					out << "#define YYMAXFILL " << maxFill << std::endl;
					tok = pos = cursor;
					ignore_eoc = true;
					goto echo;
				}
#line 256 "<stdout>"
}
#line 144 "scanner.re"

}


int Scanner::scan()
{
    char *cursor = cur;
    uint depth;

scan:
    tchar = cursor - pos;
    tline = cline;
    tok = cursor;
	if (iscfg == 1)
	{
		goto config;
	}
	else if (iscfg == 2)
	{
   		goto value;
    }

#line 281 "<stdout>"
{
	YYCTYPE yych;
	unsigned int yyaccept = 0;
	if ((YYLIMIT - YYCURSOR) < 5) YYFILL(5);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case ' ':	goto yy50;
	case '\n':	goto yy52;
	case '\r':	goto yy54;
	case '"':	goto yy37;
	case '\'':	goto yy39;
	case '(':
	case ')':
	case ';':
	case '=':
	case '\\':
	case '|':	goto yy43;
	case '*':	goto yy35;
	case '+':
	case '?':	goto yy44;
	case '.':	goto yy48;
	case '/':	goto yy33;
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy47;
	case '[':	goto yy41;
	case 'r':	goto yy45;
	case '{':	goto yy31;
	default:	goto yy56;
	}
yy31:
	yyaccept = 0;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ',':	goto yy97;
	case '0':	goto yy94;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy95;
	default:	goto yy32;
	}
yy32:
#line 166 "scanner.re"
	{ depth = 1;
				  goto code;
				}
#line 383 "<stdout>"
yy33:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '*':	goto yy92;
	default:	goto yy34;
	}
yy34:
#line 196 "scanner.re"
	{ RETURN(*tok); }
#line 393 "<stdout>"
yy35:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '/':	goto yy90;
	default:	goto yy36;
	}
yy36:
#line 198 "scanner.re"
	{ yylval.op = *tok;
				  RETURN(CLOSE); }
#line 404 "<stdout>"
yy37:
	yyaccept = 1;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy38;
	default:	goto yy86;
	}
yy38:
#line 183 "scanner.re"
	{ fatal("unterminated string constant (missing \")"); }
#line 415 "<stdout>"
yy39:
	yyaccept = 2;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy40;
	default:	goto yy81;
	}
yy40:
#line 184 "scanner.re"
	{ fatal("unterminated string constant (missing ')"); }
#line 426 "<stdout>"
yy41:
	yyaccept = 3;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy42;
	case '^':	goto yy72;
	default:	goto yy71;
	}
yy42:
#line 194 "scanner.re"
	{ fatal("unterminated range (missing ])"); }
#line 438 "<stdout>"
yy43:
	yych = *++YYCURSOR;
	goto yy34;
yy44:
	yych = *++YYCURSOR;
	goto yy36;
yy45:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case 'e':	goto yy62;
	default:	goto yy61;
	}
yy46:
#line 225 "scanner.re"
	{ cur = cursor;
				  yylval.symbol = Symbol::find(token());
				  return ID; }
#line 456 "<stdout>"
yy47:
	yych = *++YYCURSOR;
	goto yy61;
yy48:
	++YYCURSOR;
#line 229 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = mkDot();
				  return RANGE;
				}
#line 467 "<stdout>"
yy50:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy59;
yy51:
#line 234 "scanner.re"
	{ goto scan; }
#line 475 "<stdout>"
yy52:
	++YYCURSOR;
yy53:
#line 236 "scanner.re"
	{ if(cursor == eof) RETURN(0);
				  pos = cursor; cline++;
				  goto scan;
	    			}
#line 484 "<stdout>"
yy54:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\n':	goto yy57;
	default:	goto yy55;
	}
yy55:
#line 241 "scanner.re"
	{ std::ostringstream msg;
				  msg << "unexpected character: ";
				  prtChOrHex(msg, *tok);
				  fatal(msg.str().c_str());
				  goto scan;
				}
#line 499 "<stdout>"
yy56:
	yych = *++YYCURSOR;
	goto yy55;
yy57:
	yych = *++YYCURSOR;
	goto yy53;
yy58:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy59:
	switch (yych) {
	case '\t':
	case ' ':	goto yy58;
	default:	goto yy51;
	}
yy60:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy61:
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy60;
	default:	goto yy46;
	}
yy62:
	yych = *++YYCURSOR;
	switch (yych) {
	case '2':	goto yy63;
	default:	goto yy61;
	}
yy63:
	yych = *++YYCURSOR;
	switch (yych) {
	case 'c':	goto yy64;
	default:	goto yy61;
	}
yy64:
	yyaccept = 4;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case ':':	goto yy65;
	default:	goto yy61;
	}
yy65:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy67;
	default:	goto yy66;
	}
yy66:
	YYCURSOR = YYMARKER;
	switch (yyaccept) {
	case 0: 	goto yy32;
	case 1: 	goto yy38;
	case 2: 	goto yy40;
	case 3: 	goto yy42;
	case 4: 	goto yy46;
	case 5: 	goto yy69;
	case 6: 	goto yy98;
	}
yy67:
	yyaccept = 5;
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':
	case 'A':
	case 'B':
	case 'C':
	case 'D':
	case 'E':
	case 'F':
	case 'G':
	case 'H':
	case 'I':
	case 'J':
	case 'K':
	case 'L':
	case 'M':
	case 'N':
	case 'O':
	case 'P':
	case 'Q':
	case 'R':
	case 'S':
	case 'T':
	case 'U':
	case 'V':
	case 'W':
	case 'X':
	case 'Y':
	case 'Z':
	case '_':
	case 'a':
	case 'b':
	case 'c':
	case 'd':
	case 'e':
	case 'f':
	case 'g':
	case 'h':
	case 'i':
	case 'j':
	case 'k':
	case 'l':
	case 'm':
	case 'n':
	case 'o':
	case 'p':
	case 'q':
	case 'r':
	case 's':
	case 't':
	case 'u':
	case 'v':
	case 'w':
	case 'x':
	case 'y':
	case 'z':	goto yy67;
	case ':':	goto yy65;
	default:	goto yy69;
	}
yy69:
#line 218 "scanner.re"
	{ cur = cursor;
				  tok+= 5; /* skip "re2c:" */
				  iscfg = 1;
				  yylval.str = new Str(token());
				  return CONFIG;
				}
#line 755 "<stdout>"
yy70:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy71:
	switch (yych) {
	case '\n':	goto yy66;
	case '\\':	goto yy74;
	case ']':	goto yy75;
	default:	goto yy70;
	}
yy72:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy66;
	case '\\':	goto yy77;
	case ']':	goto yy78;
	default:	goto yy72;
	}
yy74:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy66;
	default:	goto yy70;
	}
yy75:
	++YYCURSOR;
#line 190 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = ranToRE(token());
				  return RANGE; }
#line 791 "<stdout>"
yy77:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy66;
	default:	goto yy72;
	}
yy78:
	++YYCURSOR;
#line 186 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = invToRE(token());
				  return RANGE; }
#line 806 "<stdout>"
yy80:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy81:
	switch (yych) {
	case '\n':	goto yy66;
	case '\'':	goto yy83;
	case '\\':	goto yy82;
	default:	goto yy80;
	}
yy82:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy66;
	default:	goto yy80;
	}
yy83:
	++YYCURSOR;
#line 179 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = strToCaseInsensitiveRE(token());
				  return STRING; }
#line 832 "<stdout>"
yy85:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy86:
	switch (yych) {
	case '\n':	goto yy66;
	case '"':	goto yy88;
	case '\\':	goto yy87;
	default:	goto yy85;
	}
yy87:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy66;
	default:	goto yy85;
	}
yy88:
	++YYCURSOR;
#line 175 "scanner.re"
	{ cur = cursor;
				  yylval.regexp = strToRE(token());
				  return STRING; }
#line 858 "<stdout>"
yy90:
	++YYCURSOR;
#line 172 "scanner.re"
	{ tok = cursor;
				  RETURN(0); }
#line 864 "<stdout>"
yy92:
	++YYCURSOR;
#line 169 "scanner.re"
	{ depth = 1;
				  goto comment; }
#line 870 "<stdout>"
yy94:
	yych = *++YYCURSOR;
	switch (yych) {
	case ',':	goto yy108;
	default:	goto yy96;
	}
yy95:
	++YYCURSOR;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
yy96:
	switch (yych) {
	case ',':	goto yy101;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy95;
	case '}':	goto yy99;
	default:	goto yy66;
	}
yy97:
	++YYCURSOR;
yy98:
#line 216 "scanner.re"
	{ fatal("illegal closure form, use '{n}', '{n,}', '{n,m}' where n and m are numbers"); }
#line 902 "<stdout>"
yy99:
	++YYCURSOR;
#line 204 "scanner.re"
	{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = atoi((char *)tok+1);
				  RETURN(CLOSESIZE); }
#line 909 "<stdout>"
yy101:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy104;
	case '}':	goto yy102;
	default:	goto yy98;
	}
yy102:
	++YYCURSOR;
#line 212 "scanner.re"
	{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = -1;
				  RETURN(CLOSESIZE); }
#line 933 "<stdout>"
yy104:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy104;
	case '}':	goto yy106;
	default:	goto yy66;
	}
yy106:
	++YYCURSOR;
#line 208 "scanner.re"
	{ yylval.extop.minsize = atoi((char *)tok+1);
				  yylval.extop.maxsize = MAX(yylval.extop.minsize,atoi(strchr((char *)tok, ',')+1));
				  RETURN(CLOSESIZE); }
#line 958 "<stdout>"
yy108:
	yyaccept = 6;
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy104;
	case '}':	goto yy109;
	default:	goto yy98;
	}
yy109:
	++YYCURSOR;
#line 201 "scanner.re"
	{ yylval.op = '*';
				  RETURN(CLOSE); }
#line 981 "<stdout>"
}
#line 247 "scanner.re"


code:

#line 988 "<stdout>"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy117;
	case '"':	goto yy121;
	case '\'':	goto yy122;
	case '{':	goto yy115;
	case '}':	goto yy113;
	default:	goto yy119;
	}
yy113:
	++YYCURSOR;
#line 251 "scanner.re"
	{ if(--depth == 0){
					cur = cursor;
					yylval.token = new Token(token(), tline);
					return CODE;
				  }
				  goto code; }
#line 1010 "<stdout>"
yy115:
	++YYCURSOR;
#line 257 "scanner.re"
	{ ++depth;
				  goto code; }
#line 1016 "<stdout>"
yy117:
	++YYCURSOR;
#line 259 "scanner.re"
	{ if(cursor == eof) fatal("missing '}'");
				  pos = cursor; cline++;
				  goto code;
				}
#line 1024 "<stdout>"
yy119:
	++YYCURSOR;
yy120:
#line 263 "scanner.re"
	{ goto code; }
#line 1030 "<stdout>"
yy121:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy120;
	default:	goto yy128;
	}
yy122:
	yych = *(YYMARKER = ++YYCURSOR);
	switch (yych) {
	case '\n':	goto yy120;
	default:	goto yy124;
	}
yy123:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy124:
	switch (yych) {
	case '\n':	goto yy125;
	case '\'':	goto yy119;
	case '\\':	goto yy126;
	default:	goto yy123;
	}
yy125:
	YYCURSOR = YYMARKER;
	goto yy120;
yy126:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy125;
	default:	goto yy123;
	}
yy127:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy128:
	switch (yych) {
	case '\n':	goto yy125;
	case '"':	goto yy119;
	case '\\':	goto yy129;
	default:	goto yy127;
	}
yy129:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy125;
	default:	goto yy127;
	}
}
#line 264 "scanner.re"


comment:

#line 1090 "<stdout>"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy135;
	case '*':	goto yy132;
	case '/':	goto yy134;
	default:	goto yy137;
	}
yy132:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '/':	goto yy140;
	default:	goto yy133;
	}
yy133:
#line 279 "scanner.re"
	{ if(cursor == eof) RETURN(0);
				  goto comment; }
#line 1111 "<stdout>"
yy134:
	yych = *++YYCURSOR;
	switch (yych) {
	case '*':	goto yy138;
	default:	goto yy133;
	}
yy135:
	++YYCURSOR;
#line 275 "scanner.re"
	{ if(cursor == eof) RETURN(0);
				  tok = pos = cursor; cline++;
				  goto comment;
				}
#line 1125 "<stdout>"
yy137:
	yych = *++YYCURSOR;
	goto yy133;
yy138:
	++YYCURSOR;
#line 272 "scanner.re"
	{ ++depth;
				  fatal("ambiguous /* found");
				  goto comment; }
#line 1135 "<stdout>"
yy140:
	++YYCURSOR;
#line 268 "scanner.re"
	{ if(--depth == 0)
					goto scan;
				    else
					goto comment; }
#line 1143 "<stdout>"
}
#line 281 "scanner.re"


config:

#line 1150 "<stdout>"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case ' ':	goto yy144;
	case '=':	goto yy146;
	default:	goto yy148;
	}
yy144:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy153;
yy145:
#line 285 "scanner.re"
	{ goto config; }
#line 1168 "<stdout>"
yy146:
	++YYCURSOR;
	yych = *YYCURSOR;
	goto yy151;
yy147:
#line 286 "scanner.re"
	{ iscfg = 2;
				  cur = cursor;
				  RETURN('='); 
				}
#line 1179 "<stdout>"
yy148:
	++YYCURSOR;
#line 290 "scanner.re"
	{ fatal("missing '='"); }
#line 1184 "<stdout>"
yy150:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy151:
	switch (yych) {
	case '\t':
	case ' ':	goto yy150;
	default:	goto yy147;
	}
yy152:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy153:
	switch (yych) {
	case '\t':
	case ' ':	goto yy152;
	default:	goto yy145;
	}
}
#line 291 "scanner.re"


value:

#line 1211 "<stdout>"
{
	YYCTYPE yych;
	if ((YYLIMIT - YYCURSOR) < 2) YYFILL(2);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case ';':	goto yy156;
	case '"':	goto yy164;
	case '\'':	goto yy166;
	case '-':	goto yy159;
	case '0':	goto yy157;
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy160;
	default:	goto yy162;
	}
yy156:
#line 300 "scanner.re"
	{ cur = cursor;
				  yylval.str = new Str(token());
				  iscfg = 0;
				  return VALUE;
				}
#line 1244 "<stdout>"
yy157:
	++YYCURSOR;
	switch ((yych = *YYCURSOR)) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case ';':	goto yy158;
	default:	goto yy162;
	}
yy158:
#line 295 "scanner.re"
	{ cur = cursor;
				  yylval.number = atoi(token().to_string().c_str());
				  iscfg = 0;
				  return NUMBER;
				}
#line 1262 "<stdout>"
yy159:
	yych = *++YYCURSOR;
	switch (yych) {
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy160;
	default:	goto yy163;
	}
yy160:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case ';':	goto yy158;
	case '0':
	case '1':
	case '2':
	case '3':
	case '4':
	case '5':
	case '6':
	case '7':
	case '8':
	case '9':	goto yy160;
	default:	goto yy162;
	}
yy162:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
yy163:
	switch (yych) {
	case '\t':
	case '\n':
	case '\r':
	case ' ':
	case ';':	goto yy156;
	default:	goto yy162;
	}
yy164:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':
	case ';':	goto yy174;
	case '\n':	goto yy156;
	case '"':	goto yy162;
	case '\\':	goto yy176;
	default:	goto yy164;
	}
yy166:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':
	case ';':	goto yy168;
	case '\n':	goto yy156;
	case '\'':	goto yy162;
	case '\\':	goto yy171;
	default:	goto yy166;
	}
yy168:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy170;
	case '\'':	goto yy172;
	case '\\':	goto yy173;
	default:	goto yy168;
	}
yy170:
	YYCURSOR = YYMARKER;
	goto yy156;
yy171:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':
	case ';':	goto yy168;
	case '\n':	goto yy156;
	default:	goto yy166;
	}
yy172:
	yych = *++YYCURSOR;
	goto yy156;
yy173:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy170;
	default:	goto yy168;
	}
yy174:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy170;
	case '"':	goto yy172;
	case '\\':	goto yy177;
	default:	goto yy174;
	}
yy176:
	YYMARKER = ++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\t':
	case '\r':
	case ' ':
	case ';':	goto yy174;
	case '\n':	goto yy156;
	default:	goto yy164;
	}
yy177:
	++YYCURSOR;
	if (YYLIMIT == YYCURSOR) YYFILL(1);
	yych = *YYCURSOR;
	switch (yych) {
	case '\n':	goto yy170;
	default:	goto yy174;
	}
}
#line 305 "scanner.re"

}

void Scanner::fatal(uint ofs, const char *msg) const
{
	out.flush();
	std::cerr << "re2c: error: "
		<< "line " << tline << ", column " << (tchar + ofs + 1) << ": "
		<< msg << std::endl;
   	exit(1);
}

} // end namespace re2c

