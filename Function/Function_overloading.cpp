#include <iostream>

using namespace std;

float volume(float r, float height)
{

    return (3.14 * r * r * height);
}

int volume(float a)
{

    return (a * a * a);
}

int volume(int l, int h, int b)
{

    return (l * h * b);
}

int main()
{

    cout << "The volume of Cylinder is with radius 3 and height 4 is :" << volume(3, 4) << endl;
    cout << "The volume of cube is with radius 3 is :" << volume(3) << endl;
    cout << "The volume of Cuboid is with length 3 and height 4 and breadth 5 is :" << volume(3, 4, 5) << endl;

    return 0;
}