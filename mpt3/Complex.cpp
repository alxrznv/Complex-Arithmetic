#include "Complex.h"

Complex::Complex(float r, float i) {
    rl = r;
    img = i;
}

void Complex::print() const {
    std::cout << rl << " + ("<< img <<")i" << std::endl;
}

Complex Complex::operator+(const Complex& other) const {
    return Complex(rl + other.rl, img + other.img);
}

Complex Complex::operator-(const Complex& other) const {
    return Complex(rl - other.rl, img - other.img);
}

Complex Complex::operator*(const Complex& other) const {
    float r = rl * other.rl - img * other.img;
    float i = rl * other.img + img * other.rl;
    return Complex(r, i);
}


Complex Complex::operator/(const Complex& other) const {
    float r = (rl * other.rl + img * other.img) / (pow(other.rl, 2) + pow((other.img), 2));
    float i = (other.rl * img - rl * other.img) / (pow(other.rl, 2) + pow(other.img, 2));
    return Complex(r, i);
}
