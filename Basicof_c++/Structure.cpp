#include<iostream>
#include<string.h>
using namespace std;

typedef struct bank{

    int Id;
    float Salary;
    char name[50];
    char address[50];


}SBI;

int main(){
    struct bank kotak;

//SBI kotak;
kotak.Id= 100;
kotak.Salary=99.99;
strcpy(kotak.name,"Radhe");
strcpy(kotak.address,"Chembur");


cout<<"The ID of the KOTAK employee is "<<kotak.Id<<endl;
cout<<"The Salary of employee is "<<kotak.Salary<<endl;
cout<<"The name of the Employee is "<< kotak.name<<endl;
cout<<kotak.name<<" lives at "<< kotak.address<<endl;

return 0;



}