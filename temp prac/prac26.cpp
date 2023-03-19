#include <iostream>

using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int num)
    {
        roll_number = num;
    }
    void print_roll_number(void)
    {
        cout<<"Your roll number is: "<< roll_number<<endl;
    }
};
class Test : virtual public Student
{
protected:
    float math, physics;

public:
    void set_marks(float m, float p)
    {
        math = m;
        physics = p;
    }
    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Math: " << math << endl
             << "Physics: " << physics << endl;
    }
};
class Sport : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your sport score is: " << score<<endl;
    }
};
class Result :  public Test,public Sport
{
    private:
    float total;
    public:
   // void print_roll_number(void)
   // {
   //     Test::print_roll_number();
   // }
    void display(void)
    {
        total=math+physics+score;
        print_roll_number();
        print_marks();
        print_score();
        cout <<"Your total is: "<<total<<endl;
    }
};

int
main()
{
    Result sayan;
    sayan.set_roll_number(3);
    sayan.set_marks(97.9999,70.23);
    sayan.set_score(92.7);
    sayan.display();
    cout << endl;
    return 0;
}