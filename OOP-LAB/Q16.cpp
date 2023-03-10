//
// Created by Nilesh on 10-03-2023.
//
// display function, swap function
#include<iostream>
using namespace std;
class Test;
class Sample{
private:
    int num_from_sample;
public:
    void getData(){
        cout<<"Enter first value : ";
        cin>>num_from_sample;
    }
    friend void swap(Sample &sample_obj,Test &Test_obj);
    friend void display(Sample &sample_obj, Test &Test_obj);
};

class Test {
private:
    int num_from_Test;
public:

    void getData(){
        cout<<"Enter second value : ";
        cin>>num_from_Test;
    }
    friend void swap(Sample &sample_obj,Test &Test_obj);
    friend void display(Sample &sample_obj, Test &Test_obj);
};

void swap(Sample &sample_obj, Test &Test_obj){
    int temp = sample_obj.num_from_sample;
    sample_obj.num_from_sample= Test_obj.num_from_Test;
    Test_obj.num_from_Test = temp;


}
void display(Sample &sample_obj, Test &Test_obj){
    cout<<sample_obj.num_from_sample<<" "<<Test_obj.num_from_Test<<endl;
}

int main(){
    Sample s;
    Test t;
    s.getData();
    t.getData();
    cout<<"Before swap : ";
    display(s, t);
    swap(s,t);
    cout<<"after swap : ";
    display(s, t);
    return 0;
}

