#include <iostream>

using namespace std;
class BaseClass
{
public:
    int var_base;
    void display(void)
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived;
    void display(void)
    {
        cout << "Displaying Base class variable var_base " << var_base << endl;
        cout << "Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass obj_base;
    BaseClass *base_class_pointer;

    DerivedClass obj_derived;
    DerivedClass *derived_class_pointer;

    base_class_pointer = &obj_derived; // pointing base class pointer to base class
    base_class_pointer->var_base=10;
    //base_class_pointer->var_derived=45;// will throw error as the pointer is from base class not from derived class
    base_class_pointer->display();

    derived_class_pointer = &obj_derived;// you can not point base class object by a derived class pointer
    derived_class_pointer->var_base=110;
    derived_class_pointer->var_derived=45;
    derived_class_pointer->display();

    cout << endl;
    return 0;
}