#include<iostream>
using namespace std;

int main(){
    //basic example
    int x=4;
    int *ptr=&x;
    *ptr=87;
    cout<<"the value of ptr is "<<(**(&ptr))<<endl;

    //new keyword/operator(new)
    //int *pt=new int(40);
    float *pt= new float(40.56);
    cout<<"the value at address pt is "<<*pt<<endl;

    int *arr= new int[3]{1,2};
    *(arr+2)=30;
    // delete operator
    delete []arr;
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;


    return 0;
}