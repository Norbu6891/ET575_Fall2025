/*
Tenzing Norbu
lab 16, array in a function
Nov 17, 2025
*/

#include<iostream>
using namespace std;

// example 1: function to populate an array with numbers.
// the numbers are collected from the user
void fillup(int sizearray, int arr[]){
    for(int i = 0; i < sizearray; i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    cout<<endl;
}

// function to print values in an array
void printarray(int sizearray, int arr[]){
    for(int i = 0; i<sizearray; i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}

// Example 2: collect positive numbers (max 10 numbers), and search if a number exists amount the colletcted numbers
// function to collect non-negative number (max 10 numbers). If a negative number is entered, the function will stop, 

const int ARRAY_SIZE = 10;

void fillarray(int *arr, int &numberuserindex){
    int number, index = 0;

    do{
        cout<<"Enter a positive number: ";
        cin>>number;
        if(number>0){
            arr[index] = number;
            index ++;
        }
    }while(number>0 && index< ARRAY_SIZE);

    // update the value if variable numberuserindex value of variable numberuserindex, which is the last indext of all positive numbers
    numberuserindex = index;
}

// search function to search for a number in the array
int search(const int *arr, int numberuserindex, int target){
    int index = 0;
    bool found = false;

    while((!found) && (index<numberuserindex)){
        if(target == arr[index])
            found = true;
        else
            index++;
    }
    if(found)
        return index;
    else    
        return -1;
}

// function to print the result

void printresult(int resultsearch, int target){
    cout<<"What is the index of number "<<target<<" in the array?"<<resultsearch<<endl;
}

// EXERCISE
/// function that returns the sum of all even numbers in an array

int sumEvenNum(int arr_number[], int size){
    int sum = 0;
    for(int i = 0; i < size; i++){
        if(arr_number[i]%2==0){
            sum += arr_number[i];
        }
    }
    return sum;
}

// function that returns the counts of all negative numbers in an array

int countNegNum(int arr_number[], int size){
    int count = 0;
    for(int i = 0; i < size; i++){
        if(arr_number[i]<0){
            count++;
        }
    }
    return count;
}
