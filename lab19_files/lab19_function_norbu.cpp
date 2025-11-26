/*
Tenzing Norbu
Nov 24, 2025
Files
*/

#include<iostream>
#include<fstream>

using namespace std;

// example 1: console input failure
// function to check if num values is the proper data type
void checknumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;

    if(cin.fail()){
        cout<<"Error! input dismatched data type!"<<endl;
        num = -1;
    }
    else    
        cout<<"Entered number = "<<num<<endl;

    // clear the cin state
    cin.clear();
    cin.ignore(10000, '\n');

    cout<<"END OF FUCNTION. Number = "<<num<<endl;
}

// example 2: console input to validate an input data type
float validatenumber(){
    float n;
    bool isNotValid = false;

    do{
        cout<<"Enter a nuber: ";
        cin>>n;
        isNotValid = cin.fail();
        cin.clear();
        cin.ignore(10000, '\n');
    }while(isNotValid);

    return n;
}

// example 3: set object for input and output
ifstream fin;
ofstream fout;

void readfile(string filename){
    fin.open(filename);

    // variable 'line' is used to store each line of samplefile.txt
    string line;

    // loop through each line in sample.txt
    int linecounter = 1;
    while(getline(fin, line)){
        cout<<"Line "<<linecounter<<"\t"<<line<<endl;
        linecounter++;
    }
    // close the file
    fin.close();
}
// example 4: writing a file
// fout will write in a new or existing file. fout overwrite all the content of an existing file
void writefile(string filename){
    fout.open(filename);

    // write some content
    for(int n = 1; n<=3; n++){
        fout<<"Good morning "<<n<<endl;
    }
    fout<<"ET 575"<<endl;
    // close the file
    fout.close();
}

// example 5: append data into a file
void appendfile(string filename){
    fout.open(filename, ios::app);

    // append
    fout<<"\n ----- APPEND ----- "<<endl;
    for(int n = 3; n>0; n--){
        fout<<n<<endl;
    }
    // write a single line
    fout<<"GAME OVER"<<endl;

    // close file
    fout.close();
}

// lab 19 exercise
void createfile(string filename){
    fout.open(filename);

    // writing some contents
    fout<<"This is my output file - Tenzing Norbu."<<endl;

    // close the file
    fout.close();
}
void fileappend(string filename, string msg){
    fout.open(filename, ios::app);
    for(int i = 1; i < 6; i++){
        fout<<"\n --- New Message ---"<<endl;;
    }
    fout.close();

}

void readMessage(string filename){
    fin.open(filename);
    string line;
    int linecounter = 1;
    while(getline(fin, line)){
        cout<<"Line "<<linecounter<<"\t"<<endl;
        linecounter++;
    }
    fin.close();
}
