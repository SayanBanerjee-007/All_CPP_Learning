#include <iostream>

using namespace std;
class BaseClass
{
public:
    int var_base=100;
    virtual void display(void)
    {
        cout << "1 Displaying Base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived=999;
    void display(void)
    {
        cout << "2 Displaying Base class variable var_base " << var_base << endl;
        cout << "2 Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass obj_base;
    BaseClass *base_class_pointer;
    DerivedClass obj_derived;
    DerivedClass *derived_class_pointer;

    base_class_pointer=&obj_derived;
    base_class_pointer->display();// Because of using virtual function the display function from derived class will be called.



    cout << endl;
    return 0;
}
