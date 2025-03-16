#include "question4.h"
// Function to find the greatest common divisor (GCD) of two numbers
int find_gcd(int num1, int num2) {
    // Ensure num1 is always the larger number
    if (num2 > num1) {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }

    // Use the Euclidean algorithm to find GCD
    while (num2 != 0) {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }

    // If GCD is 1, return -1 (no common factors)
    return (num1 == 1) ? -1 : num1;
}