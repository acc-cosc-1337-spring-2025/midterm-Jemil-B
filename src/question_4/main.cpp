#include <iostream>
#include "question4.h"

int main() {
    int num1, num2;
    char choice;

    do {
        // Prompt the user for two integers
        std::cout << "Enter two integers (1 to 200): ";
        std::cin >> num1 >> num2;

        // Validate the input
        if (num1 < 1 || num1 > 200 || num2 < 1 || num2 > 200) {
            std::cout << "Invalid input. Numbers must be in the range 1 to 200.\n";
            continue; // Skip the rest of the loop and prompt again
        }

        // Find the GCD
        int gcd = find_gcd(num1, num2);

        // Display the result
        if (gcd == -1) {
            std::cout << "No common factors (GCD is 1).\n";
        } else {
            std::cout << "GCD of " << num1 << " and " << num2 << " is: " << gcd << "\n";
        }

        // Ask the user if they want to continue
        std::cout << "Do you want to continue? (y/n): ";
        std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Exiting the program.\n";
    return 0;
}