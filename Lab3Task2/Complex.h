#ifndef COMPLEX_H
#define COMPLEX_H


class Complex {
public:
    Complex();
    Complex(double, double);
    Complex operator+(Complex);
    Complex operator*(Complex);
    int operator!=(Complex);
    void Print();
private:
    double Real, Imaginary;
};

#endif // COMPLEX_H
