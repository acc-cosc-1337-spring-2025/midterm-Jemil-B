#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "question1.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
		
}

TEST_CASE("test")
{
	SECTION("Test Case 1: 1570846218 seconds") {
        int seconds_since_1970 = 1570846218;
        REQUIRE(get_hours(seconds_since_1970) == 2); 
        REQUIRE(get_minutes(seconds_since_1970) == 10); 
        REQUIRE(get_seconds(seconds_since_1970) == 18); 
    }

    // Test Case 2
    SECTION("Test Case 2: 1570875018 seconds") {
        int seconds_since_1970 = 1570875018;
        REQUIRE(get_hours(seconds_since_1970) == 10); 
        REQUIRE(get_minutes(seconds_since_1970) == 10); 
        REQUIRE(get_seconds(seconds_since_1970) == 18); 
    }
	REQUIRE(test_config() == true);
}
