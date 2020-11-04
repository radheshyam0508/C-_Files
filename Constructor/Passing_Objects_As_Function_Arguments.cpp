#include <iostream>
using namespace std;

class Complex
{

    int a;
    int b;

public:
    void SetData(int v1, int v2)
    {

        a = v1;
        b = v2;
    }

    void GetDataSum(Complex o1, Complex o2)
    {

        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }

    void printNumber()
    {

        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{

    Complex C1, C2, C3;

    C1.SetData(6, 6);
    C1.printNumber();

    C2.SetData(7, 7);
    C2.printNumber();

    C3.GetDataSum(C1, C2);
    C3.printNumber();

    return 0;
}
