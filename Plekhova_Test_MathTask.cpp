#include "Plekhova_MathTask.h"
#include <iostream>

#define TEST_CASE(name) std::cout << "#starting " << name << std::endl
#define ASSERT_EQUAL(expected, actual) \
    if ((expected) != (actual)) { \
        std::cout << "#failure " << __func__ << " " << __FILE__ << ":" << __LINE__ << " " << #actual << ": expected: " << (expected) << " but was: " << (actual) << std::endl; \
        return 1; \
    } else { \
        std::cout << "#success " << __func__ << " OK" << std::endl; \
    }

int test_normal_case() {
    TEST_CASE("test_normal_case");
    ASSERT_EQUAL(15, CalcRectangleArea(3, 5));
    return 0;
}

int test_zero_width() {
    TEST_CASE("test_zero_width");
    ASSERT_EQUAL(0, CalcRectangleArea(0, 10));
    return 0;
}

int test_zero_height() {
    TEST_CASE("test_zero_height");
    ASSERT_EQUAL(0, CalcRectangleArea(7, 0));
    return 0;
}

int test_negative_values() {
    TEST_CASE("test_negative_values");
    ASSERT_EQUAL(0, CalcRectangleArea(-5, 4));  // Теперь будет проходить
    return 0;
}

int main() {
    std::cout << "#beginning Rectangle Area Tests " << 4 << std::endl;
    
    int result = 0;
    result |= test_normal_case();
    result |= test_zero_width();
    result |= test_zero_height();
    result |= test_negative_values();
    
    return result;
}