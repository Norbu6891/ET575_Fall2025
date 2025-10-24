/*
Tenzing Norbu
Oct 22, 2025
Introduction to functions 
*/

#include<iostream>

using namespace std;

// void function does not return any value
void printhello() {
    cout<<"Hello function!"<<endl;
    return;
}

// void function with parameters 
void greeting(string name) {
    cout<<"Good afternoon "<<name<<endl;
    return;
    }

// example 3: function that return
int returnfive() {
    return 5;
    }

// example 4, any code after return
void printsome() {
    cout<<"Something"<<endl;
    return;
    cout<<"After the return"<<endl;

}

int somenumber() {
    int num = 10;
    return num;
    num *= 2;
    return num;
}

// example 5: function that calculates 
float areasquare(float side) {
    float area = side * side;
    return area;
}
// example 6: function that calculates and returns the product of two numbers 
int product(int n1, int n2){
    return n1*n2;
}
// example 7: function that calculates and returns
double fah(double celsius) {
    return celsius*1.8+32;
}

void printfah(double f) {
    cout<<"The Fahrenheit temperature is: "<<f<<endl;
}
//example 8: check a number
string checknumber(int number) {
    if(number == 0) {
        return "zero";
    }
    else if(number>0){
        return "positive";
    }
    else{
        return "negative";

    }
    
    void printnumber(string n) {
        cout<<"The number is "<<n<<endl;
    }