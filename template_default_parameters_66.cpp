#include<iostream>
using namespace std;

template<class T1=int,class T2=float,class T3=char>

class shashi{
    public:
    T1 a; 
    T2 b;
    T3 c;
    shashi(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
    }
};

int main(){
    shashi<> s1(4,4.4,'A');
    s1.display();
    cout<<endl;
    shashi<int ,float,char> s2('a',4.4,76);
    s2.display();
    return 0;
}