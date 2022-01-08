#include <boost/ut.hpp>
#include <scramble.h>

auto main() -> int {
  using namespace boost::ut;

  "Basic Tests"_test = [] {
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
}