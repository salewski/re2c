// re2c:eof = 0;
// re2c:define:YYFILL = "fill(need);";
// re2c:define:YYFILL@len = need;
// re2c:yyfill:check = 0;
/*!re2c
  re2c:eof = 0;
  re2c:define:YYFILL = "fill(need);";
  re2c:define:YYFILL@len = need;
  re2c:yyfill:check = 0;
  $ { eof }
  [a] { a }
  *   { x }
*/
