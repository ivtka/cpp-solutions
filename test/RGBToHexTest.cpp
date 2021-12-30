#include <RGBToHex.h>
#include <boost/ut.hpp>

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
}