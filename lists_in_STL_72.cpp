#include<iostream>
#include<list>// for lists
using namespace std;

template<class t>
void display(list<t> lily){    
    list<int> :: iterator it;
    for (it=lily.begin(); it!=lily.end(); it++)
    {
        cout<<*it<<" ";
    }
    cout<<"\n";
}

int main(){
    list <int> list1; // list of 0 lenght
    list1.push_back(1);
    list1.push_back(8);
    list1.push_back(6);
    list1.push_back(3);
    list1.push_back(7);

    list<int> :: iterator iterr;
    iterr=list1.begin();
    // cout<<*iter<<" ";
    // iter++;
    // cout<<*iter<<" ";
    display(list1);
    // removing elements from the list
    // list1.pop_back();
    // list1.pop_front();
    // list1.remove(3); // it will remove all occurances

    //list1.sort();// ascending order // sorting

    list1.reverse();// reversing the list

    display(list1);
    
    list <int> list2(4);// empty list of 7 lenght
    list <int> :: iterator iter;
    iter=list2.begin();
    *iter=5;iter++;
    *iter=9;iter++;
    *iter=2;iter++;
    *iter=4;iter++;
   // list2.sort();
    display(list2);
cout<<"list 1 after merging \n";
list1.merge(list2);
list1.sort(); // idhar krne se ek sath ho jayega..first two sort skip kr k bhi
display(list1);
    return 0;
}