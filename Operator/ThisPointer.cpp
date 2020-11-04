#include <iostream>
using namespace std;

class B
{

    int a;

public:
     //B & SetData(int a)
    void SetData(int a)
    {

        //(*this).a = a;
        this->a=a;
        //return *this;
    }

    void GetData()
    {

        cout << "The value of the Variable is " << a << endl;
    }
};

int main()
{

    B a;
    //a.SetData(5).GetData();
    a.SetData(4);
    a.GetData();

    return 0;
}