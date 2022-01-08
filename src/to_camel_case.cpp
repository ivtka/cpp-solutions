#include "to_camel_case.h"

#include <regex>

std::string to_camel_case(std::string text) {
  if (text.empty()) return text;
  for (auto it = text.begin(); it != text.end(); it++) {
    if (*it == '_' || *it == '-') {
      char &c = *(it + 1);
      c = toupper(c);
      text.erase(it);
    }
  }
  return text;
}