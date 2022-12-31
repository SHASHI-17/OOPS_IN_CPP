#include<iostream>
using namespace std;

class simple{
    int data1;
    int data2;
    public:
    simple(int x,int y=9){ // default argumemnt is int y=9,,if we wont give argument it will take automatically
        data1=x;
        data2=y;
    }
    void print();
};

void simple :: print(){
    cout<<"the numbers are "<<data1<<" and "<<data2<<endl;
}

int main(){
   simple x=simple(4);
    x.print();
    return 0;
}