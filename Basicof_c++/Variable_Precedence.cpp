#include <iostream>

using namespace std;

int a = 9;

int sum(int x, int y)
{

    return x + y;
}

int main()
{

    int a = 10;
    int c;

    c= sum(66, 77);
    cout<<"The addition of given two numbers is "<<c<<endl;


    cout << "The value of integer a is " << ::a << endl;// To access the Global Variable use the scope resolution operator
    return 0;
}