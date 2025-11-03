/*
Tenzing Norbu
Nov 1, 2025
Homework 5, Program #2
*/

#include<iostream>
using namespace std;

int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}
int inOrder(int num1, int num2, int num3){
    if(num1 >= num2 && num2 >= num3) {
        return 1;
    }
    else{
        return 0;
    }
}
void order_result(bool desc_order){
    if(desc_order)
        cout<<"The numbers are in descending order."<<endl;
    else    
        cout<<"The numbers are not in descending order."<<endl;
}
void runProgram(int num1, int num2, int num3, bool desc_order) {
    order_result(desc_order);

    char option;
    cout<<"Do you want to run the program again? ";
    cin>>option;

    if(option == 'Y' || option == 'y') {
        int n1 = collectNumber();
        int n2 = collectNumber();
        int n3 = collectNumber();
        bool result = inOrder(n1, n2, n3);
        order_result(result);

        cout<<"Do you want to run the program again?";
        cin>>option;
    }
    else
        cout<<"Program ended."<<endl;
}

int main(){
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1, num2, num3);
    runProgram(num1, num2, num3, desc_order);
    return 0;
}