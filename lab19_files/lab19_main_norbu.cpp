/*
Tenzing Norbu
Nov 24, 2025
Files
*/

#include<iostream>
#include "lab19_function_norbu.cpp"

using namespace std;

int main(){
    cout<<"\n----- Example 1: consule input failure -----"<<endl;
    checknumber();

    cout<<"\n----- Example 2: consule input failure -----"<<endl;
    cout<<validatenumber()<<endl;

    cout<<"\n----- Example 3: reading a file -----"<<endl;
    readfile("samplefile.txt");

    cout<<"\n----- Example 4: writing a file -----"<<endl;
    writefile("outputfile.txt");

    cout<<"\n----- Example 5: append data into a file -----"<<endl;
    appendfile("samplefile.txt");

    cout<<"\n ------ EXERCISE -----"<<endl;
    cout<<"\n ----- Write a message ----"<<endl;
    createfile("data_user.txt");

    cout<<"\n ----- Append a new message ----"<<endl;
    fileappend("data_user.txt", "Display new message");

    cout<<"\n ----- Read the message ----"<<endl;
    readMessage("data_user.txt");





    return 0;
}
