#include <iostream>

using namespace std;
class A
{
    int a;

public:
    /*A &setData(int a)
    {
        this->a = a;
        return *this;
    }*/
    void setData(int a)
    {
        this->a= a;
    }
    void getData(void)
    {
        cout << "Value of a is " << a << endl;
    }
};
int main()
{
    A obj;
    obj.setData(45);
    obj.getData();
    //obj.setData(45).getData();

    cout << endl;
    return 0;
}
