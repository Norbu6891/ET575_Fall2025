/*
Homework 1: strings, string methods, and numerical variables
Student's name: Tenzing Norbu
*/
#include<iostream>
#include<string>
 
using namespace std;

int main() {
    string str1 = "Welcome to ";
    string str2 = "New York City ";
    string name = "";
    cout<<"Enter a name: ";
    cin>>name;

    string combo = str1 + str2 + name;
    cout<<"concatenated message: \t"<<combo<<endl;
    int msg_length = combo.length();

    cout<<"Message length: \t"<<msg_length<<endl;

    int index_ma = combo.find("ma");
    cout<<"Index of character 'ma': \t"<<index_ma<<endl;

    cout<<"Replace 'ma' with %--%: \t"<<combo.replace(25,4,"%--%")<<endl;


    cout<<" \n----- Activity 2 ----- "<<endl;
    float const pi = 3.14159;
    float radius = 0, height = 0;
    cout<<"Enter a radius: ";
    cin>>radius;
    cout<<"Enter a height: ";
    cin>>height;
    cout<<"radius: "<<radius<<"\theight: "<<height<<endl;
    cout<<"Is the radius greater than height?\t"<<(radius>height)<<endl;
    cout<<"Is the radius equal to height?\t"<<(radius==height)<<endl;
    float triple_height = height * height * height;
    cout<<"Triple height = \t"<<triple_height<<endl;
    float increment_radius = 5 * radius;
    cout<<"Increased radius by 5 = \t"<<increment_radius<<endl;
    cout<<"Is the radius not equal to and greater than height? "<<(radius != height && radius > height)<<endl;
    float volume = pi*increment_radius*increment_radius*triple_height;
    cout<<"The volume of a right cylinder with radius "<<increment_radius<<"cm and height "<<triple_height<<"cm is = "<<volume<<"cm^3";

    return 0;
}