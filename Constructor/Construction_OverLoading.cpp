#include <iostream>
using namespace std;

class Complex
{

    int a, b;

public:
    Complex(int x, int y)
    {

        a = x;
        b = y;
    }

    Complex(int x)
    {

        a = x;
        b = 0;
    }

    Complex()
    {

        a = 0;
        b = 0;
    }

    void PrintNumber()
    {

        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};


int main(){

    Complex C1(6,9);
    C1.PrintNumber();

    Complex C2(10);
    C2.PrintNumber();

    Complex C3;
    C3.PrintNumber();

    return 0;
}