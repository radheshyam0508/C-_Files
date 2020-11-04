/* TEMPLATE
Why use TEMPLATE
1. DRY
2. Generic Programming

Syntax for Template

template<class T>

Class Vector{

    T* arr;
    public:
    vectot (T*ar){
        //code
    }
};

*/

#include <iostream>
using namespace std;

template <class T>

class Vector
{
public:
    T *arr;
    int size;

    Vector(int m)
    {

        size = m;
        arr = new T[size];
    }

    T DotProduct(Vector &v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {

            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};

int main()
{

    Vector<float> V1(3);

    V1.arr[0] = 6;
    V1.arr[1] = 0;
    V1.arr[2] = 1;

    Vector<float> V2(3);

    V2.arr[0] = 1.1;
    V2.arr[1] = 0;
    V2.arr[2] = 1;

    int a = V1.DotProduct(V2);
    cout << a << endl;
    return 0;
}