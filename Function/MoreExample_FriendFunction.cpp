#include <iostream>
using namespace std;

class y;

class x
{

    int num1;

public:
    void SetData(int value1)
    {
        num1 = value1;
    }

    friend void add(x, y);
};

class y
{
    int num2;

public:
    void SetData(int value2)
    {

        num2 = value2;
    }
    friend void add(x, y);
};

void add(x o1, y o2)
{

    cout << "Summing the data of X and Y objects " << o1.num1 + o2.num2 << endl;
}

int main()
{

    //creat the object of x and y

    x a1;

    a1.SetData(66);

    y b1;

    b1.SetData(66);

    add(a1, b1);

    return 0;
}
