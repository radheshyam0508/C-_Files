#include <iostream>
using namespace std;

class Base1
{
public:
    void greet()
    {
        cout << "Hello Sir, Good Morning" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Hello Sir, Good Afternoon" << endl;
    }
};
class Base3
{
public:
    void greet()
    {
        cout << "Hello Sir, Good Evening" << endl;
    }
};

class Derived : public Base1, public Base2, public Base3
{
    int c;

    public:        // To select the Class method which you want to execute in the derived class, when each base class has same class function.
    void greet(){
    Base1::greet();
    }
};

class s{
    public:
    void greet(){

        cout<<"How are you sir???"<<endl;
    }


};


class t:public s{

    int y;
    public:
    void greet(){

        cout<<"How are you sir and mam? How are you doing??"<<endl;
    }
};

int main()
{

    // Base1 b1;
    // b1.greet();

    // Base2 b2;
    // b2.greet();

    // Base3 b3;
    // b3.greet();

    // Derived d;
    // d.greet();

    s s1;
    s1.greet();

    t t1;
    t1.greet();


    return 0;
}