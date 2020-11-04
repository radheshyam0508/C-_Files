#include <iostream>
using namespace std;

class c2;

class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int a)
    {
        val1 = a;
    }

    void Display()
    {

        cout << val1 << endl;
    }
};

class c2
{

    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata(int b)
    {
        val2 = b;
    }

    void Display()
    {

        cout << val2 << endl;
    }
};

void exchange(c1 &x, c2 &y)
{

    int temp1 = x.val1;
    x.val1 = y.val2;
    y.val2 = temp1;
}

int main()
{
    c1 object1;
    c2 object2;
    object1.indata(66);
    object2.indata(77);
    exchange(object1, object2);
    cout << "The value of c1 after exchnage ";
    object1.Display();
    cout << "The value of c2 after exchnage ";
    object2.Display();

    return 0;
}