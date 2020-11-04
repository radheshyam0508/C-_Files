#include <iostream>
using namespace std;

class BaseClass
{

public:
    int BaseClass_Veriable = 66;
    virtual void display()
    {

        cout << "Base Function Display" << endl;
        cout << "This is the loop of BaseClass and the variable of BaseClass_Variable " << BaseClass_Veriable << endl;
    }
};

class DerivedClass : public BaseClass
{

public:
    int DerivedClass_Veriable = 99;
    void display()
    {

        cout << "Derived Function Display" << endl;
        cout << "This is the loop of DerivedClass  and the variable of DerivedClass_Variable " << DerivedClass_Veriable << endl;
    }
};

int main(){

BaseClass *BasePtr;

BaseClass objBase;

DerivedClass objDerived;

BasePtr=& objDerived;

BasePtr->display();// If you do not make the Base class Display Virtual it will display the out put of Baseclass 
                   //since the base Class Pointer is pointing to the derived class object.
return 0;


}