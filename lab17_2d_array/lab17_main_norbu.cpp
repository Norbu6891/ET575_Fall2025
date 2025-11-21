/*
Tenzing Norbu
Nov 12, 2025
lab 17: 2d array
*/

#include <iostream>
#include "lab17_function_norbu.cpp"

using namespace std;

int main() {
    cout<<"\n --- example 1: declaring a 2D array --- \n"<<endl;
    array_dec();

    cout<<"\n --- example 2: print each value in a 2d array --- \n"<<endl;
    const int NUMCOLS = 5;
    int ar[3][NUMCOLS]={
        {5, 10}, 
        {-2, -9},
        {6}
    };
    print2d(ar, 3);

    cout<<"\n --- example 3: populate a 2d array --- \n"<<endl;
    // declare a 2d array
    int arr_num[2][3];
    // call the function to populate the array
    populate_array(arr_num, 2, 3);
    print_array(arr_num, 2, 3);

    cout<<"\n --- example 4: sum all elements in a 2d array --- \n"<<endl;
    
    
    int s = sum_all(arr_num, 2, 3);
    
    cout<<"The total sum "<<s<<endl;

    cout<<"\n --- example 5: odd numbers in a 2D array--- \n"<<endl;
    int c = total_odd(arr_num, 2, 3);
    cout<<"Total odd numbers = "<<c<<endl;

    char again = 'y';
    while (again == 'y' || again == 'Y'){

    int group[3][4];
    srand(time(nullptr)); // generates new random numbers on every new run
    populate_randomnums(group, 3, 4);

    for(int r = 0; r < 3; r++){
        for(int c = 0; c < 4; c++){
            cout<<group[r][c]<<"\t";
        }
        cout<<endl;
    }
    int avg = average(group, 3, 4);
    cout<<"average: "<<avg<<endl;

    cout<<"\nAnother run? ";
    cin>>again;

}    
    


    


    return 0;
}