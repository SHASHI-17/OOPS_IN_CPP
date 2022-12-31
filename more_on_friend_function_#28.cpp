// #include<iostream>
// using namespace std;
// class Y;
// class X{
//     int data;
//     public:
//     void set_value(int value){
//         data=value;
//     }
//         friend void sum(X,Y);
// };
// class Y{
//     int num;
//     public:
//     void set_value(int value){
//         num=value;
//     }
//     friend void sum(X,Y);
// };

// void sum(X o1,Y o2){
//     cout<<"sum of data of X and Y is "<<o1.data+o2.num;
// }

// int main(){
//     X a;
//     a.set_value(5);
//     Y b;
//     b.set_value(5);

//     sum(a,b);
//     return 0;
// }



#include<iostream>
using namespace std;
class c2;
class c1{
    int val;
    public:
    friend void exchange(c1 &,c2 &);
    void indata(int a){
        val=a;
    }
    void display(){
        cout<<val<<endl;
    }
};
class c2{
    int val2;
    public:
    friend void exchange(c1 &,c2 &);
    void indata(int a){
        val2=a;
    }
    void display(){
        cout<<val2<<endl;
    }
};

// void exchange(c1 & x,c2 & y){  // x and y can be anything
//     int temp=x.val;
//     x.val=y.val2;
//     y.val2=temp;
// }

void exchange(c1 &x,c2 &y){
    x.val=x.val ^ y.val2;
    y.val2=x.val ^ y.val2;
    x.val =x.val ^ y.val2;
}

int main(){
    c1 a;
    c2 b;
    a.indata(2);
    b.indata(3);

    exchange(a,b); 

    a.display();
    b.display();
    return 0;
}