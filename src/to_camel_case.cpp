#include "to_camel_case.h"

#include <regex>

std::string to_camel_case(std::string text) {
  for (int i = 0; i < text.size(); i++) {
    if (text[i] == '-' || text[i] == '_') {
      text.erase(i, 1);
      text[i] = toupper(text[i]);
    }
  }
  return text;
}