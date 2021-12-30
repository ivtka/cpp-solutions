#include "RGBToHex.h"

#include <cstdio>

int RGBToHex::getDefaultOrPassed(int value) {
  return value < 0 ? 0 : value > 255 ? 255 : value;
}

std::string RGBToHex::rgb(int r, int g, int b) {
  char hex[8];
  std::snprintf(hex, sizeof hex, "%02X%02X%02X", getDefaultOrPassed(r),
                getDefaultOrPassed(g), getDefaultOrPassed(b));
  return std::string(hex);
}
