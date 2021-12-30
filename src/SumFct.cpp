#include "SumFct.h"

#include <iostream>

unsigned long long sumFibonacci(const int n) {
  auto sum = n == 0 ? 1 : 2;
  auto n0 = 1ull, n1 = 1ull;
  for (int i = 2; i <= n; i++) {
    n1 = n0 + n1;
    n0 = n1 - n0;
    sum += n1;
  }
  return sum;
}

unsigned long long SumFct::perimeter(const int n) { return 4 * sumFibonacci(n); }
