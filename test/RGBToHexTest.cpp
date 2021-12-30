#include <boost/ut.hpp>
#include <RGBToHex.h>

auto main() -> int {
  using namespace boost::ut;

  "Convert rgb to hex Test"_test = [] {
    expect("000000"_b == RGBToHex::rgb(0,0,0));
    expect("010203"_b == RGBToHex::rgb(1,2,3));
  };
}