#include <iostream>

using namespace std;

int main()
{

    int n;
    int i = 0;

    cout << "Enter the nmber for which you wnat a Table." << endl;
    cin >> n;

    cout << "The Table for " << n << " is printed below" << endl;

    while (i < 10)
    {

        cout << n << "X" << i + 1 << "=" << n * (i + 1) << endl;

        i++;
    }

    return 0;
}