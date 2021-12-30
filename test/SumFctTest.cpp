#include <boost/ut.hpp>
#include <SumFct.h>

auto main() -> int {
  using namespace boost::ut;

  "Should return 80"_test = [] {
    expect(80_ull == SumFct::perimeter(5));
  };

  "Should return 216"_test = [] {
    expect(80_ull == SumFct::perimeter(7));
  };

  "Should return 114624"_test = [] {
    expect(80_ull == SumFct::perimeter(20));
  };

  "Should return 14098308"_test = [] {
    expect(80_ull == SumFct::perimeter(30));
  };
}