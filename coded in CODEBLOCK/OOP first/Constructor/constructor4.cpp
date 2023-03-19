//Constructor overloading
#include <iostream>

using namespace std;
class complex
{
    int x, y;

public:
    complex(int a, int b);
    complex(int a, int b, int c);
    void PrintNumber(void)
    {
        cout << "The sum is -> " << x << " + " << y << "i" << endl;
    }
};
complex::complex(int a, int b)
{
    x = a;
    y = b;
}
complex::complex(int a, int b, int c)
{

    x = a;
    y = b;
    c = x + y + c;
    cout<<"The sum of all three numbers is ->"<<c<<endl;
}
int main()
{
    complex obj(5,6,2);
    obj.PrintNumber();

    cout << endl;
    return 0;
}
