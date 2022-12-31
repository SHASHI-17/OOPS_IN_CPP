#include<iostream>
using namespace std;

template <class T> // it will just fill the datatype nd give to the compiler in the main function

class vector{
    public:
    T *arr;
    int size;
    vector(int m){
        size=m;
        arr=new T[size];
    } 
    T dotproduct(vector v){
        T d=0;
        for (int i = 0; i < size; i++)
        {
            d+=arr[i] * v.arr[i];
        }
        return d;
    }
};

int main(){
    vector <float>v1(3); // 4*1 +3*0 +1*1=5
    v1.arr[0]=4.4;
    v1.arr[1]=3;
    v1.arr[2]=1;
    vector <float>v2(3);
    v2.arr[0]=1.6;
    v2.arr[1]=0;
    v2.arr[2]=1;

    float c=v1.dotproduct(v2);
    cout<<c<<endl;
    return 0;
}