#include <iostream>

using namespace std;
class Y;
class X
{
    int data;
    friend int add(X,Y);
public:
    void SetValue(int a)
    {
        data = a;
    }
};
class Y
{
    int data;
    friend int add(X,Y);
public:
    void SetValue(int b)
    {
        data = b;
    }
};
int add(X ox, Y oy)
{
    return (ox.data + oy.data);
}

int main()
{
    X xobj;
    xobj.SetValue(45);
    Y yobj;
    yobj.SetValue(20);
    int res= add(xobj,yobj);
    cout<<"The sum of xobj and yobj is ->"<<res<<endl;

    cout << endl;
    return 0;
}