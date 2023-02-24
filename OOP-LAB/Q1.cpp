//
// Created by Nilesh on 24-02-2023.
//
/*
 Q1- Write a C++ program to find the sum of individual digit of a positive integer
 * */

#include<iostream>

using namespace std;

// declaration of add function
int add(int num);


// main function
int main() {
    int num;
    cout << "Enter value of num : ";
    cin >> num;
    cout << "sum of " << num << " : " << add(num) << endl;
    return 0;
}

// definition of add function
int add(int num){
    int reminder;
    int sum = 0;
    while(num!=0) {
        reminder = num % 10;
        sum += reminder;
        num = num / 10;
    }
    return sum;
}