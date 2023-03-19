#include <iostream>

using namespace std;

template <class T1, class T2>
float Average(T1 a, T2 b)
{
    return (a + b) / 2.0;
}
template <class T>
void swapp(T &x, T &y)
{
    x = x + y - (y = x);
}

int main()
{
    printf("The average is %.2f\n", Average(2, 5));
    int x = 10, y = 455;
    swapp(x, y);
    cout << x << endl
         << y << endl;

    cout << endl;
    return 0;
}
