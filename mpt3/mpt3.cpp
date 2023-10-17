#include "Complex.h"

int main() {
    setlocale(LC_ALL, "RU");
    float a, b, c , d;
    std::cout << "������� ������������ ����� ������� �����: ";
    std::cin >> a;
    std::cout << "������� ������ ����� ������� �����: ";
    std::cin >> b;
    std::cout << "������� ������������ ����� ������� �����: ";
    std::cin >> c;
    std::cout << "������� ������ ����� ������� �����: ";
    std::cin >> d;
    Complex c1(a, b);
    Complex c2(c, d);


    Complex sum = c1 + c2;
    Complex diff = c1 - c2;
    Complex mult = c1 * c2;
    Complex div = c1 / c2;

    std::cout << "\n��������� �����: \n";
    sum.print();
    std::cout << "\n��������� ��������: \n";
    diff.print();
    std::cout << "\n��������� ���������: \n";
    mult.print();
    std::cout << "\n��������� �������: \n";
    div.print();
}