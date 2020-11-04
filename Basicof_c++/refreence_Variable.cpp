#include<iostream>
using namespace std;

int main(){

    float x=99.99;
float &y=x; // It will give another name to variable x, but not make a copy of it.

cout<<"The value of x is "<<x<<endl;
cout<<"The Value of x is "<<y<<endl;
return 0;

}

