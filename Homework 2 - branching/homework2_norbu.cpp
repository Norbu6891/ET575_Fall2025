/* 
Homework 2: Branching 
Tenzing Norbu
Sept 28, 2025
*/

#include<iostream>
#include<string>

using namespace std;

int main() {
    cout<<" -----  Program 1: age eligibility ----- "<<endl;
    int age;
    cout<<"Enter your age: ";
    cin>>age;

    if(age < 13) {
        if(age < 1) {
            cout<<"Invalid age. Please enter a valid age."<<endl;
            return 0;
        }
        cout<<"Not eligible for any activities."<<endl;
    }
    else if(age >= 13 && age <= 17) {
        cout<<"Eligible for youth activities."<<endl;
    }
    else if(age >= 18 && age <= 64) {
        cout<<"Eligible for adult activities."<<endl;
    }
    else if(age >= 65 && age <=120) {
        cout<<"Eligible for senior activities."<<endl;
    }
    else
        cout<<"Invalid age. Please enter a valid age."<<endl;


    cout<<" -----  Program 2: nested conditional statement  ----- "<<endl;

    int x, y;
    int sum;

    cout<<"Enter two numbers: ";
    cin>>x>>y;

    sum = x + y;
    if(sum < 0) {
        cout<<"False alarm! The sum is "<<sum<<endl;
    }
    else if(sum >= 1 && sum <= 100) {
        if(sum % 5 == 0) {
            cout<<sum<<" is a pentagon"<<endl;
        }
        else if(sum%2 != 0) {
            cout<<sum<<" is an odd guess"<<endl;
        }
     }
    else if(sum >= 101 && sum <= 200) {
        cout<<"The new lucky number is "<<sum<<endl;
    }
    else if(sum >= 201 && sum <= 999) {
        cout<<sum<<" is a dreaming number"<<endl;
    }
    else 
        if(sum%2 == 0) {
            cout<<sum<<" approaches to the infinite evenly!"<<endl;
        }
        else if(sum >= 2000) {
            cout<<sum<<" approaches to the infinite and beyond!"<<endl;
        }

    cout<<" -----  Program 3: temperature converter  ----- "<<endl;

    int option, tmp;
    float result;
    cout<<"\n1. Celsius to Fahrenheit \n2. Fahrenheit to Celsius \n3. Kelvin to Celsius \n4. Kelvin to Fahrenheit \n5. Exit"<<endl;
    cout<<"\nSelect an option to convert the temperature from the list above: ";
    cin>>option;

    switch(option)
    {
        case 1:
        cout<<"Enter the temperature to be converted: ";
        cin>>tmp;
        result = tmp*(9/5)+32;
        cout<<tmp<<" Celsius is equal to "<<result<<" Fahrenheit"<<endl;
        break;
        
        case 2:
        cout<<"Enter the temperature to be converted: ";
        cin>>tmp;   
        result = (tmp-32)*(5/9);
        cout<<tmp<<"Fahrenheit is equal to "<<result<<" Celsius"<<endl;
        break;

        case 3:
        cout<<"Enter the temperature to be converted: ";
        cin>>tmp;
        result = tmp - 273.15;
        cout<<tmp<<"Kelvin is equal to "<<result<<" Celsius"<<endl;
        break;

        case 4:
        cout<<"Enter the temperature to be converted: ";
        cin>>tmp;
        result = (tmp - 273.15)*(9/5)+32;
        cout<<tmp<<" Kelvin is equal to "<<result<<" Fahrenheit"<<endl;
        break;

        case 5:
        cout<<"Exiting the program!"<<endl;
        break;

        default:
        cout<<"Invalid input! Please enter a number between 1-5 "<<endl;
        break;

    }

    return 0;
}