#include <iostream>
using namespace std;

int main()
{

    int a = 66;

    int *ptr = &a;

    cout << "The value of a is " << *ptr << endl;

    //new operator

    int *p = new int(67);
    float *q = new float(68.66);

    cout << "The Value at address p is " << *p << endl;
    cout << "The Value at address q is " << *q << endl;

    int *arr = new int[4];

    //delete arr;------It will not work

    arr[0] = 10;
    //arr[1]=20;
    *(arr + 1) = 30;
    arr[2] = 3;
    arr[3] = 4;
    //delete[] arr;// it will work

    cout << "The value at arr[0] is " << arr[0] << endl;
    cout << "The value at arr[1] is " << arr[1] << endl;
    cout << "The value at arr[2] is " << arr[2] << endl;
    cout << "The value at arr[3] is " << arr[3] << endl;

    return 0;
}