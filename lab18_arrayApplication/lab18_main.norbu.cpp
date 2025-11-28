/*
Tenzing Norbu
Nov 28, 2025
Array application
*/

#include<iostream>
#include"lab18_function_norbu.cpp"

using namespace std;

int main(){
    int arr[5];
    int count = collectnumber(arr);

    double average = avg(arr, count);
    cout<<"Average = "<<average<<endl;

    
    int closest = findClosest(arr, count, average);

    printresult(average, closest);
    return 0;
}