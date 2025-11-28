/*
Tenzing Norbu
Nov 28, 2025
Array application
*/
#include<iostream>
using namespace std;

int collectnumber(int arr[5]){
    int num;
    int count = 0;
    
    while(count < 5){
        cout<<"Enter a number: ";
        cin>>num;
        
        if(num <= 0){
            break;
        }
        arr[count] = num;
        count++;
    }
    return count;    
}

double avg(int arr[], int count){
    int sum = 0;
    for(int i = 0; i < count; i++){
        sum += arr[i];
    }
    double average = sum/count;
    return average;
}
int findClosest(int arr[], int count, double avg) {
    int closest = arr[0];               
    double diff = arr[0] - avg;         

    if (diff < 0) diff = -diff;         

    for (int i = 1; i < count; i++) {
        double currentDiff = arr[i] - avg;
        if (currentDiff < 0) 
        currentDiff = -currentDiff;   // if the value is negative

        if (currentDiff < diff) {      
            diff = currentDiff;
            closest = arr[i];
        }
    }
    return closest;
}

void printresult(double average, int closest){
    cout<<"The closest number to average "<<average<<" is "<<closest<<"."<<endl;
}
