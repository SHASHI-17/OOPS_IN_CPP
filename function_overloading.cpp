#include<iostream>
using namespace std;
int sum(int x,int y){
    cout<<"hello ek varri"<<endl;
    return x+y;
}
int sum(int x,int y,int z){
    cout<<"hello dujhi varri \n"<<endl;
    return x+y+z;
}


//volume of cylinder
int volume(double r,int h){
    return (3.14*r*r*h);
}

//volume of cuboid
int volume(int a) {
    return a*a*a;
}

//volume of rectangle
int volume(int l,int b,int h){
    return l*b*h;
}

int main(){
    int a=1,b=2,c=3;
    cout<<sum(a,b)<<endl;
    cout<<sum(a,b,c)<<endl;
    cout<<volume(a,b)<<endl;
    cout<<volume(a)<<endl;
    cout<<volume(a,b,c)<<endl;
    return 0;
}