#include<iostream>
using namespace std;

class ShopItem{

    int ID;
    float Price;
    public:
    void SetData(int a, int b){

        ID=a;
        Price=b;
    }

    void GetData(){

        cout<<"The ID of the item is "<<ID<<endl;
        cout<<"The price of the Item is "<<Price<<endl;
    }


};

int main(){


    int x;
    float y;

    int size=3;
    ShopItem *ptr= new ShopItem[size];
    ShopItem *Temptr=ptr;

    for(int i=0;i<size;i++){
        cout<<"Enter the Item ID of the product and Price of the product "<<i+1<<endl;
        cin>>x>>y;
        ptr->SetData(x,y);
        ptr++;
    }

    for(int i=0;i<size;i++){

        cout<<"Item Number :"<<i+1<<endl;
        Temptr->GetData();
        Temptr++;
    }

    return 0;
} 