#include <iostream>
using namespace std;

template <class T1 = float, class T2 = int, class T3 = char>

class MyClass
{
public:
    T1 a;
    T2 b;
    T3 c;

    MyClass(T1 x, T2 y, T3 z)
    {

        a = x;
        b = y;
        c = z;
    }

    void Display()
    {

        cout << "The Value of a is " << a << endl;

        cout << "The Value of b is " << b << endl;

        cout << "The Value of c is " << c << endl;
    }
};

int main()
{

    MyClass<> obj(5.5, 5, 'R');
    obj.Display();

    cout<<endl;

    MyClass<float, char, char> obj1(5.55, 'M', 'R');

    obj1.Display();
    return 0;
}