#include<iostream>
#include<vector>// for vectors

using namespace std;

template<class T>
void display(vector <T> v){
        cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
      //  cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main(){
    vector <int> vec1;
    int element,count;
    cout<<"enter the size of the vector"<<endl;
    cin>>count;
    for (int i = 0; i < count; i++)
    {
        cout<<"enter an element to add in the vector"<<endl;
        cin>>element;
        vec1.push_back(element);
    }
    display(vec1);
    // vec1.pop_back(); deletion from the end as mentioned back
    // for begin and end we need to use iterators
    vector<int> ::iterator iter =vec1.begin(); // pointing to the first element of the vector/array
    vector<int> ::iterator iter =vec1.end(); // pointing to the last element of the vector/array
    vec1.insert(iter,566);
    //vec1.insert(iter+1,566); // for the second position
    //vec1.insert(iter+1,5,566);// in the second position for five times
     display(vec1);


    // vector<int> vec1;
    // vector<char> vec2(4);
    // vec2.push_back('A');
    // vector<char> vec3(vec2);// it will display same as vec2
    // vector<char> vec4(6,65); // it will print A for 6 times
    // vector<int> vec5(6,65); // it will print A for 6 times
    // display(vec4);

    // cout<<vec4.size();
    return 0;
}