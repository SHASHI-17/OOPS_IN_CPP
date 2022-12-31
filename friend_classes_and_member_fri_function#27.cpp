#include<iostream>
using namespace std;
//forward declartion..compiler will see further the entire defination
class complex;
class calculator{
    public:
    // int add(int a,int b){
    //     return a+b;
    // }

    int sum_real_complex(complex ,complex );
    int sum_comp_complex(complex ,complex );
};


class complex{ // defination is here
    int a;
    int b;
    // individual declartion
    // friend int calculator :: sum_real_complex(complex o1,complex o2);
    // friend int calculator :: sum_comp_complex(complex o1,complex o2);

    // making the whole class a friend
    friend class calculator;
    public:
    void set_number(int v1, int v2){
        a=v1;
        b=v2;
    }
    void print_nums(){
        cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

int calculator :: sum_real_complex(complex o1,complex o2){
        return (o1.a + o2.a);// for accessing a nd b from the complex function
    }
int calculator :: sum_comp_complex(complex o1,complex o2){
        return (o1.b + o2.b);
    }
int main(){
    complex c1,c2;
    calculator calc;
c1.set_number(1,5);
c1.print_nums();
c2.set_number(5,8);
c2.print_nums();

int result=calc.sum_real_complex(c1,c2);
cout<<"the sum of the real part is "<<result<<endl;

 result=calc.sum_comp_complex(c1,c2);
cout<<"the sum of the complex  part is "<<result<<endl;
    return 0;
}