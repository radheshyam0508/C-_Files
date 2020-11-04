#include <iostream>

using namespace std;

class binary
{

    string s;

public:
    void read();
    void binary_check();
    void once_complement();
    void display();
};

void binary::read()
{

    cout << "Enter the Binary number " << endl;
    cin >> s;
}

void binary ::binary_check()
{

    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) != '0' && s.at(i) != '1')
        {

            cout << "Entered number is not binary " << endl;
            exit(0);
        }
        //cout<<"Enterd number is a valid Binary Number. "<<endl;
    }
}

void binary::once_complement()
{
//binary_check();
    for (int i = 0; i < s.length(); i++)
    {

        if (s.at(i) == '0')
        {

            s.at(i) = '1';
        }
        else
        {

            s.at(i) = '0';
        }
        
    }
}

void binary::display()
{

    cout << "Your Binary number is : ";

    for (int i = 0; i < s.length(); i++)
    {

        cout << s.at(i);
    }
    cout << endl;
}

int main()
{

    binary b;
    b.read();
   
    b.binary_check();
     b.display();

    b.once_complement();

    b.display();

    return 0;
}
