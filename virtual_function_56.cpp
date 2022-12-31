#include<iostream>
using namespace std;

class baseclass{
public:
int var_base=1;
void virtual display(){
    cout<<"theee value of base class is "<<var_base<<endl;
}
};
class derived :public baseclass{
public:
int var2_derived=2;
void display(){
    cout<<"the value of base classs is "<<var_base<<endl;
    cout<<"the value of var2_derived is "<<var2_derived<<endl;
}
};

int main(){
    baseclass *shashi1;
    baseclass obj1;
    derived obj2;
    shashi1=&obj2;

    shashi1->var_base=69;
    shashi1->display();    

    return 0;
}