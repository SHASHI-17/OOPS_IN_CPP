#include<iostream>
#include<string>
using namespace std;

//If one member function is called inside the other member function of the same class it is called nesting of a member function.

class binary{
    private:
    void chk_bin(void); 
    string s;
    public:
    void read(void);
    
    void ones(void);
    void display(void);
};

void binary ::read(){
    cout<<"enter a binary number "<<endl;
    cin>>s;
}

void binary :: chk_bin(void) { // not using equal length doesnt include null bhai
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1' ){
            cout<<"incorrect binary format "<<endl;
            exit(0); // coz exit if we type normal ones and zeros are converted coz it is going further
        }
    }
}

void binary :: ones(){
void chk_bin(void); 
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='0'){
            s.at(i)='1';
        }
        // else if(s.at(i)=='1'){ not needed
         else {
            s.at(i)='0';
        }
    }
}

void binary :: display(){
    cout<<"ones complement"<<endl;
    for (int i = 0; i <s.length(); i++)
    {
        cout<<s.at(i);
    }
    
}

int main(){
    binary shashi;
    shashi.read();
   // shashi.chk_bin();
    shashi.ones();
    shashi.display();
    return 0;
}