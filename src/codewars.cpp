#include "codewars.h"

#include <algorithm>
#include <bit>
#include <ranges>

auto countBits(unsigned long long n) -> unsigned int {
  return std::popcount(n);
}

auto RGBToHex::getDefaultOrPassed(int value) -> int {
  return value < 0 ? 0 : value > 255 ? 255 : value;
}

auto RGBToHex::rgb(int r, int g, int b) -> std::string {
  char hex[8];
  std::snprintf(hex, sizeof hex, "%02X%02X%02X", getDefaultOrPassed(r),
                getDefaultOrPassed(g), getDefaultOrPassed(b));
  return std::string(hex);
  // c++20
  // return std::format("%02X%02X%02X", getDefaultOrPassed(r),
  // getDefaultOrPassed(g), getDefaultOrPassed(b));
}

auto scramble(std::string s1, std::string s2) -> bool {
  std::ranges::sort(s1);
  std::ranges::sort(s2);
  return std::ranges::includes(s1, s2);
}

static auto sumFibonacci(const int n) -> unsigned long long {
  auto sum = n == 0 ? 1 : 2;
  auto n0 = 1ull, n1 = 1ull;
  for (int i = 2; i <= n; i++) {
    n1 = n0 + n1;
    n0 = n1 - n0;
    sum += n1;
  }
  return sum;
}

auto SumFct::perimeter(int n) -> unsigned long long {
  return 4 * sumFibonacci(n);
}

auto to_camel_case(std::string text) -> std::string {
  for (int i = 0; i < text.size(); i++) {
    if (text[i] == '-' || text[i] == '_') {
      text.erase(i, 1);
      text[i] = std::toupper(text[i]);
    }
  }
  return text;
}