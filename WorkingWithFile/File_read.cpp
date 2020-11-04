#include<iostream>
#include<fstream>

using namespace std;

int main(){
string name;

ifstream in("Read.txt");
//in>>name;
getline(in,name);
cout<<name;
return 0;

}