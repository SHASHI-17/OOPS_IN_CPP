#include<iostream>
#include<map>
#include<string>
using namespace std;

int main(){ // map is an associative array
    map<string,int> marks;
    marks["zarry"]=92; // it follows alphabetic order
    marks["jack"]=72;
    marks["rohan"]=52;

    marks.insert({{"shashi",78},{"kiran",89}});
    map<string,int> :: iterator iter;
    for(iter=marks.begin();iter!=marks.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<"the size is :"<<marks.size()<<endl;
    cout<<"the size is :"<<marks.empty()<<endl;
    cout<<"the size is :"<<marks.max_size()<<endl;
    return 0;
}