#include<iostream>
#include<iomanip>
using namespace std;
// int main() {
//     int a=5,b=6;
//     cout<<"the value of a is "<<a<<"the value b is "<<b;
//     return 0;
// }
int c=45; //scope resolution ::
int main() {
    // int a,b,c;
    // cout<<"enter the value of a \n"; //insertion
    // cin>>a;                           //extraction
    // cout<<"enter the value of b \n";
    // cin>>b;
    // cout<<"the mul is :"<<a*b<<"ok4\n"<<endl;
    // c=a+b;
    // cout<<"the sum is "<<::c<<endl;

    int k=56;
    int &y=k;  //reference varialble
    cout<<y;

    // int x=45;
    // float u=7.7;
    // int c=(int)u; //typecasting
    // cout<<c;


    // int a=67,b=645,c=8778;
    // cout<<"the value of a without setw is :"<<a<<endl;   // setw is manipulator from iomanip
    // cout<<"the value of a without setw is :"<<b<<endl;
    // cout<<"the value of a without setw is :"<<b<<endl<<endl;

    // cout<<"the value of a with setw is :"<<setw(1)<<b<<endl;    
    // cout<<"the value of a with setw is :"<<setw(2)<<b<<endl;    
    // cout<<"the value of a with setw is :"<<setw(3)<<b<<endl;

    // for(int i=1;i<=10;i++){
    //     cout<<"6 X"<<i<<"="<<6*i<<endl;
    // }
}

