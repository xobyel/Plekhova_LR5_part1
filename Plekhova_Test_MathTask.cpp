#include "CUTE/cute.h"
#include "CUTE/cute_runner.h"
#include "CUTE/cute_ide_listener.h"
#include "Plekhova_MathTask.h"

// Базовые тест-кейсы
void test_normal_case() {
    ASSERT_EQUAL(15, CalcRectangleArea(3, 5));
}

void test_zero_width() {
    ASSERT_EQUAL(0, CalcRectangleArea(0, 10));
}

void test_zero_height() {
    ASSERT_EQUAL(0, CalcRectangleArea(7, 0));
}

void test_negative_values() {
    ASSERT_EQUAL(0, CalcRectangleArea(-5, 4));
}

int main() {
    cute::suite s;
    s.push_back(CUTE(test_normal_case));
    s.push_back(CUTE(test_zero_width));
    s.push_back(CUTE(test_zero_height));
    s.push_back(CUTE(test_negative_values));
    
    cute::ide_listener<> listener;
    cute::makeRunner(listener)(s, "Rectangle Area Tests");
    return 0;
}