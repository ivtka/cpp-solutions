#include <boost/ut.hpp>
#include <codewars.h>

auto main() -> int {
  using namespace boost::ut;

  "Get Default Or Passed"_test = [] {
    expect(0_i == RGBToHex::getDefaultOrPassed(-20));
    expect(255_i == RGBToHex::getDefaultOrPassed(256));
  };

  "Convert rgb to hex Test"_test = [] {
    expect("000000"_b == RGBToHex::rgb(0, 0, 0));
    expect("010203"_b == RGBToHex::rgb(1, 2, 3));
    expect(RGBToHex::rgb(255, 255, 255) == "FFFFFF"_b);
    expect(RGBToHex::rgb(254, 253, 252) == "FEFDFC"_b);
    expect(RGBToHex::rgb(-20, 275, 125) == "00FF7D"_b);
  };

  "Perimter"_test = [] {
    expect(80_ull == SumFct::perimeter(5));
    expect(216_ull == SumFct::perimeter(7));
    expect(114624_ull == SumFct::perimeter(20));
    expect(14098308_ull == SumFct::perimeter(30));
  };

  "Count Bits Test"_test = [] {
    expect(countBits(0) == 0_u);
    expect(countBits(4) == 1_u);
    expect(countBits(7) == 3_u);
    expect(countBits(9) == 2_u);
    expect(countBits(10) == 2_u);
    expect(countBits(26) == 3_u);
    expect(countBits(77231418) == 14_u);
    expect(countBits(12525589) == 11_u);
    expect(countBits(3811) == 8_u);
    expect(countBits(392902058) == 17_u);
  };

  "{Scramble] Basic Tests"_test = [] {
    expect(scramble("rkqodlw", "world") == true);
    expect(scramble("cedewaraaossoqqyt", "codewars") == true);
    expect(scramble("katas", "steak") == false);
    expect(scramble("scriptjavx", "javascript") == false);
    expect(scramble("scriptingjava", "javascript") == true);
    expect(scramble("scriptsjava", "javascript") == true);
    expect(scramble("javscripts", "javascript") == false);
    expect(scramble("aabbcamaomsccdd", "commas") == true);
    expect(scramble("commas", "commas") == true);
    expect(scramble("sammoc", "commas") == true);
  };

  "[To Camel Case] Basic Tests"_test = [] {
    expect(to_camel_case("") == ""_b);
    expect(to_camel_case("the_stealth_warrior") == "theStealthWarrior"_b);
    expect(to_camel_case("The-Stealth-Warrior") == "TheStealthWarrior"_b);
    expect(to_camel_case("A-B-C") == "ABC"_b);
  };

  {
    using V = std::pair<int, int>;
    using V2 = std::vector<V>;
    "Number of People in the Bus Test"_test = [] {
      expect(number(V2{V{10, 0}, V{3, 5}, V{5, 8}}) == 5_u);
      expect(number(V2{V{3, 0}, V{9, 1}, V{4, 10}, V{12, 2}, V{6, 1},
                       V{7, 10}}) == 17_u);
      expect(number(V2{V{3, 0}, V{9, 1}, V{4, 8}, V{12, 2}, V{6, 1},
                       V{7, 8}}) == 21_u);
      expect(number(V2{V{0, 0}}) == 0_u);
      expect(number(V2{V{10, 0}, V{13, 0}, V{17, 40}}) == 0_u);
    };
  }

  "Twice linear"_test = [] {
    expect(DoubleLinear::dblLinear(10) == 22_i);
    expect(DoubleLinear::dblLinear(20) == 57_i);
    expect(DoubleLinear::dblLinear(30) == 91_i);
    expect(DoubleLinear::dblLinear(50) == 175_i);
  };
}