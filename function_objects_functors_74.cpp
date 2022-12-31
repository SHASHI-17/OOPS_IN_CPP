#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main(){
    int arr[]={1,67,89,78,56,5};
    sort(arr,arr+6);// ascending order
    sort(arr,arr+6,greater<int>()); // descending order
    for (int i = 0; i < 6; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}



/////////////////////////////////////////////////THE END BC/////////////////////////////////////////