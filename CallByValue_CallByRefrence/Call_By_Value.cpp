#include <iostream>

using namespace std;

void swapValue(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{

    int x = 66;
    int y = 77;

    cout << "The value of x and y before swap is " << x << " and " << y << endl;
    swapValue(x, y);
    cout << "The value of x and y after swap is " << x << " and " << y << endl;

    return 0;
}
