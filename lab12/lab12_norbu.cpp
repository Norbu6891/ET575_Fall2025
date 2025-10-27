/*
Tenzing Norbu
Oct 24, 2025
*/

#include<iostream>
#include<cmath>

using namespace std;

int num = 8;

    void doSomething() {
    // global variable
    num = -20;
    cout <<"num in doSomething function: "<<num<<endl;
}
float hyp(float side1, float side2) {
    return sqrt(pow(side1, 2)+ pow(side2, 2));
    }

   //function to print hypotenuse
void printhyp(float s1, float s2, float h) {
    cout<<"The hypotenuse of side "<<s1<<" and "<<s2<<" is "<<h<<endl;
}


//global variable
#include"lab12_functions.cpp" 


int main() {
    
    cout<<"\n----- Example 1: local variables ----- "<<endl;
    int sum = add(3, 7) + add(1, 8); // sum is a local variable in the main() function
    cout<<"Total sum is \t"<<sum<<endl;

    cout<<"\n----- Example 2: global variables ----- "<<endl;
    cout<<"num original value = \t"<<num<<endl;
    doSomething();
    num = 5;
    cout<<"num in main function = \t"<<num<<endl;

    cout<<"\n----- Example 3: hypotenuse finding ----- "<<endl;
    float s1 = 2;
    float s2 = 3;
    float h = hyp(s1, s2);
    printhyp(s1, s2, h);

    return 0;
}