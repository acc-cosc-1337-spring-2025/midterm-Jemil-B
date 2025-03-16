#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question3.h"

TEST_CASE("Verify Test Configuration", "verification") {
    // Test Case 1: 00001010 -> 10
    SECTION("Test Case 1: 00001010") {
        REQUIRE(binary_to_decimal("00001010") == 10);
    }

    // Test Case 2: 10101010 -> 170
    SECTION("Test Case 2: 10101010") {
        REQUIRE(binary_to_decimal("10101010") == 170);
    }

    // Test Case 3: 11111111 -> 255
    SECTION("Test Case 3: 11111111") {
        REQUIRE(binary_to_decimal("11111111") == 255);
}
	}

