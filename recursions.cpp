#include<iostream>
using namespace std;
int factoiral(int x) {
    if(x==1){
        return 1;
    }
    else{
        return x*factoiral(x-1);
    }
}

int fib(int x){
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return fib(x-1)+fib(x-2);
    }
}
int main(){
    int x;
    cout<<"enter the element \n";
    cin>>x;
    //cout<<"factorial of "<<x<<" is "<<factoiral(x)<<endl;
    cout<<"fibonacci series of of "<<x<<" is "<<fib(x)<<endl;
    return 0;
}