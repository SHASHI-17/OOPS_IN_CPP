 #include<iostream>
 using namespace std;
// /* 
// syntax of initialization list in constructors  :
// constructor (argument list) : initialisation list/section{
//     assignment and other code nd stuff;
// }

// test(int a,int b): base1(a),base2(b)
// */

class test{
    int a;
    int b;
    public:
  //  test(int a,int b):a(a),b(b){
 //   test(int i , int j):a(i),b(i+j){
    //test(int i , int j):a(i),b(2*j){
   // test(int i , int j):a(i),b(a+j){
    //test(int i , int j):a(i+b),b(a+j){// this will screw up things
    test(int i,int j):a(i){
        b=j;
        cout<<"construction done"<<endl;
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
    }
};
int main(){
    test t(4,6);
    return 0;
}


// class Test
// {
//     int a;
//     int b;

// public:
//     Test(int i, int j) : a(i), b(j+i)
//     {
//         cout << "Constructor executed"<<endl;
//         cout << "Value of a is "<<a<<endl;
//         cout << "Value of b is "<<b<<endl;
//     }
// };

// int main()
// {
//     Test t(4, 6);

//     return 0;
// }
