/* #include <iostream>  // Підключення бібліотеки для введення/виведення
#include <cmath>     // Підключення бібліотеки для математичних операцій
#include <iomanip>   // Підключення бібліотеки для форматованого виводу

using namespace std;

int main() {

    double S = 0, term; // // Оголошення змінних: S - для накопичення суми, term - для обчислення окремих членів послідовності

    cout << "Програма обчислення суми послідовності та її табуляція" << endl;

    // Виведення заголовку таблиці для обчислень при збільшенні кроку
    cout << "\nТабуляція для збільшення кроку:\n";
    cout << "+----+-----------------+" << endl;
    cout << "|  i | Значення виразу |" << endl;
    cout << "+----+-----------------+" << endl;

    // Цикл обчислення виразу та сумування для i від 1 до 11 (збільшення кроку)
    for (int i = 1; i <= 11; i++) {
        // Обчислення окремого члена послідовності
        term = (pow(-1, i + 1) * (i + 1)) / (i * i + 2 * i + 7);
        S += term; // Додавання значення до суми

        // Виведення результату в таблицю
        cout << "| " << setw(2) << i << " | " << setw(10) << fixed << setprecision(2) << term << "      |" << endl;
    }

    cout << "+----+-----------------+" << endl;
    cout << "Сума при збільшенні кроку: " << S << endl; // Виведення суми після циклу

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~\n";

    // Обнулення змінної перед другим обчисленням
    S = 0;

    // Виведення заголовку таблиці для обчислень при зменшенні кроку
    cout << "\nТабуляція для зменшення кроку:\n";
    cout << "+----+-----------------+" << endl;
    cout << "|  i | Значення виразу |" << endl;
    cout << "+----+-----------------+" << endl;

    // Цикл обчислення виразу та сумування для i від 11 до 1 (зменшення кроку)
    for (int i = 11; i >= 1; i--) {
        // Обчислення окремого члена послідовності
        term = (pow(-1, i + 1) * (i + 1)) / (i * i + 2 * i + 7);
        S += term; // Додавання значення до суми

        // Виведення результату в таблицю
        cout << "| " << setw(2) << i << " | " << setw(10) << fixed << setprecision(2) << term << "      |" << endl;
    }

    cout << "+----+-----------------+" << endl;
    cout << "Сума при зменшенні кроку: " << S << endl; // Виведення суми після другого циклу

    return 0; // Завершення програми
}
*/

/* #include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x_start = 0.2, x_end = 1.6, h = 0.1, a = 0.36, b = 0.74, y = 0, x = 0;

    cout << "Табулювання за допомогою циклу do while:\n";
    cout << "--------------------\n";
    cout << "|   x   |    f(x)  |\n";
    cout << "-------------------\n";

    x = x_start;
    do {
        y = ((x * x + 1) - 1 / sin(b * x)) / (cbrt(x / a) - 0.39);
        cout << "| " << fixed << setprecision(2) << setw(5) << x << " | " << setw(8) << setprecision(2) << y << " |\n";
        x += h;
    }
        while  (x <= x_end);
    for (x = x_start; x <= x_end; x += h) {
        y = ((x * x + 1) - 1 / sin(b * x)) / (cbrt(x / a) - 0.39);
        cout << "| " << fixed << setprecision(2) << setw(5) << x << " | " << setw(8) << setprecision(2) << y << " |\n";
    } 
    
    cout << "--------------------\n";

    cout << "\nТабулювання за допомогою циклу while:\n";
    cout << "----------------------\n";
    cout << "|   x   |       f(x) |\n";
    cout << "----------------------\n";
    x = x_start;
    while (x <= x_end) {
        y = ((x * x + 1) - 1 / sin(b * x)) / (cbrt(x / a) - 0.39);
        cout << "| " << fixed << setprecision(2) << setw(5) << x << " | " << setw(10) << setprecision(2) << y << " |\n";
        x += h;
    }
    cout << "----------------------\n";

    return 0;
} */


/* #include <iostream>
#include <cmath>

using namespace std;

double sumakoreniv(double a, double b, double c) {
    return -b / (2 * a);
}

int main() {
    double a, b, c;
    cout << "Введіть коефіцієнти a, b, c: ";
    cin >> a >> b >> c;


    cout << "Сума коренів рівняння: " << sumakoreniv(a, b, c) << endl;

    return 0;
} */

/* #include <iostream>
#include <cmath>
using namespace std;

// Прототипи функцій
double h(double a, double b);
double computeExpression(double s, double t);

int main() {
    double s, t;

    // Введення даних
    cout << "Введіть значення s: ";
    cin >> s;
    cout << "Введіть значення t: ";
    cin >> t;

    // Обчислення виразу
    double result = computeExpression(s, t);

    // Виведення результату
    cout << "Результат обчислення: " << result << endl;

    return 0;
}

// Реалізація функції h(a, b)
double h(double a, double b) {
    return pow(a, 2) - sin(b) * cos(a) + pow(b, 2);
}

// Реалізація функції для обчислення основного виразу
double computeExpression(double s, double t) {
    double numerator = h(1, s * t) + pow(h(t + s, 1), 2);
    double denominator = 1 + pow(h(s, t), 3);
    return numerator / denominator;
} */

/* #include <iostream>
using namespace std;

// Прототип функції
long long dobutokRecursive(int n, int m);

int main() {
    int n, m;

    // Введення значень
    cout << "Введіть значення n: ";
    cin >> n;
    cout << "Введіть значення m: ";
    cin >> m;



    // Обчислення добутку (факторіалу)
    long long product = dobutokRecursive(n, m);
    cout << "Добуток від " << n << " до " << m << " дорівнює: " << product << endl;

    return 0;
}

// Реалізація рекурсивної функції для обчислення добутку від n до m
long long dobutokRecursive(int n, int m) {
    if (n > m) return 1; // Базовий випадок
    return n * dobutokRecursive(n + 1, m);
} */

#include <iostream>
#include <cmath>

using namespace std;

// Прототип функції
double sumOfRoots(double a, double b, double c);

int main() {
    double a, b, c, sum;

    // Введення коефіцієнтів
    cout << "Введіть коефіцієнт a: ";
    cin >> a;
    cout << "Введіть коефіцієнт b: ";
    cin >> b;
    cout << "Введіть коефіцієнт c: ";
    cin >> c;

    // Обчислення суми коренів
     sum = sumOfRoots(a, b, c);

    // Виведення результату
    if (!isnan(sum)) {
        cout << "Сума коренів квадратного рівняння: " << sum << endl;
    } else {
        cout << "Рівняння не має дійсних коренів." << endl;
    }

    return 0;
}

// Функція для обчислення суми коренів квадратного рівняння
double sumOfRoots(double a, double b, double c) {
    double D = b * b - 4 * a * c; // Обчислення дискримінанта
    if (D < 0) return NAN; // Якщо дискримінант від'ємний, немає дійсних коренів
    return -b / a; // Сума коренів формула: -b/a
} 
