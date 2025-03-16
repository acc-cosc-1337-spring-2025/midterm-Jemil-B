#include "question3.h"
int binary_to_decimal(const std::string& binary) {
    int decimal = 0;
    int power = 1; // Represents 2^0, 2^1, 2^2, etc.

    for (int i = binary.length() - 1; i >= 0; --i) {
        if (binary[i] == '1') {
            decimal += power;
        }
        power *= 2; // Increase the power of 2 for the next bit
    }

    return decimal;
}



