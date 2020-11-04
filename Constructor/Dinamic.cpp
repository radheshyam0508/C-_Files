#include <iostream>
using namespace std;

class Bankdeposit
{

    int PrincipleAmout;
    int years;
    float interestRate;
    float returnValue;

public:
    Bankdeposit(){};
    Bankdeposit(int p, int y, float r);
    Bankdeposit(int p, int y, int r);
    void Show();
};

Bankdeposit::Bankdeposit(int p, int y, float r)
{

    PrincipleAmout = p;
    years = y;
    interestRate = r;
    returnValue = PrincipleAmout;

    for (int i = 0; i < y; i++)
    {

        returnValue = returnValue * (1 + interestRate);
    }
}

Bankdeposit::Bankdeposit(int p, int y, int r)
{

    PrincipleAmout = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = PrincipleAmout;

    for (int i = 0; i < y; i++)
    {

        returnValue = returnValue * (1 + interestRate);
    }
}

void Bankdeposit::Show()
{

    cout << "Principle Amout was " << PrincipleAmout << " and return value after " << years << " year is " << returnValue << endl;
}

int main()
{

    Bankdeposit bd1, bd2;
    int p, y;
    float r;
    int R;

    cout << "Enter the value of p, y and r " << endl;
    cin >> p >> y >> r;

    bd1=Bankdeposit(p, y, r);
    bd1.Show();

    cout << "Enter the value of p, y and R " << endl;
    cin >> p >> y >> R;

    bd2=Bankdeposit(p, y, R);
    bd2.Show();

    return 0;
}


