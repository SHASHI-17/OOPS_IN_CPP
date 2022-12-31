#include<iostream>
using namespace std;

class employee{
    public:
    int id;
    float salary;
    employee(){}
    employee(int inpid){
        id=inpid;
        salary=34;
    }
};

//class programmer :public employee{ //if we use public we access directly
class programmer : employee{ // in this case id became private we cant access it directly
        public:
        int languageCode=9;
        programmer(int inpid){
            id=inpid;
        }
        void getdata(){
            cout<<id<<endl;
        }
};

int main(){
    employee y(1),z;
    employee x=employee(1);
    cout<<x.salary<<endl;
    cout<<y.salary<<endl;

    programmer k(10);
    //cout<<k.id<<endl;
    cout<<k.languageCode<<endl;
    k.getdata();
    return 0;
}