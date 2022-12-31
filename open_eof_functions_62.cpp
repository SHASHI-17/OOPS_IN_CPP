#include<iostream>
#include<fstream>
using namespace std;

int main(){
    // ofstream shashi;
    // shashi.open("file60.txt");
    // shashi<<"this is tyme "<<endl;
    // shashi<<"this is ee "<<endl;
    // shashi<<"this is merg "<<endl;
    // shashi.close();


    string st2;
    ifstream shashi2;
    shashi2.open("file60b.txt");
  //  getline(shashi2,st2);
   // cout<<st2;
   while(shashi2.eof()==0){
       getline(shashi2,st2);
       cout<<st2<<endl;
   }
    shashi2.close();
    return 0;
}