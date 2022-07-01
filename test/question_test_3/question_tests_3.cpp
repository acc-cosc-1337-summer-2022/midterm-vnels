#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("test")
{
	REQUIRE(test_config() == true);
}

TEST_CASE("Test get_cookie_ingredients")
{
	std::vector<double> test1 = {1.5, 1, 2.75};
	std::vector<double> test2 = {3, 2, 5.5};
	std::vector<double> test3 = {0.75, 0.5, 1.375};

	REQUIRE(get_cookie_ingredients(48) == test1);
	REQUIRE(get_cookie_ingredients(96) == test2);
	REQUIRE(get_cookie_ingredients(24) == test3);

}
