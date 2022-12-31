#include<iostream>
using namespace std;

int count=0;

class num{
    public:
    num(){
        count++;
        cout<<"This is the time when constructor is called for object number "<<count<<endl;
    }
    ~num(){
        cout<<"This is the time when destructor is called for object number "<<count<<endl;
        count--;
    }
};

int main(){
    cout<<"we are inside main function now"<<endl;
    num n1;
    {
        cout<<"enterting this block"<<endl;
        cout<<"creating two blocks"<<endl;
        num n1,n2;
        cout<<"exiting this block"<<endl;
    }
    cout<<"back to main"<<endl;
    
    return 0;
}