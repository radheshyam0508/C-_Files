#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int x, int y);

    void display() 
    {

        cout << "The value of real part of the complex no. is " << a << " and the imiginary part is " << b << endl;
    }
};

Complex::Complex(int x, int y) // Parametrized Construnction
{

    a = 10;
    b = 77;
}

int main()
{
    //Complex C(66,67);// Implicit call

    //C.display();

    Complex b= Complex (5,6);// Explicit call
    b.display();

    return 0;
}
