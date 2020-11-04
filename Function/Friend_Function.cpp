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

    friend Complex SumComplex(Complex o1, Complex o2);// friend Function

    void printNumber()
    {

        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

Complex SumComplex(Complex o1, Complex o2)
{
    Complex o3;

    o3.SetData((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{

    Complex C1, C2, sum;

    C1.SetData(6, 6);
    C1.printNumber();

    C2.SetData(7, 7);
    C2.printNumber();

    sum = SumComplex(C1, C2);
    sum.printNumber();

    return 0;
}
/* Properties of Calss
1. Not in the Scope of the class
2. Since it is not in the scope of the class, therefore it can not be called from the object of that class
  i.e C1.sumComplex()==invalid

3. can be invoked without the help of any object
4. Usually containes the objects as arguments
5. Can be declared in Public or Private section of the Class
6. It can not access the member directly by their name and need object name*/