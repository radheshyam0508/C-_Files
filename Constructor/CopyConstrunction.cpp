#include<iostream>
using namespace std;

class Number{
    int a;
    public:
    Number(int num){

        a=num;

    }

    Number(Number &obj){
        cout<<"Copy Construnction Called"<<endl;
        a= obj.a;
    }

    void Display(){

        cout<<"The number of the objcet is "<<a<<endl;
    }

    
};

int main(){

    Number z(45);

    //x.Display();
    //y.Display();
    z.Display();
    Number Z1(z);
    Z1.Display();
    //z2=z;
    //z2.Display();
    return 0;
    
}