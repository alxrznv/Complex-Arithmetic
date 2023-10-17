#include "Complex.h"

int main() {
    setlocale(LC_ALL, "RU");
    float a, b, c , d;
    std::cout << "Введите вещественную часть первого числа: ";
    std::cin >> a;
    std::cout << "Введите мнимую часть первого числа: ";
    std::cin >> b;
    std::cout << "Введите вещественную часть второго числа: ";
    std::cin >> c;
    std::cout << "Введите мнимую часть второго числа: ";
    std::cin >> d;
    Complex c1(a, b);
    Complex c2(c, d);


    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex mult = c1 * c2;
    Complex div = c1 / c2;

    std::cout << "\nРезультат суммы: \n";
    sum.print();
    std::cout << "\nРезультат разности: \n";
    diff.print();
    std::cout << "\nРезультат умножения: \n";
    mult.print();
    std::cout << "\nРезультат деления: \n";
    div.print();
}