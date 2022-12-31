#include<iostream>
using namespace std;

//if we are inheriting b from a and c from b : then -:
// A is the base class of B and  B is the base class of C.
// A-->B-->C is the inheritance path.

class student{
    protected :
    int roll_no;
    public:
    void set_number(int);
    void get_number();
};

class exam : public student{
    protected :
    float maths;
    float physics;
    public:
    void set_marks(float,float);
    void get_marks();
};

void student :: set_number(int r){
    roll_no=r;
}
void student :: get_number(){
        cout<<"the roll number is "<<roll_no<<endl;
}

void exam ::set_marks(float a,float b){
        maths=a;
        physics=b;
}

void exam ::get_marks(){
    cout<<"The marks obtained in maths are "<<maths<<endl;
    cout<<"The marks obtained in physics are "<<physics<<endl;
}

class result : public exam{
    float percentage;
    public:
    void display(){
        get_number();
        get_marks();
        cout<<"your percentage is "<<(maths+physics)/2<<"%"<<endl;
    }
};

int main(){
    result shashi;
    shashi.set_number(30);
    shashi.set_marks(94,90);
    shashi.display();
    return 0;
}

