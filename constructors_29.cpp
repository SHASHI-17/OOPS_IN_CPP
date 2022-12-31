#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public :
    complex(void); // constrcutor

    void print_nums(){
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex :: complex(){
    a=10;
    b=9;
}

int main(){
    complex x;
    x.print_nums();
    return 0;
}