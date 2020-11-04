//Array:-Array is the collection of similar type of data stored in a contigious memory block
//simple variavle is not able to hold all the data.

//store the marks of 50 student

#include<iostream>

using namespace std;

int main(){
int marks[8]={1,2,3,4,5,66,66};

for(int i=0;i<7;i++){

    cout<<"The marks of "<<i+1 <<" student is "<< marks[i]<<endl;
    }

    return 0;



}