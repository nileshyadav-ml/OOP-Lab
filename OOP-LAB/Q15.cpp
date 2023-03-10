//
// Created by Nilesh on 10-03-2023.
//

#include<iostream>
#include<cmath>
using namespace std;

int power(int num_1, int pwr = 2){
    int res = pow(num_1,pwr);
    return res;
}

double power(double num_1, int pwr = 2){
    double res = pow(num_1,pwr);
    return res;
}


int main() {
    int a, pwr;
    double b;
    cout<<"Enter any integer value : ";
    cin>>a;
    cout<<"Enter any double value : ";
    cin>>b;
    cout<<"Enter any power value : ";
    cin>>pwr;

    // print result
    cout<<"The square of "<<a<<" : "<<power(a)<<endl;
    cout<<"The cube of "<<a<<" : "<<power(a, 3)<<endl;
    cout<<"The "<<a<<" to the power of "<<pwr<<" : "<<power(a, pwr)<<endl;
    cout<<"The square of "<<b<<" : "<<power(b)<<endl;
    cout<<"The cube of "<<b<<" : "<<power(b, 3)<<endl;
    cout<<"The "<<b<<" to the power of "<<pwr<<" : "<<power(b, pwr)<<endl;


    return 0;
}