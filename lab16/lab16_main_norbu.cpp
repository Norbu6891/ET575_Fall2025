/*
Tenzing Norbu
lab 16, array in a function
Nov 17, 2025
*/

#include<iostream>

#include "lab16_function_norbu.cpp" 
using namespace std;

int main() {
    cout<<"\n----- Example 1: collect and populate data into an army -----"<<endl;
    //initialize variables and array
    int arraysize = 3;
    int arrnum[arraysize];

    // calling functions
    fillup(arraysize, arrnum);
    printarray(arraysize, arrnum);

    cout<<"\n----- Example 2: program to search a number in an array -----"<<endl;
    // initialize varuabkes abd array
    int arr_pos_numbers[ARRAY_SIZE];
    int listsize = 0;
    int targetnumber = 8;

    // calling functons
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers); // testing if the positive numbers were properly collected

    cout<<"\n----- Example 3: "<<endl;
    fillarray(arr_pos_numbers, listsize);
    printarray(listsize, arr_pos_numbers);
    int resultsearch = search(arr_pos_numbers, listsize, targetnumber);

    printresult(resultsearch, targetnumber);

    cout<<"Testing result: "<<resultsearch<<endl;

    cout<<"\n----- EXERCISE -----"<<endl;
    // initialize variables and array
    int arr_number[] = {6, -10, 9, 12, -3, -8, 5, 7, 4, 0};
    int size = sizeof(arr_number)/sizeof(arr_number[0]);

    // call the function
    
    cout<<"Counts of negative numbers: "<<countNegNum(arr_number, size)<<endl; 
    cout<<"Sum of even numbers: "<<sumEvenNum(arr_number, size)<<endl;
    



    return 0;
}
