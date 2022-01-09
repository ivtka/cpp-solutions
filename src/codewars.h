#pragma once

#include <string>

auto countBits(unsigned long long n) -> unsigned int;

class RGBToHex {
public:
  static auto rgb(int r, int g, int b) -> std::string;

  static auto getDefaultOrPassed(int value) -> int;
};

auto scramble(std::string s1, std::string s2) -> bool;

class SumFct {
public:
  static auto perimeter(int n) -> unsigned long long;
};

auto to_camel_case(std::string text) -> std::string;