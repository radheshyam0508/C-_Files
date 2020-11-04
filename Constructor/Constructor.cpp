/*constructor is a special member function with same name as of the class. It is autometically invoked whenever the object is created.
it is used to initialised the object of the class.

1. It should be declared in the public section of the class.
2. It is autometically invoked whenever the object is created.
3. They can not return any value and do not have return type.
4. It can have default arguments.
5. We can't refer to their adress.
*/

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(); // its a default constructor because it does not take any parameter.

    void display() 
    {

        cout << "The value of real part of the complex no. is " << a << " and the imiginary part is " << b << endl;
    }
};

Complex::Complex()
{

    a = 66;
    b = 77;
}

int main()
{
    Complex C;

    C.display();

    return 0;
}
