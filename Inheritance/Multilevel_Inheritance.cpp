#include <iostream>
using namespace std;

class Student
{

protected:
    int roll_number;

public:
    void Set_RollNumber(int);
    void Get_Rollnumber();
};

void Student::Set_RollNumber(int r)
{
    roll_number = r;
}
void Student::Get_Rollnumber()
{

    cout << "The roll number is " << roll_number << endl;
}

class Exam : public Student
{

protected:
    float maths, physics;

public:
    void Set_marks(float, float);
    void Get_marks();
};

void Exam::Set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::Get_marks()
{
    cout << "The marks obtained in Maths is " << maths << endl;
    cout << "The marks obtained in Physics is " << physics << endl;
}

class Result : public Exam
{

    float Percentage;

public:
    void Display()
    {
        //Get_Rollnumber();
        //Get_marks();

        cout << "Your Percentage is " << (maths + physics) / 2 << endl;
    }
};

int main(){


    Result Radhe;
    Radhe.Set_RollNumber(66);
    Radhe.Set_marks(66.66,77.77);

    Radhe.Get_marks();
    Radhe.Display();
    return 0;

}