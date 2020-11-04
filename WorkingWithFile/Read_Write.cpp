#include<iostream>
#include<fstream>

using namespace std;

int main(){
string name;
string read;

// Writing into file


cout<<"Enter your name here: "<<endl;

cin>>name;

ofstream writein("Write.txt");
writein<<name;

writein.close();

//reading from file


ifstream readin("Write.txt");
//readin>>read;
getline(readin,read);

cout<<"The Content of the Write.txt file has :" <<read;

readin.close();


return 0;


}