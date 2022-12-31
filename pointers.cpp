#include<iostream>
using namespace std;
int main(){
    int a=3;
    int *ptr1=&a;
    int **ptr2=&ptr1;

cout<<"the address of a is "<<&a<<endl;
cout<<"the address of a is "<<ptr1<<endl;
cout<<"the value of a is "<<*ptr1<<endl;

cout<<"the adress of a is "<<*ptr2<<endl;
cout<<"the value of a is "<<**ptr2<<endl;
    return 0;
}