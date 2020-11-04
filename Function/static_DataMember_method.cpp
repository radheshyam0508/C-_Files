#include<iostream>
using namespace std;

class Employee{

    int ID;

    static int count; // By default it initialized with zero 0'

    public:
    void SetData(){
        cout<<"Enter the ID of the Employee "<<endl;
        cin>>ID;
        count++;
    }
    void GetData(){

        cout<<"The ID of the employee is " <<ID<< " and the employee count is "<<count<<endl;

    }
    static void getCount(){

        cout<<"The value of count is "<<count<<endl;
    }



};
int Employee ::count;

int main(){

    Employee Radhe, manu, Ram;
    //Radhe.ID=1;   //---------Can not do this beacuse ID and Count is private
    //Radhe.count=1;

    Radhe.SetData();
    Radhe.GetData();

    Employee::getCount();  // To RUN the STATIC function, STATIC function uses only the static member

    manu.SetData();
    manu.GetData();

    Employee::getCount();
    Ram.SetData();
    Ram.GetData();

    Employee::getCount();

    return 0;
}