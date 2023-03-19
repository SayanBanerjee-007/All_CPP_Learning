#include <iostream>

using namespace std;
template <class T1 = int, class T2 = float, class T3 = char>// template with default parameters
class Myclass
{
    T1 data1;
    T2 data2;
    T3 data3;

public:
    Myclass(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display(void)
    {
        cout << this->data1 << endl
             << this->data2 << endl
             << this->data3 << endl;
    }
};

int main()
{
    Myclass<> obj(12, 1.995, 'A');
    obj.display();

    Myclass<float, char, char> obj2(1.5, 'c', 'S');
    obj2.display();

    Myclass<float,float,int> obj3(12, 1.995, 'A');
    obj3.display();

    cout << endl;
    return 0;
}