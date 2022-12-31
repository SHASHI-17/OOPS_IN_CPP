#include<iostream>
#include<fstream>
using namespace std;

int main(){
    string st="shashi";
    string st2;
    // // opening files using constructors and writing it
    // ofstream out("file60.txt"); // write operation
    // out<<st; // printing inside the file

    // opening files using constructors and reading from  it
    ifstream in("file60b.txt"); // read operation
    // scanning inside the file
    //in>>st2; for 1st word only.
    getline(in,st2);// for full line 
    cout<<st2;

    return 0;
}