#include <iostream>
using namespace std;

class employee
{
    static int count;  // defualt value is zero ..
    int id;

public:
    void set_data()
    {
        cout << "enter your id" << endl;
        cin >> id;
        count++;
    }
    void get_data()
    {
        cout << "the id of employee is " << id << endl
             << " and this employee number is " << count << endl;
    }

    static void get_count(){
        cout<<"the value of count is "<<count<<endl;
    }
};
int employee::count=1000; // static data member
int main()
{
    employee sha, shi;

    sha.set_data();
    sha.get_data();
    employee::get_count();

    shi.set_data();
    shi.get_data();
    employee::get_count();
    return 0;
}