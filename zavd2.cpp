#include <iostream>
#include <cmath> 
using namespace std;

double calculateExpression(double x, double t) {
    // Обчислюємо проміжні значення 'a' і 'b'
    double a = log10(x); // Десятковий логарифм
    double b = sqrt(pow(x, 2) + pow(t, 2)); // Квадратний корінь
    double y = cbrt(abs(a - b)); 
    return y;
}

int main() {
    double x, t;
    // Запитуємо у користувача вхідні дані
    cout << "Введіть значення x (x > 0): ";
    cin >> x;

    // Перевірка ОДЗ для логарифма: x повинен бути додатним
    if (x <= 0) {
        cout << "Помилка: значення x має бути більше нуля." << endl;
        return 1; // Завершуємо програму з кодом помилки
    }

    cout << "Введіть значення t: ";
    cin >> t;

    // Викликаємо функцію для обчислення результату
    double result = calculateExpression(x, t);

    // Виводимо результат на екран
    cout << "\nРезультат y = " << result << endl;

    return 0;
}