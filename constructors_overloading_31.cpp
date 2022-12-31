#include<iostream>
using namespace std;

class complex{
    int x;
    int y;
    public:
    complex(int a,int b){
        x=a;
        y=b;
    }

    complex(int a){
        x=a;
        y=0;
    }

      void display(){
        cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
    }
    complex(){
        x=0;
        y=0;
    }
};

int main(){
    complex a=complex(4,5);
    a.display();

    complex b(2);
    b.display(); 

    complex c=complex();
    c.display();
    return 0;
}