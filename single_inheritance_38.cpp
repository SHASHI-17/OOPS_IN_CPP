//////////////////////////////////////////////////////////PUBLIC///////////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;

// class base {
//     int data1; // private by default
//     public:
//     int data2;
//     void setdata();
//     int getdata1();
//     int getdata2();
// };

// void base ::setdata(){
//     data1=10;
//     data2=20;
// }

// int base :: getdata1(){
//     return data1;
// }

// int base :: getdata2(){
//     return data2;
// }

// class derive : public base{ // class has been derived publically
//     int data3;
//     public:
//     void process();
//     void display();
// };

// void derive ::process(){
//     data3=data2 * getdata1();
// }

// void derive ::display(){
//     cout<<"the value of data 1 is "<<getdata1()<<endl;
//     cout<<"the value of data 2 is "<<data2<<endl;
//     cout<<"the value of data 3 is "<<data3<<endl;
// }

// int main(){
//     derive der;
//     der.setdata();
//     der.process();
//     der.display();
//     return 0;
// }


//////////////////////////////////////////////////////////PRIVATE//////////////////////////////////////////////////////////////////

#include<iostream>
using namespace std;

class base {
    int data1; // private by default
    public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};

void base ::setdata(){
    data1=10;
    data2=20;
}

int base :: getdata1(){
    return data1;
}

int base :: getdata2(){
    return data2;
}

class derive : private base{ // class has been derived publically
    int data3;
    public:
    void process();
    void display();
};

void derive ::process(){
    setdata();
    data3=data2 * getdata1();
}

void derive ::display(){
    cout<<"the value of data 1 is "<<getdata1()<<endl;
    cout<<"the value of data 2 is "<<data2<<endl;
    cout<<"the value of data 3 is "<<data3<<endl;
}

int main(){
    derive der;
    der.process();
    der.display();
    return 0;
}