#include "scramble.h"

#include <array>

bool scramble(const std::string &s1, const std::string &s2) {
  int matches = s2.length();
  std::array<int, 256> chars{0};
  for (char alfa : s2) {
    chars[alfa]++;
  }
  for (char alfa : s1) {
    if (chars[alfa]-- > 0) {
      if (!--matches) {
        return true;
      }
    }
  }

  return false;
}
