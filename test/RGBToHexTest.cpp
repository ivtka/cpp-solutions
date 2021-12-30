#include <boost/ut.hpp>
#include <RGBToHex.h>

auto main() -> int {
  using namespace boost::ut;

  "Convert rgb to hex Test"_test = [] {
    expect("000000" == RGBToHex::rgb(0,0,0));
    expect("010203" == RGBToHex::rgb(1,2,3))
  };
}