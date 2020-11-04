#include <iostream>
using namespace std;

template <class T1, class T2>

class Myclass
{

public:
    T1 data1;
    T2 data2;

    Myclass(T1 a, T2 b)
    {

        data1 = a;
        data2 = b;
    }

    void display()
    {

        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{

    Myclass<int, float> obj(1, 5.10);

    obj.display();

    return 0;
}
