/*Задание 3: Написать класс для комплексных чисел.
Реализовать сложение вычитание, деление и умножение для этого класса  через перегрузку
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