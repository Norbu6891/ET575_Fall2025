/*
Tenzing Norbu
Nov 12, 2025
lab 17: 2d array
*/
#include <iostream>
#include<cstdlib>
using namespace std;

// example 1: declaring a 2D array
void array_dec(){
    int array[3][5] = {
        {5, 10},
        {-2, -9,},
        {6}
    };
    cout<<"3rd element in the second row "<<array[1][2]<<endl;
}

// example 2: function to print each value in a 2d array
const int NUMCOLS = 5;
void print2d(int a[][NUMCOLS], int rowsize){
    for(int row = 0; row <rowsize; row++){
        for(int col = 0; col<NUMCOLS; col++){
            cout<<a[row][col]<<"\t";
       }
        cout<<endl;
     }
 }

// Example 3, define a function to populate a 2d array
void populate_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            int n;
            cout<<"Enter a number: ";
            cin>>n;
            arr[row][col] = n;
        }
    }
}

void print_array(int arr[][3], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

// example 4: function that sum all elements in a 2d array
int sum_all(int arr[][3], int rowsize, int colsize){
    int sum = 0;
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            sum += arr[row][col];
        }
    }
    return sum;
}   

// example 5: function that returns the total of odd numbers in a 2D array
int total_odd(int arr[][3], int rowsize, int colsize){
    int counter_odd = 0;
        for(int row = 0; row < rowsize; row++){
            for(int col = 0; col < colsize; col++){
                if(arr[row][col]%2 !=0 && arr[row][col] != 0){
                    counter_odd++;
                }
            }
        }
        return counter_odd;
    }

// EXERCISE : LAB 17

int random_0_100(){
                return rand()%101;
            }

void populate_randomnums(int arry[][4], int rowsize, int colsize){
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<colsize; col++){
            arry[row][col] = random_0_100();
        }
    }
}

int average(int arry[][4], int rowsize, int colsize){
    
    int total = 0;

    for(int r = 0; r < rowsize; r++){
        for(int c = 0; c < colsize; c++){
            total += arry[r][c];
        }
    }
    return total/(rowsize*colsize);
}