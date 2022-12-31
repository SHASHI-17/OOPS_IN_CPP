#include<iostream>
using namespace std;

class baseclass{
public:
int var_base;
void display(){
    cout<<"the value of base class is "<<var_base<<endl;
}
};
class derived :public baseclass{
public:
int var2_derived;
void display(){
    cout<<"the value of base classs is "<<var_base<<endl;
    cout<<"the value of var2_derived is "<<var2_derived<<endl;
}
};
int main(){
    baseclass *shashi;
    baseclass obj_base;
    derived obj_derived;
    shashi=&obj_derived;

    shashi->var_base=34;
   // shashi->var2_derived; it'll throw an error
    shashi->display();

    derived *shashi2;
  //  shashi2=&obj_derived;
    shashi2->var2_derived=32;
    shashi2->var_base=45;
    shashi2->display();
   // shashi2->display();

    return 0;
}