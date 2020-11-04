#include <iostream>

using namespace std;

int main()
{

    int age;

    cout << "Enter your age in between the numbers 18,30,50,4. No other number please." << endl;
    cin >> age;

    switch (age)
    {

    case 18:
        cout << "You are allowed to attain the party, but you will get Milk and Coffee nothing else." << endl;
        break;

    case 30:
        cout << "Welcome Yonng Man/Women. Enjoy your party" << endl;
        break;

    case 50:
        cout << "You are old enough to drink alcohal, anyway welcome to the party." << endl;
        break;

    case 4:
        cout << "Kiska beta hai. Beta ghar jao padhai wadai karo IES/ WIES bano." << endl;
        break;

    default:
        cout << "We told you before only, don't give random age. Select from the given range." << endl;
        break;
  }


    return 0;
}