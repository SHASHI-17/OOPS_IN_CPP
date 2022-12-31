#include<iostream>
using namespace std;

class shop{
    int id;
    float price;
    public:
    void setdata(int a,float b){
        id=a;
        price=b;
    }
    void getdata(){
        cout<<"code of the item is "<<id<<endl;
        cout<<"price of the item is "<<price<<endl;
    }
};

int main(){
    int count,p;
    float q;
    cout<<"enter the size \n";
    cin>>count;
    shop *shashi=new shop [count];
    shop *ptr=shashi;// no need
    // for (int i = 0; i < count; i++)
    // {
    //     cout<<"enter the id and price "<<i+1<<endl;
    //     cin>>p>>q;
    //     shashi->setdata(p,q);
    //     shashi++;
    // }
    for (int i = 0; i <count; i++)
    {
        cout<<"enter the id and price "<<i+1<<endl;
        cin>>p>>q;
        (shashi+i)->setdata(p,q);
       // shashi++;
    }
    // for (int i = 0; i < count; i++)
    // {
    //     ptr->getdata();
    //     ptr++;
    // }
    for (int i = 0; i <count; i++)
    {
        (shashi+i)->getdata();
       // shashi++;
    }
    
    return 0;
}