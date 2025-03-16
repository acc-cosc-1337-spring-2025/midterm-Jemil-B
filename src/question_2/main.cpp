#include <iostream>
#include "question2.h"

int main() {
    int value = 5;
    int reference = 5;

    std::cout << "Before modify_values:\n";
    std::cout << "Value: " << value << "\n";
    std::cout << "Reference: " << reference << "\n";

    // Call the function
    modify_values(value, reference);

    std::cout << "\nAfter modify_values:\n";
    std::cout << "Value: " << value << "\n";
    std::cout << "Reference: " << reference << "\n";

    return 0;
}