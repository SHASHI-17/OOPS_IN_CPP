#include<iostream>
#include<cmath>
using namespace std;

class simple{
    protected:
    float a;
    float b;
    float result=0;
    public:
    void simple_calculator(float a ,float b);
    void display_nor();
};

void simple ::simple_calculator(float a,float b){
    cout<<"enter your first element "<<endl;
    cin>>a;
    cout<<"enter your second element "<<endl;
    cin>>b;
    int choice;
    cout<<"1.add \n 2.minus \n 3.mul \n 4.divide"<<endl;
    cout<<"enter your choice "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        result=a+b;
        break;
    case 2:
        result=a-b;
        break;
    case 3:
        result=a*b;
        break;
    case 4:
        result=a/b;
        break;
    
    default:
        cout<<"sorry"<<endl;
        break;
    }
    }
void simple ::display_nor(){
    cout<<"the result of normal calculator is "<<result<<endl;
}

class scientific{
    protected:
    int a;
    int b;
    float result=0;
    public:
    void scientific_calculator(int a ){
         cout<<"enter your first element "<<endl;
    cin>>a;
    // cout<<"enter your second element "<<endl;
    // cin>>b;
    int choice;
    cout<<"1.cos \n 2.sin \n3.exp\n4.tan"<<endl;
    cout<<"enter your choice "<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        result=cos(a);
        break;
    case 2:
        result=sin(a);
        break;
    
    case 3:
        result=exp(a);
        break;
    case 4:
        result=tan(a);
        break;
    
    }
    }
    void display_sci(){
        cout<<"the result of scientific calculator is "<<result<<endl;
    }

};

class hybrid_calculator : public simple,public scientific {
    public:
    void display(){
        display_nor();
        display_sci();
    }
};
int main(){
    float a,b;
    hybrid_calculator shashi;
    shashi.simple_calculator(a,b);
    shashi.scientific_calculator(a);
    shashi.display();
    return 0;
}