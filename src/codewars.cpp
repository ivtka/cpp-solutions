#include "codewars.h"

#include <algorithm>
#include <bit>
#include <cmath>
#include <numeric>
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

auto number(const std::vector<std::pair<int, int>> &busStops) -> unsigned int {
  return std::accumulate(busStops.begin(), busStops.end(), 0,
                         [](unsigned int sum, auto stop) {
                           return sum + stop.first - stop.second;
                         });
}

auto DoubleLinear::dblLinear(int n) -> int {
  int x = 0, y = 0;
  std::vector<int> lst = {1};
  while (lst.size() <= n) {
    int a = 2 * lst[x] + 1;
    int b = 3 * lst[y] + 1;

    if (a > b) {
      lst.push_back(b);
      y += 1;
    } else if (a < b) {
      lst.push_back(a);
      x += 1;
    } else {
      lst.push_back(a);
      x += 1;
      y += 1;
    }
  }

  return lst[n];
}

auto last_digit(std::list<int> array) -> int {
  int64_t p = 1;
  auto it = array.rbegin();
  while (it != array.rend()) {
    int a = p >= 4 ? 4 + (p % 4) : p;
    int b = *it >= 20 ? 20 + (*it % 20) : *it;
    p = pow(b, a);
    it++;
  }
  return p % 10;
}

auto digitize(const int &n) -> std::vector<int> {
  auto digits = std::to_string(n);
  std::vector<int> res(digits.length());
  std::ranges::transform(digits, std::back_inserter(res),
                         [](const auto &c) { return c - '0'; });
  return res;
}

static auto hotpo_impl(unsigned int n, unsigned int &total) {
  if (n == 1 || n == 0) return;
  if (n % 2 == 0) n = n / 2;
  else n = 3 * n + 1;
  total++;
  hotpo_impl(n, total);
}

auto hotpo(unsigned int n) -> unsigned int
{
  unsigned int total = 0;
  hotpo_impl(n, total);
  return total;
}