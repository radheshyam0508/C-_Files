/*
1. Inheritance is the part of OOPs.
2. Reuseability is a very important features of OOPs.
3. IN C++ we can reuse a class and additional fetures to it.
4. Reusing classes save time and money.
Reusing already tested and debugging class will save a lot of efforts of developping and debugging the same thing again.

WHAT IS INHERITANCE???

1. Reusability is supported using Inheritance.
2. We can use the proprties of exitings class by inheriting it
3. The existing class is called as the BASE CLASS.
4. The new class which is inherited is called as DERIVED CLASS.
5. There are 5 types of Inheritance------
    1. Single 
    2. Multiple inheritance---Derived class with more than one Base class
    3. Hierarchical inheritance----Several Derived class from one base class
    4. Multilevel inheritance----
    5. Hybrid--- Combination of multiple inheritance and multilevel inheritance. */

#include <iostream>
using namespace std;

class Employee
{

public:
    int ID;
    float Salary;

    Employee(int inpid)
    {

        ID = inpid;
        Salary = 66.667;
    }
    Employee() {}
};

//Derievd class Syntax

// class{{Derived class name}}:{{visibility mode}} {{Base-class name}}

/*  {

    class member/method/etc..............
}*/

class programmer : public Employee
{

public:
    int languageCode;
    programmer(int inpid)
    {
        ID = inpid;
        languageCode = 9;
    }

    void getData(void)
    {

        cout << ID << endl;
    }
};

int main(){

    Employee Radhe(66), Manu(67);
    cout<<Radhe.Salary<<endl;
    cout<<Manu.Salary<<endl;
    programmer skill(10);
    cout<<skill.languageCode<<endl;
    cout<<skill.ID<<endl;
    return 0;
}

/* 1. Default Visibility mode is private.
2. Publiv Visibility mode--public member of base class become public member of Derived class
3. Private visibility mode---Public member of bace class become private member of base class
4. Private mebers are never inherited;
*/
