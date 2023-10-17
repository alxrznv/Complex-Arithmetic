/*������� 3: �������� ����� ��� ����������� �����.
����������� �������� ���������, ������� � ��������� ��� ����� ������  ����� ����������
*/

#include <iostream>

class Complex   {
private:
    float rl;
    float img;

public:
    Complex(float r, float i);
    void print() const;

    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator/(const Complex& other) const;
    Complex operator*(const Complex& other) const;

    
};