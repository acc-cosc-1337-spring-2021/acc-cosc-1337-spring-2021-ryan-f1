#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "if.h"
#include "if_else.h"
#include "switch.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test is even function", "returns true if num even")
{
	REQUIRE(is_even(4) == true);
	REQUIRE(is_even(5) == false);
}
TEST_CASE("test get generation", "enter yoear return generation string")
{
	REQUIRE(get_generation(1997) == "Centenial");
	REQUIRE(get_generation(1990) == "Millenial");
	REQUIRE(get_generation(1975) == "Generation X");
	REQUIRE(get_generation(1950) == "Baby boomer");
	REQUIRE(get_generation(1930) == "Silent Generation");
}
TEST_CASE("test menu", "enter menu options")
{
	REQUIRE(menu(1) == "Option 1");
	REQUIRE(menu(2) == "Option 2");
	REQUIRE(menu(3) == "Option 3");
	REQUIRE(menu(4) == "Option 4");
	REQUIRE(menu(5) == "Invalid Option");
}

TEST_CASE("verify is in range function", "must be 1 - 10")
{
	REQUIRE(is_in_range_1_to_10(2) == true);
	REQUIRE(is_in_range_1_to_10(0) == false);
}