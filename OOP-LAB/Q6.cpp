//
// Created by Nilesh on 26-02-2023.
//

// Q6: Write a C++ program illustrating user-defined string processing function using pointers to copy string

#include<iostream>
using namespace std;

// declaration
#define BUFFER_SIZE 100
void copystring(char *sourcestring, char *finalstring);

// main function
int main(){
    // declare sourcestring and final string with max size 100
    char sourcestring[BUFFER_SIZE];
    char finalstring[BUFFER_SIZE];

    // input sourcestring
    cout<<"enter string: ";
    cin.getline(sourcestring, BUFFER_SIZE);

    copystring(sourcestring, finalstring);
    cout<<"target string: "<<finalstring<<endl;
    return 0;

}

// defining function
void copystring(char *sourcestring,char *finalstring){
    while(*sourcestring != '\0'){
        *finalstring = *sourcestring;
        sourcestring++;
        finalstring++;
    }
    *finalstring = '\0';
}