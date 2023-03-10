//
// Created by Nilesh on 10-03-2023.
// Q13


#include<iostream>
using namespace std;

class Complex {
private:
    double real;
    double imag;

public:
    Complex(double r = 0.0, double i = 0.0) {
        real = r;
        imag = i;
    }

    // Overloaded - operator as a member function
    Complex operator-(Complex const &obj) {
        Complex res;
        res.real = real - obj.real;
        res.imag = imag - obj.imag;
        return res;
    }

    void display() {
        if(imag >= 0)
            cout <<"Subtraction of two complex numbers : "<<real<<"+"<<"i"<<imag<< endl;
        else
            cout <<"Subtraction of two complex numbers : "<<real<<" + "<<"i"<<imag<< endl;
    }
};

int main() {
    int real_1, real_2;
    int imaginary_1, imaginary_2;

    cout<<"Enter real and imaginary part : ";
    cin>>real_1>>imaginary_1;

    cout<<"Enter real and imaginary part : ";
    cin>>real_2>>imaginary_2;
    Complex c1(real_1, imaginary_1), c2(real_2, imaginary_2), c3;
    c3 = c1 - c2;
    c3.display();

    return 0;
}
