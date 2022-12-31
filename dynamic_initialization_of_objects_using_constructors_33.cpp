#include<iostream>
using namespace std;

class bankDeposit{
    int principle;
    int years;
    int rate;
    float roi;
    public:
    bankDeposit(){}
    bankDeposit(int p,int y,float r);
    bankDeposit(int p,int y,int r);
    void show();
};

bankDeposit ::bankDeposit(int p,int y,float r){
    principle=p;
    years=y;
    rate=r;
    roi=principle;
    for (int i = 0; i < y; i++)
    {
        roi=roi*(1+rate);// to rate of float into int
    }   
}
bankDeposit ::bankDeposit(int p,int y,int r){
    principle=p;
    years=y;
    rate=r;
    roi=principle;
    for (int i = 0; i < y; i++)
    {
        roi=roi*(1+(float)(rate)/100);
    }   
}

void bankDeposit ::show(){
    cout<<"principal amount was "<<principle<<endl
    <<"return value after "<<years<<endl
    <<" year will be "<<roi<<endl;
}

int main(){

    int p,y,R;
    float r;
    bankDeposit bd3,bd4;
    // cout<<"enter the value of p , y, r"<<endl;
    // cin>>p>>y>>r;

    // bankDeposit bd1(p,y,r);
    // bd1.show();

    cout<<"enter the value of p , y, R"<<endl;
    cin>>p>>y>>R;

    bankDeposit bd2(p,y,R);
    bd2.show();
    return 0;
}




// #include<iostream>
// using namespace std;


// class BankDeposit{
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

//     public:
//         BankDeposit(){}
//         BankDeposit(int p, int y, float r); // r can be a value like 0.04
//         BankDeposit(int p, int y, int r); // r can be a value like 14
//         void show();
// };
// BankDeposit :: BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// BankDeposit :: BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r)/100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1+interestRate);
//     }
// }

// void BankDeposit :: show(){
//     cout<<endl<<"Principal amount was "<<principal
//         << ". Return value after "<<years
//         << " years is "<<returnValue<<endl;
// }
// int main(){
//     BankDeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;
    
    
//     cout<<"Enter the value of p y and r"<<endl;
//     cin>>p>>y>>r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout<<"Enter the value of p y and R"<<endl;
//     cin>>p>>y>>R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }





