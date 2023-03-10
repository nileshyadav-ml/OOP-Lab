//
// Created by Nilesh on 10-03-2023.
// Q14

#include <iostream>
using namespace std;
class Addition{
public:
    // int
    int add(int a, int b) {
    return a + b;
    }
    // float
    float add(float a, float b) {
    return a + b;
    }
    // double
    char add(char a, char b) {
    return a + b;
    }
};

int main(){
    int int_num_1, int_num_2;
    float float_num_1, float_num_2;
    char char_num_1, char_num_2;
    cout<<"Enter two integer values : ";
    cin>>int_num_1>>int_num_2;
    cout<<"Enter two float values : ";
    cin>>float_num_1>>float_num_2;
    cout<<"Enter two char Values : ";
    cin>>char_num_1>>char_num_2;

    // using add function
    Addition a;
    cout<<"Sum of two integers : "<<a.add(int_num_1, int_num_2)<<endl;
    cout<<"Sum of two floats : "<<a.add(float_num_1, float_num_2)<<endl;
    cout<<"Sum of two characters : "<<a.add(char_num_1, char_num_2)<<endl;
    return 0;
}
