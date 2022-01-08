#include "scramble.h"

#include <algorithm>
#include <ranges>

bool scramble(std::string s1, std::string s2) {
  std::ranges::sort(s1);
  std::ranges::sort(s2);
  return std::ranges::includes(s1, s2);
}
