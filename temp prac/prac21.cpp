#include <iostream>

using namespace std;

class Student
{
protected:
    int Roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int n)
{
    Roll_number = n;
}
void Student ::get_roll_number(void)
{
    cout << "The roll number is " << Roll_number << endl;
}
class Exam : public Student
{
protected:
    float math;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void Exam ::set_marks(float m, float p)
{
    math = m;
    physics = p;
}
void Exam ::get_marks(void)
{
    cout << "Marks of math is " << math << " and physics is " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_result(void)
    {
        cout << "Your percentage is " << (math + physics) / 2 <<"%"<< endl;
    }
};
int main()
{
    /*
    NOTES:
        If we are inheriting B from A and C from B :[A --> B --> C]
        1. A is the base class for B and B is the base class for cout
        2. ABC is called Inheritance Path
    */    
    Result sayan;
    sayan.set_roll_number(3);
    sayan.set_marks(98.0,70.5);
    sayan.get_roll_number();
    sayan.get_marks();
    sayan.display_result();
    cout << endl;
    return 0;
}