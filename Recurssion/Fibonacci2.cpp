#include<iostream>
using namespace std;

int main(){

int n;
int first_term=0;
int second_term=1;
int new_term=0;
cout<<"Please enter the term till you want the fibonacci series."<<endl;
cin>>n;

cout<<"The Fibonacci series for the given term is :    "  ;

for(int i=1;i<=n;++i){

    if(i==1){
        cout<<first_term<< " ";

        continue;
    }

    if(i==2){
        cout<<second_term<< " ";

        continue;
    }

    new_term=first_term+second_term;
    first_term=second_term;
    second_term=new_term;

    cout<< new_term << "  ";
}
return 0;


}