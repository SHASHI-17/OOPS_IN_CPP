#include<iostream>
#include<string.h>
using namespace std;

typedef struct emp
{
    int id;
    char *name;
    float salary;
}kira;

typedef union money{
    int rice;
    float salary;
    char y='A';
}u;

int main(){
//     kira emp1;
//     emp1.id=123;
//     strcpy(emp1.name,"shashi");
//     emp1.salary=56.455;
// cout<<"id is "<<emp1.id<<endl;
// cout<<"name  is "<<emp1.name<<endl;
// cout<<"salary  is "<<emp1.salary<<endl;

// u k;
// k.rice=45;
// k.salary=45.34;   // union
// cout<<k.salary;

enum meal{breakffast,lunch,dinner}; // enum become datatype
cout<<breakffast<<endl;
cout<<lunch<<endl;
cout<<dinner<<endl;

meal m1=dinner;
cout<<m1;
    return 0;
}