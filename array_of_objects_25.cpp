// #include<iostream>
// using namespace std;

// class employee{
//     int id,salary;
//     public:
//     void set_id(){
//         int salary=122;
//         cout<<"enter your id "<<endl;
//         cin>>id;
//     }
//     void get_id(){
//         cout<<"your id is "<<id<<endl;
//     }
// };

// int main(){
//     employee fb[4];
//     int count;
//     cout <<"enter the size of your array "<<endl;
//     cin>>count;
//    for (int i = 0; i < count; i++)
//    {
//         fb[i].set_id();
//         fb[i].get_id();
//    }
   
//     return 0;
// }


#include<iostream>
using namespace std;

class complex{
    int a;
    int b;

    public: 
        void setData(int v1, int v2){
            a = v1;
            b = v2;
        }

        void setDataBySum(complex o1, complex o2){
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(){
            cout<<"Your complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int main(){
    complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    c3.setDataBySum(c1, c2);
    c3.printNumber();
    return 0;
}