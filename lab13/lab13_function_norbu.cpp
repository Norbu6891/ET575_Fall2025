/*
Tenzing Norbu
Oct 27, 2025
Lab 13, random variables
*/

#include<iostream>
#include<cstdlib>
using namespace std;

//function to return a random number
int random_number(){
    return rand();
}

// example 2: different random number
int different_random(){
    srand(time(0));
    return rand();    
}

// example 3: range of random number
// generate random numbers between 0 and 9
int random_0_9(){
    return rand()%10;
}

// example 4: specific range of random number
int random_neg10_5(){
    return -10 + rand()%16;
}

// EXERCISE
// function that generates a random number that generates a random number between 1 and 6
int random_1_6(){
    return rand()%7;
}

//function to compare if two numbers are 1s
bool compare_ones(int r1, int r2){
    if result == 1;
        return 1;
    else
        return 0;

}

// function to prompt result
void printresult(bool result){

}