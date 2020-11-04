#include <iostream>
using namespace std;

/*
constructor(Arguments List):Initialization-selection{

    Assignment+code
}

class Test{

    int a, b;
    public: 

    Test(int i, int j): a(i), b(j){
        cout<<The Value of a and b is <<a<<b<<endl;
    }
};

*/

class Test
{

    int b, a;

public:
    //Test(int i, int j) : a(i), b(j+i)
    Test(int i, int j) : a(i), b(2*j)
    //Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor called" << endl;

        cout << "The value of a " << a << endl;
        cout << "The value of b " << b << endl;
    }
};

int main(){


    Test t(4,6);
    return 0;
}
