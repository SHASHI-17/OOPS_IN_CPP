#include<iostream>
using namespace std;

class number{
    int x;
    public:
    number(){
        x='A';
    }
    number(int a){
        x=a;
    }
    number(number &obj){
        x=obj.x;
        cout<<"copy constructor called !!"<<endl;
    }

    void display(){
        cout<<"your number is "<<x<<endl;
    }
};

int main(){
    number x,y,z(23),z2;
    x.display();
    y.display();
    z.display();

    number z1(x); // copy constructor will be invoked.
    z1.display();

    z2=z; // copy constructor will not be invoked.
    z2.display();

    number z3=z;// copy constructor will be invoked.
    z3.display();
    return 0;
}