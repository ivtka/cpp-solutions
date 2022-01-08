#include <boost/ut.hpp>
#include <to_camel_case.h>

auto main() -> int {
  using namespace boost::ut;

  "Basic Tests"_test = [] {
    expect(to_camel_case("") == ""_b);
    expect(to_camel_case("the_stealth_warrior") == "theStealthWarrior"_b);
    expect(to_camel_case("The-Stealth-Warrior") == "TheStealthWarrior"_b);
    expect(to_camel_case("A-B-C") == "ABC"_b);
  };
}