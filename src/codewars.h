#pragma once

#include <list>
#include <string>
#include <utility>
#include <vector>

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

auto number(const std::vector<std::pair<int, int>> &busStops) -> unsigned int;

class DoubleLinear {
public:
  static auto dblLinear(int n) -> int;
};

const std::string multiple_of_3_regex = "(1(01*0)*1|0)*";

auto last_digit(std::list<int> array) -> int;