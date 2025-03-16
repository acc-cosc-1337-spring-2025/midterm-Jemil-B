#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question4.h"

TEST_CASE("Verify Test Configuration", "verification") 
{SECTION("Test Case 1: 15, 25") {
	REQUIRE(find_gcd(15, 25) == 5);
}

// Test Case 2: 16, 32 -> 16
SECTION("Test Case 2: 16, 32") {
	REQUIRE(find_gcd(16, 32) == 16);
}

// Test Case 3: 159, 309 -> 3
SECTION("Test Case 3: 159, 309") {
	REQUIRE(find_gcd(159, 309) == 3);
}
	REQUIRE(true == true);
}

