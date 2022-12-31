#include<iostream>
using namespace std;
#include<math.h>
#include<cmath>
class point{
    int x,y;
    public:
    point (int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
    }
    friend void distance(point t,point q);
};

void distance(point t,point q){
    float dis=sqrt((pow((t.x-q.x),2),pow((t.y-q.y),2)));
    cout<<"the distance is "<<dis<<endl;
}

int main(){
    point a(0,6),b(0,1);
    b.display();
    cout<<endl<<endl;

    distance(a,b);
    return 0;
}