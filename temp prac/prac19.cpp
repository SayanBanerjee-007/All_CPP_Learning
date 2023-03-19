#include <iostream>
using namespace std;

class Base
{
    int data1;

public:
    int data2;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};
void Base::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int Base::getdata1(void)
{
    return data1;
}
int Base::getdata2(void)
{
    return data2;
}
class Derived : public Base // if visibility type is private 
{
    int data3;

public:
    void process(void);
    void display(void);
};
void Derived::process(void)
{
    data3=data2*getdata1();
    //setdata(); //when visibility type is private
}
void Derived::display(void)
{
    cout<<"value of data 1 is -> "<<getdata1()<<endl;
    cout<<"value of data 2 is -> "<<data2<<endl;
    cout<<"value of data 3 is -> "<<data3<<endl;
}
int main()
{
    Derived der;
    der.setdata();// if visibility type is private can't use this function
    der.process();
    der.display();
    cout << endl;
    return 0;
}