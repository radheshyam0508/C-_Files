#include<iostream>
using namespace std;

class Employee{
int ID;
float Salary;
public:

void GetID();
void SetID();
};

void Employee::SetID(){
Salary=66.67;

cout<<"Enter the ID of Employee "<<endl;
cin>>ID;
}

void Employee::GetID(){
cout<<"The ID the Employee is "<<ID<<endl;
}


int main(){

    //Normall Calling

    Employee Radhe, Manu, Ram;

    // Radhe.SetID();
    // Radhe.GetID();

    // Manu.SetID();
    // Manu.GetID();

    // Ram.SetID();
    // Ram.GetID();

    //Array of Objects


    Employee fb[3];

    for(int i=0;i<3;i++){

        fb[i].SetID();
        fb[i].GetID();

    }

    return 0;



}