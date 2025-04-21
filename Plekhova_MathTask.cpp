#include "Plekhova_MathTask.h"

int CalcRectangleArea(int a, int b) {
    // Добавляем проверку на отрицательные значения
    if (a <= 0 || b <= 0) return 0;
    return a * b;
}