#include<iostream>
using namespace std;

//  int product(int x,int y){
//      const int c=0;  // it will execute once and it will retain its value for the second call also
//      c+=1;
//     return x*y+c;
// }
inline  int product(int x,int y){
    return x*y;
}

float money_received(int money,float factor=1.04){
    return money*factor;
}

int main(){
    int x,y;
    cout<<"enter the value of a and b \n";
    cin>>x>>y;
    cout<<"the value will be "<<product(x,y)<<endl; 
    cout<<"the value will be "<<product(x,y)<<endl; 
    cout<<"the value will be "<<product(x,y)<<endl; 
    cout<<"the value will be "<<product(x,y)<<endl; 
    cout<<"the value will be "<<product(x,y)<<endl; 

    int money=100000;
    cout<<"if you have "<<money<<"in your bank account,you'll receive "<<money_received(money)<<"after one year"<<endl;// defualt argument
    cout<<"if you have are vip "<<money<<"in your bank account,you'll receive "<<money_received(money,1.1)<<endl;
    return 0;
}