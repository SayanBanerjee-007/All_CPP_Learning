#include <iostream>

using namespace std;
template <class T1, class T2>// how may data types u want
class Myclass
{
    T1 data1;
    T2 data2;

public:
    Myclass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display(void)
    {
        cout << this->data1 << endl
             << this->data2;
    }
};

int main()
{
    Myclass <int,char>obj(1257,'A');
    obj.display();


    cout << endl;
    return 0;
}
