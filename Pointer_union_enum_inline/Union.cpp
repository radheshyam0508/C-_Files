//union- It works like structure but it has better memory management
// only one parameter can be used at a time

#include <iostream>
using namespace std;

union Money
{

    int rice;
    int onion;
    int milk;
};

int main()
{

    union Money buy;
    buy.rice = 10;
    //buy.onion = 20;
    //buy.milk = 30;

    cout << "The Price of Rice is " << buy.rice << endl;
    // cout << "The Price of Onion is " << buy.onion << endl;
    // cout << "The Price of Milk is " << buy.milk << endl;

    return 0;
}