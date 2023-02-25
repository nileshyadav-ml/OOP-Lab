//
// Created by Nilesh on 25-02-2023.
//

// Q4 Write a C++ program that implement bubble sort, to sort a given list of integer in ascending order.

#include<iostream>

using namespace std;

// main function
int main() {
    int number_of_elements;

// getting the value of "number_of_ elements"
    cout<<"Enter the number of data element to be sorted : ";
    cin>>number_of_elements;
    int array[number_of_elements];

// inserting the elements in array
    for(int i=0;i<number_of_elements;i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> array[i];
    }
// sorting the array using bubble sort algorithm
        for(int i=0;i<number_of_elements;i++)
        {
            for (int j = i + 1; j < number_of_elements; j++)
            {
                if (array[i] > array[j])
                {
                    int temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;

                }
            }
        }
// print the array after sorting

    cout<<"Sorted Data";
    for(int i=0;i<number_of_elements;i++){
        cout<<" "<<array[i];
    }
    return 0;
}
