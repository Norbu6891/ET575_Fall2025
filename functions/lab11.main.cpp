/*
Tenzing Norbu
Oct 22, 2025
Introduction to functions 
*/

#include<iostream>
#include "lab11_functions.cpp"

using namespace std;

int main() {
    cout<<"\n ----- Example 1: void function ----- "<<endl;
    printhello();
    printhello();
    printhello();

    cout<<"\n ----- Example 2: void function with arguments ----- "<<endl;
    string username = "Anna";
    greeting("Peter");
    greeting(username);

    cout<<"\n ----- Example 3: void function with arguments ----- "<<endl;
    int savefive = returnfive();
    cout<<"The returning value is "<<savefive<<endl;
    savefive += 2;
    cout<<"The returning value after += 2 = "<<savefive<<endl;

    
    cout<<"\n ----- Example 4: code after the return ----- "<<endl;
    printsome();
    int n = somenumber();
    cout<<"Some number \t "<<n<<endl;
    
    cout<<"\n ----- Example 5: calculate area of square -----"<<endl;
    float area_square = areasquare(2.5);
    return;
    

    cout<<"\n ----- Example 6: calculate product of two numbers -----"<<endl;
    int p = product(2,3);
    cout<<"Product is "<<p<<endl;

    cout<<"\n ----- Example 7: calculate fahrenheit temperature -----"<<endl;
    double f = fah(12.5);
    printfah(f);

    cout<<"\n ----- Example 8: check a number ----"<<endl;
    string n = checknumber(3);


    return 0;
}