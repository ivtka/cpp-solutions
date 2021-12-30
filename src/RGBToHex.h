#pragma once

#include <string>

class RGBToHex {
public:
  static std::string rgb(int r, int g, int b);

  static int getDefaultOrPassed(int value);
};
