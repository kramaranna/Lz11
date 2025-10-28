#include <iostream>
using namespace std;

int findMinOfMainDiagonal(int matrix[5][5]) {
    // Припускаємо, що перший елемент діагоналі є мінімальним
    int minElement = matrix[0][0];

    // Проходимо по решті елементів головної діагоналі, починаючи з другого
    for (int i = 1; i < 5; ++i) {
        // Якщо знаходимо елемент, менший за поточний мінімум, оновлюємо його
        if (matrix[i][i] < minElement) {
            minElement = matrix[i][i];
        }
    }
    return minElement;
}

int main() {
    // Ініціалізуємо квадратну матрицю розміром 5x5
    int matrix[5][5] = {
        { 9,  2,  3,  4,  5 },
        { 6,  1,  8,  9, 10 },
        { 11, 12, -5, 14, 15 },
        { 16, 17, 18,  4, 20 },
        { 21, 22, 23, 24,  0 }
    };

    // Виводимо матрицю на екран для наочності
    cout << "Матриця:" << endl;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    // Викликаємо функцію для пошуку мінімального елемента
    int result = findMinOfMainDiagonal(matrix);

    // Виводимо результат
    cout << "\n Мінімальний елемент головної діагоналі: " << result << endl;

    return 0;
}