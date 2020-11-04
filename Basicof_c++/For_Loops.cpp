#include <iostream>
using namespace std;

int main()
{

    //Print the Table

    int n;

    cout << "Enter the nmber for which you wnat a Table." << endl;
    cin >> n;

    cout << "The Table for " << n << " is printed below" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << n << "X" << i+1 << "=" << n * (i+1) << endl;
    }

    return 0;
}