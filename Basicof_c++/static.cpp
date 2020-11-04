#include <iostream>

using namespace std;
int main()
{

    static int c = 0;
    cout << c << endl;
    c++;

    cout << c << endl;
    c++;
    cout << c << endl;


    return 0;
}