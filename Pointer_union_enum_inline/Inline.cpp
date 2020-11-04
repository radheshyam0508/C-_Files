#include <iostream>
using namespace std;



inline int sum(int a, int b);
int main()
{

    int num1, num2;

    cout << "Enter the value of 1st number" << endl;
    cin >> num1;

    cout << "Enter the value of 2nd number" << endl;
    cin >> num2;

    cout << "The addition of number is " <<sum(num1, num2);

    return 0;
}

inline int sum(int a, int b)
{
    int c = a + b;

    return c;
}