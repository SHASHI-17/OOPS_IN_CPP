#include<iostream>
using namespace std;

int main(){
    // int aarr[4]={1,2,3};
    // aarr[3]=4;
    // cout<<aarr[0]<<endl;
    // cout<<aarr[1]<<endl;
    // cout<<aarr[2]<<endl;
    // cout<<aarr[3]<<endl;
int arr[100];
for(int i=0;i<5;i++){
    cout<<"enter the elements of "<<i+1<<endl;
    cin>>arr[i];
}
int *ptr=arr;
for(int i=0;i<5;i++){
    cout<<"the values of "<<i+1<<" is "<<*(ptr)<<endl;
    ptr++;
}

    return 0;
}