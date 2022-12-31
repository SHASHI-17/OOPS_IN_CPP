#include<iostream>
#include<fstream>
using namespace std;

int main(){
    
    string st1,st2;
    ofstream shashi("file60.txt");
    cout<<"enter your name"<<endl;
    cin>>st1;
    shashi<<"my name is "+ st1;
    shashi.close();

    ifstream shashi1("file60.txt");
   // shashi1>>st2;
   getline(shashi1,st2);
    cout<<"the content of this file is : "<<st2<<endl;
    shashi1.close();
    return 0;
}