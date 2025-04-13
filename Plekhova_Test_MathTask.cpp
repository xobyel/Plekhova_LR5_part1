#include "CUTE/cute/cute.h"
#include "CUTE/cute/ide_listener.h"
#include "CUTE/cute/cute_runner.h"
#include "Plekhova_MathTask.h"

using namespace cute;

// Тест для функции CalcRectangleArea
void testCalcRectangleArea() {
    // Подготовка данных
    int a = 3;
    int b = 5;
    int expected = 15; // 3*5=15

    // Вызов тестируемой функции
    int actual = CalcRectangleArea(a, b);

    // Проверка результата
    ASSERT_EQUAL(expected, actual);
}

int main() {
    // Создаем набор тестов
    suite s;
    
    // Добавляем тест в набор
    s.push_back(CUTE(testCalcRectangleArea));
    
    // Настраиваем вывод результатов
    cute::ide_listener<> listener;
    cute::makeRunner(listener)(s, "Тест площади прямоугольника");
    
    return 0;
}