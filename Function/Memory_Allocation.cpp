#include <iostream>
using namespace std;

class Shop
{

private:
    int productID[100];
    int productPrice[100];
    int counter;

public:
    void initcounter()
    {
        counter = 0;
    }

    void Setprice();
    void Displayprice();
};

void Shop::Setprice()
{

    cout << "Enter the ID of your product " << counter + 1 << endl;
    cin >> productID[counter];

    cout << "Enter the price of your product " << endl;
    cin >> productPrice[counter];

    counter++;
}

void Shop::Displayprice()
{

    for (int i = 0; i < counter; i++)
    {

        cout << "The price of the product " << productID[i] << " is " << productPrice[i] << endl;
    }
}

int main()
{

    Shop dukaan;
    dukaan.initcounter();
    dukaan.Setprice();
    dukaan.Setprice();
    dukaan.Setprice();
    dukaan.Setprice();
    dukaan.Setprice();
    dukaan.Setprice();
    dukaan.Displayprice();

    return 0;
}
