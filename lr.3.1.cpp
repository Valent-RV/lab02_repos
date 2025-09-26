#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    double A; 
    double B; 
    double y;
    // Введення x
    cout << "Введіть x: ";    cin >> x;
    // Cтала частина
    A = 3.14;

    // Скорочена форма
    B = (x < -1) ? (sin(x) / (1 + pow(cos(x), 2) * x)) :
        ((x >= -1 && x <= 1) ? (pow(cos(x), 2) * pow(sin(x), 2) * x - 1) :
        (log10(x + 0.4)));
    y = A + B;  // Обчислення y
    cout << "Результат (скорочена форма): y = " << y << endl;  // Виведення y

    // Повна форма
    if (x < -1) {
        B = sin(x) / (1 + pow(cos(x), 2) * x);
    } else if (x >= -1 && x <= 1) {
        B = pow(cos(x), 2) * pow(sin(x), 2) * x - 1;
    } else {
        B = log10(x + 0.4);
    }
    y = A + B;  // Обчислення y
    cout << "Результат (повна форма): y = " << y << endl;  // Виведення y

    return 0;
}