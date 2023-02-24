//
// Created by Nilesh on 24-02-2023.
//
// Q2 : Write a C++ program to read an array of integers (with max size 10) and print the largest
//      and the smallest of the given numbers.


#include<iostream>
using namespace std;


// main function
int main(){
    int array[10];
    int number_of_elements;
    cout<<"Enter n : ";
    cin>>number_of_elements;

    cout<<"Enter"<<number_of_elements<<" Values : ";
    // read all the entered element and store in "array"
    for(int i=0;i<number_of_elements;i++){
        cin>>array[i];
    }

    // sort the array
    for (int i = 0; i < number_of_elements; i++) {
        for (int j = i+1; j < number_of_elements;j++) {
            if (array[i]>array[j]){
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    // now the value at 0 index will be the smallest and the value at the last index of array
    // will be the largest
    cout<<"Largest element = "<<array[number_of_elements-1]<<"\n"<<"Smallest element = "<<array[0]<<"\n";
    return 0;
}
