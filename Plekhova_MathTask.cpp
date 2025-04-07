#include <iostream>
#include <limits>

using namespace std;

// Функция проверки корректности ввода целого числа
void validateInput(int& value, const string& prompt) {
    while (true) {
        cout << prompt;
        if (cin >> value) {
            break;
        } else {
            cout << "Ошибка! Введите целое число.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
}

// Функция ввода размеров прямоугольника
void inputDimensions(int& length, int& width) {
    validateInput(length, "Введите длину прямоугольника: ");
    validateInput(width, "Введите ширину прямоугольника: ");
}

// Функция вычисления и вывода площади
void calculateAndPrintArea(int length, int width) {
    int area = length * width;
    cout << "Площадь прямоугольника: " << area << endl;
}

int main() {
    cout << "=== Программа для вычисления площади прямоугольника ===\n";
    
    int length, width;
    inputDimensions(length, width);
    calculateAndPrintArea(length, width);
    
    return 0;
}