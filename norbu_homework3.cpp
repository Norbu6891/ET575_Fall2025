/*
Tenzing Norbu
Oct 18, 2025
Homework 3, for loop
*/

#include<iostream>

using namespace std;

int main() {
    cout<<" -----> Program 1 <----- "<<endl;
    int num;
    int n, _negNumber = 0, _posNumber = 0, _zero = 0;
    for(n = 1; n<=10; n++) {
        cout<<"Enter number"<<"("<<n<<"): ";
        cin>>num;
    if(num>0) {
        _posNumber++;
        }
    else if(num<0) {
        _negNumber++;
        
        }
    else 
        _zero++;
        
    }
    cout<<"total positive numbers = "<<_posNumber<<endl;
    cout<<"total negative numbers = "<<_negNumber<<endl;
    cout<<"zeros = "<<_zero<<endl;

    cout<<" \n-----> Program 2 <----- "<<endl;
    
    int total_days, day, daily_sales;
    int total_sales = 0; 
    int avg_sales;
    cout<<"Enter the number of days: ";
    cin>>total_days;
    for(day = 1; day <= total_days; day++) {
        cout<<"Enter the total sales made on day "<<day<<": ";
        cin>>daily_sales;
        total_sales += daily_sales;
        avg_sales = total_sales/total_days;
    }
    cout<<"Total sales $"<<total_sales<<" for "<<total_days<<" days. "<<"Average daily sales $"<<avg_sales<<endl;



    return 0;
}