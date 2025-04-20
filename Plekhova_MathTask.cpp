#include "Plekhova_MathTask.h"
#include <iostream>  // Добавлено для cout/cin
#include <string>    // Уже было

void EnterDigit(int& varLink, const std::string& label) {
    std::cout << label << " = ";  // Исправлено <<< на <<
    std::string raw_input;
    std::getline(std::cin, raw_input);  // Добавлен std::
    varLink = std::stoi(raw_input);     // Исправлена строка с stoi
}

int CalcRectangleArea(int NumberA, int NumberB) {  // Было Mint вместо int
    return NumberA * NumberB;
}