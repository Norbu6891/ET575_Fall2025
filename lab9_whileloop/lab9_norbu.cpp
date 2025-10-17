/*
Tenzing Norbu
Oct 16, 2025
lab 9, while and do-while loop
*/

#include<iostream>

using namespace std;

int main() {
    
    cout<<"\n ----- example 1: while loop as a counter -----"<<endl;
    // print from 1 to 5
    int n = 1;
    while (n<=5) {
        cout<<n<<endl;
        n++;
    }

    cout<<"\n ----- example 2: while loop as a counter -----"<<endl;
    // print from 3 to 0
    int m = 3;
    while(m>=0) {
        cout<<m<<"\t";
        m--;
    }
    cout<<endl;

    cout<<"\n ----- example 3: while loop as a decrement counter -----"<<endl;
    m = 3;
    while (m-- >= 0) {
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n ----- example 4: while loop as a decrement counter -----"<<endl;
    m = 3;
    while (--m >= 0) {
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n ----- example 5: while loop to validate a number -----"<<endl;
    int num;
    cout<<"Enter a number between 10 and 20 inclusive ";
    cin>>num;

    // if the number is not between 10 and 20, use a while loop to recollect the number
    while(!(num>=10 && num<=20)) {
        cout<<"Invalid. Enter a number between 10 and 20 again: ";
        cin>>num;
    }
    cout<<"The entered number is "<<num<<endl;

    cout<<"\n ----- example 6: do-while loop to validate a number -----"<<endl;
    
    do {
    cout<<"Enter a number between 10 and 20 inclusive ";
    cin>>num;
    }
    // if the number is not between 10 and 20, use a while loop to recollect the number
    while(!(num>=10 && num<=20));
        cout<<"End of do-while loop. Entered number = "<<num<<endl;
    
    cout<<"\n ----- example 7: do-while loop to validate a number -----"<<endl;
    // do-while to run the program again
    // program checks if a number is positive, negative, or zero.
    int number;
    char choice = 'y';
    do{
        cout<<"Enter a number: ";
        cin>>number;
        if(number == 0) {
            cout<<"The number is zero"<<endl;
        }
        else if(number>0) {
            cout<<number<<" is positive"<<endl;
        }
        else{
            cout<<number<<" is negative"<<endl;
        }
        cout<<"do you want to check another number? ";
        cin>>choice;
    }
    while(choice == 'y' || choice == 'Y');

    cout<<"\n ----- example 8: do-while loop set to True -----"<<endl;
    n = 0;
    int sum_positive = 0;
    do{
        cout<<"Enter a positive number: ";
        cin>>n;
        if(n>=0) {
            sum_positive += n;
        }
        else {
            break;
        }
    }
    while(true);

    cout<<"The total sum is "<<sum_positive<<endl;

    cout<<"\n ----- example 9: withdraw from a bank account -----"<<endl;

    int balance = 1000;
    int w = 0;
    while(true) {
        cout<<"Enter the amount you want to withdraw: ";
        cin>>w;

        if(w > balance) {
            cout<<"Can't be withdrawn "<<w<<".Enter another amount.";
        }
        else{
            balance -= w;
            cout<<"Withdrawn $"<<w<<" The new balance $"<<balance<<endl;
            break;
        }
    }
    cout<<"Thank you for banking with us! "<<endl;

    cout<<"\n ----- example 10: continue statement -----"<<endl;
    // while loop to print and add numbers fro 0 to 10, and add all the numbers except 5
    int sum_all = 0;
    int x = 0;
    while(x++ < 10) {
        if(x==5) {
            continue;
        }
        sum_all += x;
        cout<<x<<"\t";
    }
    cout<<"The total sum of numbers = "<<sum_all<<endl;

    cout<<"\n ----- LAB EXERCISE -----"<<endl;

    int numero = 0;
    int sum = 0;
    
    do{
        cout<<"Enter a number: ";
        cin>>numero;
        if(numero == 0) {
            break;
        }
        else{
            sum += numero;
        }
    }
    while(true);

    cout<<"The total sum is "<<sum<<endl;


    return 0;
}