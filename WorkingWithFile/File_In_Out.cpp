#include<iostream>
#include<fstream>
using namespace std;

int main(){


string name;
cout<<"Enter your name: "<<endl;
cin>>name;

//writing into file and connecting our file to out stream

ofstream out("Write.txt");

//writing a string to our file

out<<"My name is " + name;


return 0;


}


