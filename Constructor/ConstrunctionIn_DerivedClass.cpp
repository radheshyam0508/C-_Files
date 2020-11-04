#include <iostream>
using namespace std;

/*
Case 1:
class A :pulic B{
//order of executaion is ------> class B() then Class A() 

};

Case 2:
class A :pulic B, public C{
//order of executaion is ------> class B() then Calss C then Class A() 

};

Case 3:
class A :pulic B, virtual public C{
//order of executaion is ------> class C() then Calss B() then Class A() 

};
*/

class Base1
{
    int Data1;

public:
    Base1(int a)
    {

        Data1 = a;

        cout << "Base1 Constructor is called" << endl;
    }

    void PrintBase1()
    {
        cout << "The value of Data1 is " << Data1 << endl;
    }
};

class Base2
{
    int Data2;

public:
    Base2(int b)
    {

        Data2 = b;

        cout << "Base2 Constructor is called" << endl;
    }

    void PrintBase2()
    {
        cout << "The value of Data2 is " << Data2 << endl;
    }
};

class Derived : public Base2, public Base1
{

    int Derived1, Derived2;

public:
    Derived(int x, int y, int z, int q) : Base2(y), Base1(x)
    {

        Derived1 = z;
        Derived2 = q;
        cout << "Derived Constructor is Callled" << endl;
    }

    void PrintDerived()
    {
        cout << "The Value of Derived 1 is " << Derived1 << endl;
        cout << "The Value of Derived 2 is " << Derived2 << endl;
    }
};

int main()
{

    Derived Radhe(1, 2, 3, 4);
    Radhe.PrintBase1();
    Radhe.PrintBase2();
    Radhe.PrintDerived();
    return 0;
}