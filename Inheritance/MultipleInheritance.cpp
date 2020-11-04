#include <iostream>
using namespace std;

class Base1
{
protected:
    int baseint1;

public:
    void setData1(int a)
    {

        baseint1 = a;
    }
};

class Base2
{
protected:
    int baseint2;

public:
    void setData2(int b)
    {

        baseint2 = b;
    }
};

class Derived : public Base1, public Base2
{

protected:
    int Ram;

public:
    void show()
    {

        cout << "The value of Base1 Data is " << baseint1 << endl;
        cout << "The value of Base2 Data is " << baseint2 << endl;
        
        cout << "The sum of Data 1 and Data 2 is " << baseint1 + baseint2 << endl;
    }
};

int main()
{

    Derived Radhe;
    Radhe.setData1(66);
    Radhe.setData2(89);
    Radhe.show();
    return 0;
}


/* The inherited Derievd class has 
baseint1------Protected
baseint2-----Protected


setData1----public
setdata2----public
show----public
*/