//
// Created by Nilesh on 26-02-2023.
//
// Q7 : Write a C++ program illustrating user-defined string processing functions using pointers to find string length.
#include<iostream>
using namespace std;
#define BUFFER_SIZE 100

// function declaration
int  stringlength(char *sourcestring);

//main function
int main() {
    char sourcestring[BUFFER_SIZE];
    cout<<"enter the string : ";
    cin>>sourcestring;

    // the stringlength function will return the variable count with contain the length of the string
    cout<<stringlength(sourcestring)<<endl;
    return 0;
}

// defining stringlength function
int stringlength(char *sourcestring){
    int count =0; // variable to store the length of the string

    while(*sourcestring!='\0'){
        count++;
        sourcestring++;
    }
    return count;
}