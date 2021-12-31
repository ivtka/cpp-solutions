#include <boost/ut.hpp>
#include <countBits.h>

auto main() -> int {
  using namespace boost::ut;

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
}