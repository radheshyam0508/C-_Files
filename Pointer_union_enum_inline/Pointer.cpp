#include <iostream>

using namespace std;

int main()
{
    int a = 7;

    int *ptr = &a;

    int **c = &ptr;// pointer to pointer

    /* Pointer is a datatype which holds the address the of another variable
 &-----> address operater
 *-----> derefrence operator, it will give the value at the address
 */

    cout << "The adress of int a is " << &a << endl;

    cout << "The adress of int a is " << ptr << endl;

    cout << "The value of int a is " << a << endl;

    cout << "The adress of int a is " << *ptr << endl;

    cout << "*****************" << endl;

    cout << "The adress of int ptr is " << &ptr << endl;

    cout << "The adress of int ptr is " << c << endl;

    cout << "The value at c is " << **c << endl;

    return 0;
}