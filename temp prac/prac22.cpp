#include <iostream>

using namespace std;
class Base1
{
protected:
    int Base1_int;

public:
    void set_Base1_int(int b1)
    {
        Base1_int = b1;
    }
};
class Base2
{
protected:
    int Base2_int;

public:
    void set_Base2_int(int b2)
    {
        Base2_int = b2;
    }
};
class Base3
{
protected:
    int Base3_int;

public:
    void set_Base3_int(int b3)
    {
        Base3_int = b3;
    }
};
class Derived : public Base1, public Base2, public Base3
{
public:
    void show(void)
    {
        cout << "The vlaue of Base1 is " << Base1_int << endl;
        cout << "The vlaue of Base2 is " << Base2_int << endl;
        cout << "The vlaue of Base3 is " << Base3_int << endl;
        cout << "The sum of these values is " << Base1_int + Base2_int + Base3_int << endl;
    }
};
int main()
{
    Derived d;
    d.set_Base1_int(5);
    d.set_Base2_int(15);
    d.set_Base3_int(25);
    d.show();
    cout << endl;
    return 0;
}