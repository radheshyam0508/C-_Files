/* C++ is desigend to add OPP object oriented Programming. C with classes called C++

what is calss----Basic Template for creating object.

Objects----Basic Runtime Entities

Inheritance----- Properties of one calss can be inherited into other class. Uisng one template craeting other template.

WE HAVE STRUCTURE then WHY CLASS?????

We can not creat function in the structure, and in structure members and value can be accessed directly from anywhere. Structure is
not safe in some scenario.

when developer need both the data and fucntion use Class. */

#include<iostream>

using namespace std;

class Employee{
    private:
    int a,b,c;

    public:
    int d,e;

    void SetData(int a1, int b1,int c1);
    void GetData(){

        cout<<"The value of a "<<a<<endl;
        cout<<"The value of b "<<b<<endl;
                  
    }
};

void Employee::SetData(int a1, int b1, int c1){

    a=a1;
    b=b1;
    c=c1;
}

int main(){
Employee Radhe;
Radhe.d=66;
Radhe.e=77;
//Radhe.a=404;

cout<<"The value of d is :  "<<Radhe.d<<endl;

Radhe.SetData(1,2,3);
Radhe.GetData();
return 0;


}