/*
Tenzing Norbu
Nov 29, 2025
2D Array
*/

#include<iostream>
using namespace std;
// define a function to search for a value in a 2D array
void searchValue(int arr[][4], int findValue, int result[]){
    for(int row = 0; row < 4; row++){
        for(int col = 0; col < 4; col++){
            if(arr[row][col] == findValue){
                result[0] = row;
                result[1] = col;
                return;
            }
        }
    }
    // if value not found
    result[0] = -1;
    result[1] = -1;
}

// define a function to display a message
    void displayResult(int findValue, int result[]){
        if(result[0] == -1) {
            cout<<"Number "<<findValue<<" was not found"<<endl;
        }
        else {
            cout<<"Number "<<findValue<<" was found in row "<<result[0]<<" and column "<<result[1]<<endl;
        }
    }

const int ROWCOL_ARRAY = 4;

int main(){
    int ar[ROWCOL_ARRAY][ROWCOL_ARRAY] = {
        {1,2,3,4}, 
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    // call function to search for a value in a 2D array
    int aNumber;
    int result[2];

    cout<<"Enter a number to search for: ";
    cin>>aNumber;

    searchValue(ar, aNumber, result);

    // call function to display a message
    displayResult(aNumber, result);


    return 0;
}