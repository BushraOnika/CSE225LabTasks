#include "complex.h"
#include <iostream>
#include "Complex.h"
using namespace std;
Complex::Complex(){
    Real = 0;
    Imaginary = 0;
}
    Complex::Complex(double r, double i){
    Real = r;Imaginary = i;
}
Complex Complex::operator+(Complex a){
    Complex t;
    t.Real = Real + a.Real;
    t.Imaginary= Imaginary + a.Imaginary;
    return t;
}
Complex Complex::operator*(Complex a){
    Complex c;
    c.Real=Real*a.Real;
    c.Imaginary=Imaginary*a.Imaginary;
    return c;
}
int Complex::operator!=(Complex a){
    if (Real == a.Real || Imaginary == a.Imaginary) {
		return 0;
	}
	else {
		return 1;
	}

}

    void Complex::Print(){
    cout << Real << endl;
    cout << Imaginary << endl;
}
