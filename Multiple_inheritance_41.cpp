#include<iostream>
using namespace std;

class base1 {
     protected:
     int base1int;
     public:
     void set_base1int(int a){
         base1int=a;
     }
};
class base2 {
     protected:
     int base2int;
     public:
     void set_base2int(int a){
         base2int=a;
     }
};

class derived :public base1,public base2{
    public:
    void show(){
        cout<<"the of base 1 is "<<base1int<<endl;
        cout<<"the of base 2 is "<<base2int<<endl;
        cout<<"the sum of base 1 and 2 is "<<base2int+base1int<<endl;
    }
};

int main(){
    derived shashi;
    shashi.set_base1int(12);
    shashi.set_base2int(12);
    shashi.show();
    return 0;
}