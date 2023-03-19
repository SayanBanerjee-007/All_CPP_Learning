#include <iostream>

using namespace std;
class Base1
{
    int data1;
protected:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor is called." << endl;
    }
public:
    Base1(void){}
    void printDataBase1(void)
    {
        cout << "The value of data is " << data1 << endl;
    }
};
class Base2
{
    int data2;
protected:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor is called." << endl;
    }
public:
    void printDataBase2(void)
    {
        cout << "The value of data is " << data2 << endl;
    }
};
class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor is called."<< endl;
    }
    void printDataDerived(void)
    {
        cout << "The value of derived1 and derived2 is respectively " << derived1 << " and " << derived2 << endl;
    }
};
int main()
{
    Derived sayan(1, 2, 3, 4);
    sayan.printDataBase1();
    sayan.printDataBase2();
    sayan.printDataDerived();
    Base1 obj;

            cout
        << endl;
    return 0;
}