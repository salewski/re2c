/* Generated by re2c */
#line 1 "input_custom_istringstream.--input(custom).re"
#include <sstream>

bool lex (std::istringstream & is, const std::streampos limit)
{
    std::streampos marker;
    std::streampos ctxmarker;
#   define YYCTYPE        char
#   define YYPEEK()       is.peek ()
#   define YYSKIP()       is.ignore ()
#   define YYBACKUP()     marker = is.tellg ()
#   define YYBACKUPCTX()  ctxmarker = is.tellg ()
#   define YYRESTORE()    is.seekg (marker)
#   define YYRESTORECTX() is.seekg (ctxmarker)
#   define YYLESSTHAN(n)  limit - is.tellg () < n
#   define YYFILL(n)      {}
    
#line 20 "<stdout>"
{
	YYCTYPE yych;

	if (YYLESSTHAN (13)) YYFILL(13);
	yych = YYPEEK ();
	switch (yych) {
	case 'i':	goto yy4;
	default:	goto yy2;
	}
yy2:
	YYSKIP ();
yy3:
#line 18 "input_custom_istringstream.--input(custom).re"
	{ return false; }
#line 35 "<stdout>"
yy4:
	YYSKIP ();
	YYBACKUP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'n':	goto yy5;
	default:	goto yy3;
	}
yy5:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 't':	goto yy7;
	default:	goto yy6;
	}
yy6:
	YYRESTORE ();
	goto yy3;
yy7:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy8;
	default:	goto yy6;
	}
yy8:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'b':	goto yy9;
	default:	goto yy6;
	}
yy9:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'u':	goto yy10;
	default:	goto yy6;
	}
yy10:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'f':	goto yy11;
	default:	goto yy6;
	}
yy11:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'f':	goto yy12;
	default:	goto yy6;
	}
yy12:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'e':	goto yy13;
	default:	goto yy6;
	}
yy13:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case 'r':	goto yy14;
	default:	goto yy6;
	}
yy14:
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case ' ':	goto yy15;
	default:	goto yy6;
	}
yy15:
	YYBACKUPCTX ();
	YYSKIP ();
	yych = YYPEEK ();
	switch (yych) {
	case '[':	goto yy16;
	default:	goto yy6;
	}
yy16:
	YYSKIP ();
	yych = YYPEEK ();
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
	case '9':	goto yy17;
	default:	goto yy6;
	}
yy17:
	YYSKIP ();
	if (YYLESSTHAN (1)) YYFILL(1);
	yych = YYPEEK ();
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
	case '9':	goto yy17;
	case ']':	goto yy19;
	default:	goto yy6;
	}
yy19:
	YYSKIP ();
	YYRESTORECTX ();
	YYSKIP ();
#line 17 "input_custom_istringstream.--input(custom).re"
	{ return true; }
#line 158 "<stdout>"
}
#line 19 "input_custom_istringstream.--input(custom).re"

}

int main ()
{
    const char buffer [] = "int buffer [1024]";
    std::istringstream is (buffer);
    return !lex (is, sizeof (buffer));
}
