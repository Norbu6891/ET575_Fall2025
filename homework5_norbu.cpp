/*
Tenzing Norbu
Nov 1, 2025
Homework 5, Program #1 
*/

#include<iostream>
#include<cmath>

using namespace std;



int speed() {
    int v;
    cout<<"Enter a positive number less than 100: ";
    cin>>v;
    if(v<100 && v>0){
        return v;
    }
    else 
        return 0;
}

int temp(){
    int tem;
    cout<<"Enter a temperature: ";
    cin>>tem;
    if(tem<=10 && tem>-90){
        return tem;
    }
    else
        return 0;

}
double windspeed(int v, int tem){
    double wci = 33 - (10*sqrt(v)-v+10.5)*(33-tem);
    return wci;
}
void prompt_result(double wci){
    cout<<"The wind index is "<<wci<<endl;
}

int main(){
cout<<" ------ Program 1 ----- "<<endl;
    int s = speed();
    float t = temp();
    prompt_result(windspeed(s,t));

    return 0;
}

