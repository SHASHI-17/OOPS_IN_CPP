#include<iostream>
using namespace std;

// template<class t1,class t2>
// float average(t1 a,t2 b){
//     float k=(a+b)/2.0;
//     return k;
// }
template<class T>
void swaap(T* a,T* b){
    *a=*a^*b;
    *b=*a^*b;
    *a=*a^*b;
}
int main(){
   // float b=average(5,8);
    // printf("ther average is %.2f",a);
  //  cout<<b<<endl;
    int a=4,b=6;
    swaap(&a,&b);
    cout<<"the value of a nd b is "<<a<<" and "<<b;
    return 0;
}