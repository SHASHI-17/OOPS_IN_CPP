#include<iostream>
using namespace std;
/*
case 1:
class b:public a{
    order of execution will be --> first A() then B()
};
case 2:
class A :public B,public C{
    order of execution will be -->first B() then C() then A()
};
case 3:
class A : public B,public virtual C{
    order of execution will be -->first C() then B() then A()
};
*/

class base1{
    int data;
    public:
     base1(int a){
        data=a;
        cout<<"constructor called of base 1"<<endl;
    }
    void print_data0(){
        cout<<"the value of data1 is "<<data<<endl;
    }
};
class base2{
    int data2;
    public:
     base2(int a){
        data2=a;
        cout<<"constructor called of base2"<<endl;
    }
    void print_data1(){
        cout<<"the value of data2 is "<<data2<<endl;
    }
};

class derived :public base2,public virtual base1{ // if  we change order it will impact in the output
    int derive1,derive2;
    public:
    derived(int a,int b,int c,int d) :base1(a) ,base2(b){
        derive1=c;
        derive2=d;
        cout<<"constructor called of derived class"<<endl;
    }
    void print_data2(){
        print_data0();
        print_data1();
        cout<<"the value of derive1 is "<<derive1<<endl;
        cout<<"the value of derive2 is "<<derive2<<endl;
    }
};
int main(){
    derived shashi=derived(1,2,3,4);
    shashi.print_data2();
    return 0;
}