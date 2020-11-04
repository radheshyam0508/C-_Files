#include<iostream>
using namespace std;

template<class T>

class Myclass{
    public:
    T data1;

    Myclass(T a){

        data1=a;
    }

    void Display();




};
template <class T>
void Myclass<T>::Display(){

    cout<<"The value of the variable is "<< data1<<endl;


}

void func(int a){
    cout<<"I am First Function and the value of a is "<<a<<endl;

}
template <class T>
void func(T a){
    cout<<"I am First Templatised Function and the value of a is "<<a<<endl;
    
}

template <class T>

void func1(T a){
    cout<<"I am second Templatised Function and the value of a is "<<a<<endl;
    
}

int main(){

    Myclass<float> Radhe(5.5);
    cout<<Radhe.data1<<endl;

    Radhe.Display();

    Myclass<char> Manu('M');
    cout<<Manu.data1<<endl;

    Manu.Display();

    func(5);//Exact match takes the highest priority
    func<float>(5.5);
    func1<char>('M');

    return 0;
}