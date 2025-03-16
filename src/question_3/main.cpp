#include <iostream>
#include <string>
#include "question3.h"

int main() {
    std::string binary;
    char choice;

    do {
        // Prompt the user for a binary string
        std::cout << "Enter an 8-character binary string (or type 'q' to quit): ";
        std::cin >> binary;

        // Validate the input
        if (binary == "q" || binary == "Q") {
            break; // Exit the loop if the user types 'q'
        }

        if (binary.length() != 8 || binary.find_first_not_of("01") != std::string::npos) {
            std::cout << "Invalid input. The string must be exactly 8 characters long and contain only 0s and 1s.\n";
            continue; // Skip the rest of the loop and prompt again
        }

        // Convert binary to decimal and display the result
        int decimal = binary_to_decimal(binary);
        std::cout << "Decimal value: " << decimal << "\n";

    } while (true);

    std::cout << "Exiting the program.\n";
    return 0;
}