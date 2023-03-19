#include <iostream>

using namespace std;
class Base1
{
public:
    void greet(void)
    {
        cout << "How are you ?"<<endl;
    }
};
class Base2
{
public:
    void greet(void)
    {
        cout << "Tumi kemon acho ?"<<endl;
    }
};
class Derived : public Base1, public Base2
{
    public:
    void greet(void);
    // {
    //     Base1::greet();// Ambiguity Resolution(TYPE 1)
    // }
};
void Derived:: greet(void)
{
    Base2::greet();
}
int main()
{
    Base1 Base1obj;
    Base2 Base2obj;
    Base1obj.greet();
    Base2obj.greet();

    Derived obj;
    obj.greet();
    
    return 0;
}