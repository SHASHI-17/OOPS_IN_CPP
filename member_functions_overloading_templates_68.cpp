#include<iostream>
using namespace std;

template<class T>
class shashi{
    public:
    T data;
    shashi(T a){
        data=a;
    }
    void display();
};

template<class T>
void shashi<T> :: display(){
    cout<<data<<endl;
}


// template overloading
void func(int a) {
    cout<<"i am first func() "<<a<<endl;
}

template<class T>
void func(T a) {
    cout<<"i am templatised  func() "<<a<<endl;
}

int main(){
    // shashi<int> obj(5);   // always exact match will take the highest priority
    // obj.display();
    func(7);
    func<int>(6);
    return 0;
}