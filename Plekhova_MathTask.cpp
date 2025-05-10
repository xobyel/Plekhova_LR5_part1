#include "Plekhova_MathTask.h"
#include <cctype>

#include "Plekhova_MathTask.h"

// Реализация функции
int CalcRectangleArea(int a, int b) {
    return a * b;
}

bool UserInput(const std::string& input) {
    // Проверка на пустую строку
    if (input.empty()) return false;
    
    // Проверка на отрицательные числа
    if (input[0] == '-') return false;
    
    // Проверка что все символы - цифры
    for (char c : input) {
        if (!isdigit(c)) {
            return false;
        }
    }
    return true;
}