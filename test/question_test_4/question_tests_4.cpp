#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_fahrenheit function")
{
	REQUIRE(get_fahrenheit(37.0)*100 == 98.6*100);
	REQUIRE(get_fahrenheit(25.0) == 77);
	REQUIRE(get_fahrenheit(0.0) == 32);
}
