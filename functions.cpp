#include<iostream>

using namespace std;
void swap_address(int *x,int *y){
    *x=*x^*y;
    *y=*x^*y;
    *x=*x^*y;
}
 int & refernece(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
    return a;
}
int main(){
    // int a=3,b=4;
    // cout<<"swapped value is "<<a<<b<<endl;
    //  // swap_address(&a,&b);
    //  refernece(a,b)=14;
    // cout<<"swapped value is "<<a<<" "<<b<<endl;
    // cout<<"dekhte hai"<<refernece(a,b)<<endl;
    return 0;
}