// #include<iostream>
// using namespace std;

// class complex{
//     int a;
//     int b;
//     public:
//     void print_nums(){
//         cout<<"your complex number is "<<a<<" + "<<b<<"i"<<endl;
//     }
//     complex(int ,int);
// };

// //  complex :: complex(){ // default constructors
// //     a=0;
// //     b=0;
// // }
//  complex :: complex(int x ,int y){ // parameterised constructors
//     a=x;
//     b=y;
// }

// int main(){
//     //implicit call
//     complex x(1,3);
//     x.print_nums();

//     //explicit call
//     complex b=complex(5,7);
//     b.print_nums();
//     return 0;
// }

//thanks
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
class point{
int x;
int y;
public :
    friend void difference(point , point);
    point(int a, int b){
    x=a;
    y=b;
    }
    void displaypoint(){
    cout<<"The point is : ("<<x<<","<<y<<")"<<endl;
    }

};
void difference(point o1, point o2){
int x_diff=o2.x-o1.x;
int y_diff=o2.y-o1.y;
//double dist = sqrt((x_diff)*(x_diff) + (y_diff)*(y_diff));
double dist = sqrt((pow(x_diff,2)+pow(y_diff,2)));
cout<<"Distance is :"<<dist<<" units";
}

int main()
{
point p1(0,1),p2(0,6);
p1.displaypoint();
p2.displaypoint();

cout<<endl<<endl;

difference(p1,p2);
return 0;
}