//
// Created by Nilesh on 25-02-2023.
//
// Q3 Write a C++ program to overload new and delete operators

#include<iostream>
using namespace std;

Class Student{
private:
    string name;
    int id;
    // default constructor
    Student(){
        name = "noname";
        id = 0;
    }
    // constructor with two parameters
    Student(string name, int id){
        this->name=name;
        this->id=id;
    }
    void display(){
        cout<<"The student name : "<<name<<endl;
        cout<<"The student id : "<<id<<endl;
    }
    void *operator new(size_t size){
        void *pointer;
        pointer = malloc(size);
        return pointer;
    }
    void operator delete(void *pointer){
        free(pointer);
    }
};


int main(){
    Student *nileshptr;
    nileshptr = new Student("nilesh kumar yadav",69);
    nileshptr->display();




}