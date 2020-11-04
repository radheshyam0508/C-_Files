//factorial Programm

#include<iostream>
using namespace std;

int factorial(int x){

    if(x<=1){
        return 1;
    }
    return x*factorial(x-1);
}
int main(){

    int n;
    cout<<"Enter the number for which you want to find out the factorial"<<endl;
    cin>>n;

    cout<<"The factorial of " <<n<< " is "<<factorial(n)<<endl;

    return 0;

}
