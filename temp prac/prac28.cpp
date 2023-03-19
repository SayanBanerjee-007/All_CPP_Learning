#include <iostream>

using namespace std;
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    //Test(int i, int j) : a(i), b(i+j)
    //Test(int i, int j) : a(i), b(2 * j)
    //Test(int i, int j) : a(i), b(a  + j)
    //Test(int i, int j) : b(j), a(b + j) // This will cause problem as 'a' is intialized first in the syntax.
    /*Test(int i, int j) : a(i)
    {
        b=j;
        cout << "Initializatiion succeed." << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }*/
    {
        cout << "Initializatiion succeed." << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test obj(4, 6);
    cout << endl;
    return 0;
}