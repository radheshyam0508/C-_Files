#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_number;

public:
    void Set_RoolNUmber(int r)
    {
        roll_number = r;
    }
    void Display_Roll()
    {
        cout << "Your Roll number is " << roll_number << endl;
    }
};

class Exam : virtual public Student
{

protected:
    int physics, Maths;

public:
    void Set_Marks(int p, int m)
    {

        physics = p;
        Maths = m;
    }

    void Display_Marks()
    {

        cout << " The obtained marks are:"
             << "Physics:  " << physics
             << "Maths:  " << Maths << endl;
    }
};

class Sports : virtual public Student
{

protected:
    int Kabbadi;

public:
    void Set_Score(int s)
    {

        Kabbadi = s;
    }

    void Display_Score()
    {

        cout << "Your score in the sport is : " << Kabbadi << endl;
    }
};

class Result : public Exam, public Sports
{

private:
    float Total;

public:
    void Show()
    {

        Total = physics + Maths + Kabbadi;
        Display_Roll();
        Display_Marks();
        Display_Score();

        cout << "Total Marks obtained is : " << Total << endl;
    }
};

int main()
{

    Result Radhe;
    Radhe.Set_RoolNUmber(66);
    Radhe.Set_Marks(66, 77);
    Radhe.Set_Score(4);
    Radhe.Show();
    return 0;
}