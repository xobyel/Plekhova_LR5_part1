// RectangleUtils.h
#ifndef RECTANGLE_UTILS_H
#define RECTANGLE_UTILS_H

#include <string>

using namespace std;

// Функция проверки ввода целого числа
bool UserInput(string input);

// Функция ввода числа с проверкой
void EnterDigit(int& varLink, const string& label);

// Функция вычисления площади прямоугольника
int CalcRectangleArea(int NumberA, int NumberB);

#endif