#include <iostream>

using namespace std;
class Number
{
    int a;
    int b;

public:
    friend Number SumComplex(Number o1, Number o2);
    void SetNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void PrintNumber(void)
    {
        cout << "The sum is -> " << a << " + " << b << "i" << endl;
    }
};
Number SumComplex(Number o1, Number o2)
{
    //a=o1.a+o2.a;
    //b=o1.b+o2.b;
    Number o3;
    o3.SetNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    Number a, b, c;

    a.SetNumber(45, 2);
    a.PrintNumber();

    b.SetNumber(75, 5);
    b.PrintNumber();

    c = SumComplex(a, b);
    c.PrintNumber();

    cout
        << endl;
    return 0;
}