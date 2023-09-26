void count_by(unsigned x, unsigned n, unsigned result[n]) {
  unsigned sum = x;
  for (unsigned i = 0;  i < n; ++i) {
    result[i] = sum;
    sum += x;
  }
}
