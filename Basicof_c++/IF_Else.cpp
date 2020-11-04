#include <iostream>
using namespace std;

int main()
{

    int age;

    cout << "Enter your age" << endl;
    cin >> age;

    if (age == 18)
    {

        cout << "You are Eligible to attain the party, but you will get soft dring and cake." << endl;
    }
    else if (0 > age || age < 18)
    {

        cout << "You are kid, you are not allow to attain this party. Go home and do study." << endl;
    }
    else
    {

        cout << "Welcome Gentelman, Enjoy the party." << endl;
    }

    return 0;