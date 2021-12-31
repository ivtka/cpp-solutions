#include "countBits.h"

#include <bit>

unsigned int countBits(unsigned long long n) {
  return std::popcount(n);
}