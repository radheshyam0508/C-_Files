#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b, int c=9)
    {

        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printdata();
};

void Simple::printdata()
{

    cout << "The value od the data are " << data1 << "," << data2 << " and " << data3 << endl;
}

int main()
{

    Simple S(1, 2);
    S.printdata();
    return 0;
}
