#include "question1.h"

bool test_config()
{
    return true;
}
// Function to get hours from seconds_since_1970
int get_hours(int seconds_since_1970) {
    return (seconds_since_1970 / 3600) % 24; // 3600 seconds in an hour, modulo 24 for 24-hour format
}

// Function to get minutes from seconds_since_1970
int get_minutes(int seconds_since_1970) {
    return (seconds_since_1970 / 60) % 60; // 60 seconds in a minute, modulo 60 for minutes
}

// Function to get seconds from seconds_since_1970
int get_seconds(int seconds_since_1970) {
    return seconds_since_1970 % 60; // Modulo 60 for seconds
}