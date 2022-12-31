#include<iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    void set_number(int v1, int v2){
        a=v1;
        b=v2;
    }
    friend complex sumcomplex(complex o1,complex o2);
    void print_nums(){
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};


  complex sumcomplex(complex o1,complex o2){
    complex o3;
    o3.set_number((o1.a+o1.b),(o2.a+o2.b));
    return o3;
}


int main(){
    complex c1,c2,sum;
    c1.set_number(1,5);
    c1.print_nums();

    c2.set_number(5,8);
    c2.print_nums();
    
    sum=sumcomplex(c1,c2);
    sum.print_nums();
    return 0;
}