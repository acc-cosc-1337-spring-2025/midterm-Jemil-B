#include <iostream>
#include "question1.h"

int main()
{// Prompt the user for seconds since 1970
    int seconds_since_1970;
    std::cout << "Enter seconds since 1970: ";
    std::cin >> seconds_since_1970;

    // Get hours, minutes, and seconds
    int hours = get_hours(seconds_since_1970);
    int minutes = get_minutes(seconds_since_1970);
    int seconds = get_seconds(seconds_since_1970);

    // Display the time
    std::cout << "Time: " << hours << ":" << minutes << ":" << seconds << "\n";

    return 0;
}