#include<iostream>
using namespace std;
class Employee{
    private:
    int a,b,c;
    public:
    int d,e;
    void getdata(int a1,int b1,int c1);
    void showdata(){
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
void Employee ::getdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1; 
}
int main(){
    Employee shashi;
    shashi.getdata(1,2,3);
    shashi.d=4;
    shashi.e=5;
    shashi.showdata(); 
    return 0;
}