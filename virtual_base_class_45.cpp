#include<bits/stdc++.h>
using namespace std;

class student{ // without virtual student member function will be ambigious..and it will end with error
    protected:
    int roll_no;
    public:
    void set_roll(int r){
        roll_no=r;
    }
    void print_num(){
        cout<<"your roll number is "<<roll_no<<endl;
    }
};

class test: virtual public student{
    protected:
    float maths;
    float physics;
    public:
    void set_marks(float m1,float m2){
        maths=m1;
        physics=m2;
    }
    void print_marks(){
        cout<<"your marks in physics and maths are  "<<physics<<" and "<<maths<<endl;
    }
};

class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float a){
        score=a;
    }
    void print_score(){
        cout<<"your score is "<<score<<endl;
    }
};

class result:public sports,public test{
    protected:
    float total;
    public:
    void display(){
        total=maths+physics+score;
        print_num();
        print_marks();
        print_score();
        cout<<"your total is "<<total<<endl;
    }
};
int main(){
    result shashi;
    shashi.set_roll(456);
    shashi.set_marks(56.4,67.9);
    shashi.set_score(678);
    shashi.display();
    return 0;
}