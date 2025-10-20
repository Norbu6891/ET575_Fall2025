/*
Tenzing Norbu
Oct 19, 2025
Homework 4 - loops 
*/

#include<iostream>

using namespace std;

int main() {
        cout<<" ------> Question 1 <----- "<<endl;
        int num;
        do {
            cout<<"\nEnter a number: ";
            cin>>num;
            if(num<10) {
                cout<<num<<" is invalid!. Please enter a number greater than 10: "<<endl;
                }
            }

        while(num<10);
        cout<<num<<" is a valid number!"<<endl;

        cout<<" ------> Question 2 <----- "<<endl;
        
        int n1, n2;
        int i;
        cout<<"\nEnter two numbers: ";
        cin>>n1>>n2;
        if(n1 <= n2) {
            i = n1;
            cout<<"RESULT = ";
            while(i<=n2){
                cout<<i<<" ";
                i++;
            }
            cout<<endl;
            }
        else if(n1>n2) {
            i = n2;
            cout<<"RESULT = ";
            while(i<=n1){
                cout<<i<<" ";
                i++;
            }
            cout<<endl;
        }
        int dimension = 11;
        for (int row = 0; row < dimension; row++) {
            for(int col = 0; col < dimension; col++) {
                if((col == 3 && row >= 2 && row <= 10) || (col == 4 && row == 2) || (row ==3 && col >= 3 && col <= 6) || (row == 4 && col >=3 && col <= 6)) {
                    cout<<"# ";
                }
                else
                    cout<<". ";
            }
        }
        cout<<endl;
       

     return 0;
}