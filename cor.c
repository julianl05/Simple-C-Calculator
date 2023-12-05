/* cor: About as simple as it gets. A C function `cor` that returns
   a signed 8 byte integer that is the bitwise OR of two 8 byte
   signed integers x and y */
long long
cor(long long x, long long y) {
  // wonder what should go here? Might want to look at cand.c
  // HINT: the bitwise or operator in C is '|'
  return x | y;
}
