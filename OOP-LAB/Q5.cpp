//
// Created by Nilesh on 25-02-2023.
//
// Q5 : Write a C++ program illustrating user-defined string processing functions using pointers to concatenate two strings.

#include <iostream>
#define MAX_SIZE 100
using namespace std;

// concat function to concatenate two strings
void concat(char * s1, char * s2){
    // loop will continue till it is not null
    while(*(++s1));
    
    // using while loop to copy characters of second string pointed as 's2' at the end of first string pointed as 's2'
    while(*(s1++) = *(s2++));
} 

int main() {
 
    char str1[MAX_SIZE], str2[MAX_SIZE];
    char * s1 = str1;
    char * s2 = str2;
    cout<<"Enter 1st string: ";
    cin>>str1;
    cout<<"Enter 2nd string: ";
    cin>>str2;
    concat(s1, s2);
    cout<<"Concatenated string:"<<str1<<endl;
 
    return 0;
 
}
