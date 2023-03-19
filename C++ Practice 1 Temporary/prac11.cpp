#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    Complex(int, int);
    void PrintNumber(void)
    {
        cout << "The sum is -> " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(int x, int y) // This is called PARAMETERIZED constructor(it takes parameters)
{
    a = x;
    b = y;
}
int main()
{
    //Implicit Call
    Complex a(4, 5);
    a.PrintNumber();

    //Explicit Call
    Complex b = Complex(7, 45);
    b.PrintNumber();

    cout << endl;
    return 0;
}
