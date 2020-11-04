#include <iostream>
using namespace std;

class Complex
{

    int real, imaginary;

public:
    void SetData(int a, int b)
    {

        real = a;
        imaginary = b;
    }
    void GetData()
    {
        cout << "The Real Part is " << real << endl;
        cout << "The Imaginary Part is " << imaginary << endl;
    }
};

int main()
{

    Complex c1;

    Complex *ptr = &c1;
    c1.SetData(1, 2);
    c1.GetData();

    (*ptr).SetData(66, 69);
    (*ptr).GetData();

    ptr->SetData(55, 54);
    ptr->GetData();

    return 0;
}