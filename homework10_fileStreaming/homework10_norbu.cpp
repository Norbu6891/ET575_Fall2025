/*
Tenzing Norbu
Dec 1, 2025
Homework 10, File Streaming
*/

#include<iostream>
#include<fstream>
using namespace std;

ifstream fin;
ofstream fout;

void readfile(string filename){
    fin.open(filename);

    string line;
    while(getline(fin, line)){
        cout<<line<<endl;
    }
    fin.close();
}

void countfile(string filename, string studentName){
    fin.open(filename);

    int wordCount = 0;
    string word;
    while(fin>>word){
        wordCount++;
    }
    fin.close();

    ofstream fout("wordcounts.txt");
    fout<<studentName<<endl;
    fout<<"Total number of words: "<<wordCount<<endl;

    fout.close();
}
void countEarth(string filename){
    fin.open(filename);
    int earthCount = 0;
    string word;
    while(fin>>word){
        if(word == "Earth"){
            earthCount++;
        }
    }
    fin.close();
    ofstream fout("wordcounts.txt", ios::app);
    fout<<"The word 'Earth' appears "<<earthCount<<" times in the document."<<endl;

    fout.close();
}

int main(){
    string filename = "remembering_earth.txt";
    string outputFile = "wordcounts.txt";

    readfile(filename);

    countfile(filename, "Tenzing Norbu");

    countEarth(filename);


}