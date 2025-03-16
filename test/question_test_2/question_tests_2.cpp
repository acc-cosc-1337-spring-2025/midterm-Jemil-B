#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question2.h"

// Test case for test_config function
TEST_CASE("Test test_config function", "[config]") {
    REQUIRE(test_config() == true); // Assertion: test_config should return true
}

// Test cases for modify_values function
TEST_CASE("Test modify_values function", "[value_reference]") {
    int value = 5;
    int reference = 5;

    // Call the function
    modify_values(value, reference);

    // Test value parameter (should remain unchanged)
    REQUIRE(value == 5); // Assertion 1: Value parameter is unchanged

    // Test reference parameter (should be modified)
    REQUIRE(reference == 15); 
}