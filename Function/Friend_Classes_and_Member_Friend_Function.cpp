#include <iostream>
using namespace std;

class Complex;

class Calculator
{

public:
    int add(int a, int b)
    {

        return a + b;
    }

    int SumRealComplex(Complex o1, Complex o2)
    {

        return (o1.a + o2.a);
    }
    int SumComComplex(Complex o1, Complex o2)
    {

        return (o1.a + o2.a);
    }
};

class Complex
{

    int a, b;
    //  friend int Calculator::SumRealComplex(Complex,Complex);
    //  friend int Calculator::SumComComplex(Complex,Complex);

    friend class Calculator;

public:
    void SetNumber(int n1, int n2)
    {

        a = n1;
        b = n2;
    };

    // int Calculator :: SumRealComplex(Complex o1, Complex o2)
    // {

    //     return (o1.a + o2.a);
    // }
    // int Calculator :: SumComComplex(Complex o1, Complex o2)
    // {

    //     return (o1.b + o2.b);
    // }

    int main()
    {

        Complex o1, o2;

        o1.SetNumber(1, 4);
        o2.SetNumber(5, 7);
        Calculator Calc;
        int result = Calc.SumRealComplex(o1, o2);
        cout << "The Sum of real Part of the Complex number is " << result << endl;

        return 0;
    }
};
