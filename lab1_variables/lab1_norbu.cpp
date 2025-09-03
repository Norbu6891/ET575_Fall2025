/*
Tenzing Norbu
Aug 28, 2025
Lab 1, iostream
*/
#include <iostream>
using namespace std;

int main() {
    cout << "-----Example 1: cout data----"<<endl;
    cout <<"This is a C++ code"<<endl;
    // variables = temporary storage of data
    // declare the variable first
    string username = "peterpan123";
    cout<<"\nWelcome to C++ \t\t"<<username<<endl;

    cout << "----Example 2: cin data ----"<<endl;
    cout <<"Enter a new username "<<endl;
    cin >> username;
    cout <<"New user is "<<username<<endl;

    cout << " ---Example 3: data type ----"<<endl;
    //;declasre variable
    char sym = '%';
    float distance = 5.63;
    int number = 8;

    cout <<"Given symbol = "<<sym<<endl;
    cout <<"Given distance = "<<distance<<endl;
    cout <<"Given number = "<<number<<endl;

    cout <<"----EXERCISE---"<<endl;
    // declare variables
    string country;
    char gender;
    int zipcode;
    float rate;

    // collect data
    cout <<"Type a country: ";
    cin >> country;
    cout <<"\nEnter your gender(f for female, m for male, and o for others): ";
    cin >> gender;
    cout <<"\nEnter your zip code: ";
    cin >>zipcode;
    cout <<"\nEnter the tax rate: ";
    cin >>rate;

    // print the result
     cout <<"Entered country:\t"<<country;
     cout <<"\nSelected gender:\t"<<gender;
     cout <<"\n\nZip code:\t"<<zipcode;
     cout <<"\nTax rate:\t"<<rate;

    return 0;
}