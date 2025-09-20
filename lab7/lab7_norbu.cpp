/*
Tenzing Norbu
Sept 20, 2025
lab 7, branching mechanism using switch-case statement
*/
#include<iostream>
#include<string>

using namespace std;

int main() {
    int x,y;
    char _operator = ' ';
    float result;
    cout<<"Enter the first number: ";
    cin>>x;
    cout<<"Enter the second number: ";
    cin>>y;
    cout<<"Enter an arithmetic operator(+ , -, *, /, %, q to quit): ";
    cin>>_operator;

    switch(_operator)
    {
        case '+':
        result = x + y;
        cout<<"result: "<<x<<_operator<<y<<" = "<<result<<endl;
        break;

        case '-':
        result = x - y;
        cout<<"result: "<<x<<_operator<<y<<" = "<<result<<endl;
        break;

        case '*':
        result = x * y;
        cout<<"result: "<<x<<_operator<<y<<" = "<<result<<endl;
        break;

        case '/':
        if(y != 0) {
            result = x / y;
            cout<<"result: "<<x<<_operator<<y<<" = "<<result<<endl;
        }
        else 
            cout<<"zero '0' is not allowed as the second number. "<<endl;
            break;

        case '%':
        result = x % y;
        cout<<"result: "<<x<<_operator<<y<<" = "<<result<<endl;
        break;

        case 'q': case 'Q':
        cout<<"Exiting program"<<endl;
        return 0;

        default:
        cout<<"Error! invalid input!"<<endl;
        break;


    }
        

    return 0;
}