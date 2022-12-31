#include<iostream>
using namespace std;

class base1{
    public:
    void greet(){
        cout<<"hola"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"haan bhai"<<endl;
    }
};

class derived : public base1,public base2{
        public:
        void greet(){
            base2::greet();
        }
};

class b{
    public:
    void say(){
        cout<<"hello"<<endl;
    }
};
class d: public b{
    public:
    void say(){
        cout<<"hello world"<<endl;
    }
};

int main(){
   // derived a;
    //a.greet();
    b s;
    s.say();
    d a;
    a.say();
    return 0;
}