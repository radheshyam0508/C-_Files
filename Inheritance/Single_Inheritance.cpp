    #include<iostream>
    using namespace std;
     class Base{
         int data1;

         public:
         int data2;

         void SetData();
         int Getdata1();
         int Getdata2();
         };

void Base::SetData(){

    data1=10;
    data2=20;
}
int Base::Getdata1(){

    return data1;

}
int Base::Getdata2(){

    return data2;


}

class Derived:public Base {


    int data3;
    public:

    void process();
    void Display();
};

void Derived::process(){

    data3=data2*Getdata1();

}

void Derived::Display(){

    cout<<"The value of DATA 1 is "<<Getdata1()<<endl;
    cout<<"The value of DATA 2 is "<<data2<<endl;
    cout<<"The value of DATA 3 is "<<data3<<endl;
}

int main(){


    Derived Der;
    Der.SetData();
    Der.process();
    Der.Display();
    return 0;
}