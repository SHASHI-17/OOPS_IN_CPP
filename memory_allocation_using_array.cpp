#include <iostream>
using namespace std;

class shop
{ //// using array in classes
    int itemid[100];
    int price[100];
    int counter = 0;

public:
    void set_price(void);
    void display_price(void);
};
void shop::set_price(void)
{
    cout << "enter id of your item " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "enter price of your item " << counter + 1 << endl;
    cin >> price[counter];
    counter++;
}

void shop::display_price()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of the id " << itemid[i] << " is " << price[i] << endl;
        // cout<<counter;
    }
}
int main()
{
    int count;
    cout << "enter the count" << endl;
    cin >> count;
    shop shashi;
    for (int i = 0; i < count; i++)
    {
        shashi.set_price();
    }

    shashi.display_price();
    return 0;
}