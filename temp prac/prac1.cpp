#include <iostream>

using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void getdata(void)
    {
        cout << "The value of a is -> " << a << endl;
        cout << "The value of b is -> " << b << endl;
        cout << "The value of c is -> " << c << endl;
        cout << "The value of d is -> " << d << endl;
        cout << "The value of e is -> " << e << endl;
    }
};
void Employee ::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee sayan;
    sayan.setdata(1, 2, 3);
    sayan.d=10;
    sayan.e=555;
    sayan.getdata();

    cout << endl;
    return 0;
}