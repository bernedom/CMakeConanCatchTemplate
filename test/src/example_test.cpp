#include <catch2/catch_test_macros.hpp>

#include <example.h>

TEST_CASE("Example test", "[example]") {
    REQUIRE(1 == 1);
    REQUIRE(true);
}

TEST_CASE("Test is_even", "[example]") {
  REQUIRE(is_even(2));
  REQUIRE_FALSE(is_even(3));
}
