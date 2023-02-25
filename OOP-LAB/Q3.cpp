//
// Created by Nilesh on 25-02-2023.
//
// Q3 Write a C++ program to overload new and delete operators

#include<iostream>
using namespace std;

class Student{
private:
    string name;
    int id;
    // default constructor
public:
    Student(){
        name = "noname";
        id = 0;
    }
    // constructor with two parameters
    Student(string name, int id){
        this->name=name;
        this->id=id;
    }
public:
    // "display()" will print the output
    void display(){
        cout<<"The student name : "<<name<<endl;
        cout<<"The student id : "<<id<<endl;
    }
    // overloading new operator
    void *operator new(size_t size){
        void *pointer;
        pointer = malloc(size);
        return pointer;
    }
    // overloading delete operator
    void operator delete(void *pointer){
        free(pointer);
    }
};

// do not write the int main() section in the codetantra's code editor.
int main() {
    Student *nileshptr;
    nileshptr = new Student("nilesh kumar yadav", 69);
    nileshptr->display();
    return 0;
}