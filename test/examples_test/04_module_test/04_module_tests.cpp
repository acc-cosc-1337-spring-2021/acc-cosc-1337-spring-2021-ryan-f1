#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test call by value parameter", "a copy of value is sent to function")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	REQUIRE(num1 == 5);
}

TEST_CASE("test call by reference parameter", "a different copy of value is sent to function")
{
	auto num1 = 5;
	auto num2 = 0;
	pass_by_val_and_ref(num1, num2);
	REQUIRE(num2 == 50);
}
