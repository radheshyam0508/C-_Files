#include<iostream>

using namespace std;

template <class T1, class T2>

float findAvg(T1 a, T2 b){

    float avg= (a+b)/2.0;
    return avg;
}

template <class T>

void swappNumber(T &x, T &y){

    T temp= x;
    x=y;
    y=temp;
}

int main(){

float a= findAvg(5,5.5);
cout<<"The avg of given two number is "<<a<<endl;

int p=8;
int q=40;

swappNumber(p,q);
cout<<p<<endl<<q;
return 0;

}