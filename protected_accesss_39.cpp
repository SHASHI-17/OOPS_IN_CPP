#include<iostream>
using namespace std;

class base{
    protected: 
    int a=7;
    private:
    int b;
};

class derive : protected base{
    public:
    void sa(){
        cout<<a;
    }
};

int main(){
    derive a;
    a.sa();
    return 0;
}