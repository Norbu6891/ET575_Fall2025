/*
Tenzing Norbu
Dec 1, 2025
Homework 9 - Arrays Application
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int arraysize(){
    int size;
    while(true){
        cout<<"Enter an array size between 1 and 100: ";
        cin>>size;
        if(size>=1 && size<=100){
            return size;
        }
        cout<<"Invalid size!"<<endl;
    }
    cout<<endl;
}

void randPopulate(int noise[], int size){
    srand(time(0));
    for(int i = 0; i < size; i++){
        noise[i] = rand() % 21 + 10;
    }
    cout<<endl;
}

void print(int noise[], int size){
    for(int i = 0; i < size; i++){
    cout<<noise[i]<<" ";
    }
    cout<<endl;
}

void reverse(int noise[], int size){
    for(int i = 0; i < size/2; i++){
        int temp = noise[i];
        noise[i] = noise[size - 1 - i];
        noise[size - 1 - i] = temp;
    }
    cout<<endl;
}

int main() { 

    int sizearray = arraysize();   // Get array size 

    int noise[sizearray];     // Declare array with the obtained size 

    //Populate array with random values 

    randPopulate(noise, sizearray);

    // Display original array 

    cout<<"Original Set:"<<endl;

    print(noise, sizearray); 

    // Reverse the array 

    reverse(noise, sizearray);   

    // Display reversed array 

    cout << endl << "Reversed Set:"<<endl;

    print(noise, sizearray); 

    return 0; 

}