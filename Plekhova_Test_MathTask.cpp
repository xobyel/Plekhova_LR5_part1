#include "Plekhova_MathTask.h"
#include "CUTE/cute/cute.h"
#include "CUTE/cute/cute_runner.h"
#include "CUTE/cute/ide_listener.h"

// Тест на пустые значения
void testUserInput_Empty() {
    std::string str = "";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест на нецифровые символы
void testUserInput_Letter() {
    std::string str = "a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест на цифро-буквенные значения
void testUserInput_DigitLetterValue() {
    std::string str = "5a";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

// Тест на отрицательные значения
void testUserInput_NegativeValue() {
    std::string str = "-5";
    bool expected = false;
    bool actual = UserInput(str);
    ASSERT_EQUAL(expected, actual);
}

int main() {
    cute::suite s;
    s.push_back(CUTE(testUserInput_Empty));
    s.push_back(CUTE(testUserInput_Letter));
    s.push_back(CUTE(testUserInput_DigitLetterValue));
    s.push_back(CUTE(testUserInput_NegativeValue));
    
    cute::ide_listener<> listener;
    cute::makeRunner(listener)(s, "User Input Validation Tests");
    return 0;
}