#include "question2.h"

void modify_values(int value_param, int& reference_param) {
    value_param += 10;       // Modifies the local copy (value parameter)
    reference_param += 10;   // Modifies the original variable (reference parameter)
}
bool test_config()
{
    return true;
}