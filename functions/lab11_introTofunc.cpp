/*
Tenzing Norbu
Oct 23, 2025
Intro to functions
*/

#include <iostream>
using namespace std;

bool even(int number) {
    return(number %2 == 0);

}
void printResult(int number, bool result) {
    cout<<"Is "<<number<<" even? ";
    if(result)
        cout<<"true";
    else
        cout<<"false";

    cout<<endl;
}
int main() {
    int num;
    cout<<"Enter a  number:";
    cin>>num;

    bool result = even(num);
    printResult(num, result);

    return 0;
}
