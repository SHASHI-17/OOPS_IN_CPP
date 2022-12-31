#include<iostream>
using namespace std;

class complex{
    int real,imaginary;
    public:
    void set_data(int x,int y){
        real=x;
        imaginary=y;
    }
    void getd_data() {
        cout<<"the value of real is "<<real<<endl;
        cout<<"the value of imaginary is "<<imaginary<<endl;
    }
};

int main(){
    complex shashi;
    //complex *ptr=&shashi;   // simple is the best as always
    complex *ptr=new complex;// explicit call
   //(*ptr).set_data(12,14);
    ptr->set_data(12,14);
    (*ptr).getd_data();


    // array of objects  
    complex *ptr1=new complex[4];
    ptr1->set_data(2,5);
    (ptr1+1)->set_data(6,9);
    ptr1->getd_data();
    (ptr1+1)->getd_data();

    return 0;
}