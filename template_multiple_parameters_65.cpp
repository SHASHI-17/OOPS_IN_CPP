#include<iostream>
using namespace std;

template<class T1,class T2>// we will pass futher ...for timebeing compiler will wait till main function to pass
class myclass{
    public:
    T1 data1;
    T2 data2;
    myclass(T1 a,T2 b){
        data1=a;
        data2=b;
    }
    
    void display(){
        cout<<"the value of data1 is "<<data1<<endl;
        cout<<"the value of data2 is "<<data2<<endl;
    }

};
int main(){
    myclass<int,int>obj(45,'A');
    obj.display();
    return 0;
}