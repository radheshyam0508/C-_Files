#include <iostream>
#include <math.h>

using namespace std;

class SimpleCalculator
{

protected:
    int a;
    int b;

public:
    void Calsi(int num1, int num2)
    {

        a = num1;
        b = num2;

        //cout << "Enter the value of num1 and num2" << endl;
        //cin >> num1 >> num2;
    }
    void DisplayCalsi()
    {

        cout << "The sum of 2 number is " << a + b << endl;
        cout << "The subtraction of 1 number from second number is " << a - b << endl;
        cout << "The multiplication of 2 number is " << a * b << endl;
        cout << "Deviding the 1st number from 2nd  number is " << (a / b) << endl;
    }
};

class SciCalsi
{
protected:
    int c, d;

public:
    void CalsiSci(int num3, int num4)
    {

        c = num3;
        d = num4;

        //cout << "Enter the value of num1 and num2" << endl;
        //cin >> num3 >> num4;
    }

    void DisplaySciCalsi()
    {

        cout << "The sin of 3rd number is " << sin(c) << endl;
        cout << "The square root of 4th number is " << sqrt(d) << endl;
        cout << "The cos value  of 3rd number is " << cos(d) << endl;
        cout << "The Tan value of number 3 and number 4" << tan(c) << " and " << tan(d) << endl;
    }
};

class hybrid : public SimpleCalculator, public SciCalsi
{

public:
    void hybrid_show()
    {

        cout << "Enter the value of num1, num2, num3 and num4 " << endl;

        cin >> a >> b >> c >> d;

        DisplayCalsi();
        DisplaySciCalsi();
    }
};

int main()
{

    hybrid Radhe;
    Radhe.hybrid_show();

    return 0;
}
