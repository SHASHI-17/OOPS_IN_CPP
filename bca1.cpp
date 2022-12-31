// #include<iostream>
// using namespace std;
// // 7. wap in c++ to use scope resolution operator
// class programming {  
//     public:
//     void output();
// };

// void programming :: output() {
//     cout<<"function defined outside the class \n";
// }
// int main(){
//     programming x;
//     x.output();
//     return 0;


// 8.to allocate memory using new operator
// #include<iostream>
// using namespace std;

// int main(){
//     int *p=NULL;
//     p=new(nothrow) int;
//     if(!p){
//         cout<<"aloocation of memory is failed";
//     }
//     else{
//         *p=29;
//         cout<<"value of p is :"<<*p<<endl;
//     }

//     float *r=new float(75.24);
//     cout<<"value of r "<<*r<<endl;
//     int n=5;
//     int * q=new(nothrow) int[n];
// if(!q){
//     cout<<"aloocation of memory \n";
// }
// else{
//     for(int i=0;i<n;i++){
//         q[i]=i+1;
//     }
//     cout<<"value store in block of memory \n";
//     for(int i=0;i<n;i++){
//         cout<<q[i] << " ";
//     }
// }
//     delete p;
//     delete r;
//     delete[] q;
//     return 0;
// }


//9. to create multilevel inheritance...
// #include<iostream>
// using namespace std;
// class base {
//     public:
//     int x;
//     void getdata() {
//         cout<<"enter the value of x = ";
//         cin>>x;
//     }
//     };
//     class derive1 : public base{
//         public:
//         int y;
//         void readdata() {
//             cout<<"\n enter value of y = ";
//             cin>>y;
//         }
//     };

//     class derive2 : public derive1{
//         private:
//         int z;
//         public:
//         void intdata(){
//             cout<<"\n enter value of z = ";
//             cin>>z;
//         }
//          void product(){
//         cout<<"\n product "<<x*y*z;
//     }
//     };

   
// int main(){
//     derive2 a;
//     a.getdata();
//     a.readdata();
//     a.intdata();
//     a.product();
//     return 0;
// }


// 10. A B C D E

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     virtual void show(){
//         cout<<"A\n";
//     }
// };

// class B :public A{
//     public: 
//     void show(){
//         cout<<"B\n";
//     }
// };

// class C :public A{
//     public: 
//     void show(){
//         cout<<"C\n";
//     }
// };

// class D :public A{
//     public: 
//     void show(){
//         cout<<"D\n";
//     }
// };
// class E :public A{
//     public: 
//     void show(){
//         cout<<"E\n";
//     }
// };
// int main(){
//     A a;
//     B b;
//     C c;
//     D d;
//     E e;
//     A *pa[]={&a,&b,&c,&d,&e};
//     for(int i=0;i<5;i++){
//         pa[i]->show();
//     }
//     return 0;
// }



// 11.base class and derieved class

// #include<iostream>
// using namespace std;

// class base{
//     public: 
//     virtual void print(){
//         cout<<"print base class "<<endl;
//     }
//     void show(){
//         cout<<"show base class"<<endl;
//     }
// };
// class derieved : public base{
//     public:
//     void print(){
//         cout<<"print derieved class"<<endl;
//     }
//    void show(){
//         cout<<"show derieved class"<<endl;
//     }
// };

// int main(){
//     base *ptr;
//     derieved d;
//     ptr=&d;
//     ptr->print();
//     ptr->show();
//     return 0;
// }