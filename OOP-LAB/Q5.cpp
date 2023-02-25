//
// Created by Nilesh on 25-02-2023.
//
// Q5 : Write a C++ program illustrating user-defined string processing functions using pointers to concatenate two strings.

#include<iostream>
using namespace std;
// main function
int main() {
    //declare s1 and s2
    string s1;
    string s2;
    // input s1
    cout<<"enter first string: ";
    cin>>s1;
    //input s2
    cout<<"enter second string: ";
    cin>>s2;
    // concatenate sl and s2
    s1+=s2;
    cout<<"The concatenated string is "<<s1; return 0;
}