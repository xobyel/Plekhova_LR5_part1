#include <iostream>
#include <limits> 

// 1. Функция контроля ввода целого числа
void validateInput(int& value, const std::string& prompt) {
    while (true) {
        std::cout << prompt;
        if (std::cin >> value) {
            break; 
        } else {
            std::cout << "Ошибка! Введите целое число.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
    }
}

// 2. Метод ввода данных (длины и ширины)
void inputDimensions(int& length, int& width) {
    validateInput(length, "Введите длину прямоугольника: ");
    validateInput(width, "Введите ширину прямоугольника: ");
}

// 3. Метод вычисления и вывода площади
void calculateAndPrintArea(int length, int width) {
    int area = length * width;
    std::cout << "Площадь прямоугольника: " << area << std::endl;
}

int main() {
    int length, width;
    
    inputDimensions(length, width);  
    calculateAndPrintArea(length, width); 
    
    return 0;
}