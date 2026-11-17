// Лабораторна робота №1. Розробка алгоритмів з лінійною структурою
// Студент: Костишен Артемій Володимирович
// Група: ІСТ-21
// Ел. пошта: st9763868@stud.duikt.edu.ua
// Варіанти: завдання 8 та завдання 13

#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

using namespace std;

int main()
{
    cout << "Student: Kostyshen A. V., Group: IST-21" << endl;

    // Task 1 (Variant 8)
    {
        double a = 1;
        double b = 12.21;
        double y = (0.81 * cbrt(a) - (1.0 / 2.125) * cbrt(b)) * exp(a);
        cout << "Task 1 (Variant 8): y = " << y << endl;
    }

    // Task 2 (Variant 13)
    {
        double a = 3;
        double b = 2.712;
        double num = 0.807 * (1.0 - pow(sin((a - b) * M_PI / 4.0), 2));
        double den = 0.312 * (1.0 + pow(cos((b + a) * M_PI / 4.0), 2));
        double y = pow(pow(a, 2) / pow(b, 3), 2.0 / 3.0) * exp(num / den);
        cout << "Task 2 (Variant 13): y = " << y << endl;
    }

    return 0;
}
