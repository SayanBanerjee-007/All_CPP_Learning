#include <iostream>

using namespace std;
class C2;

class C1
{
    int data;
    friend void swapNum(C1 &, C2 &);

public:
    void intvalue(int n)
    {
        data = n;
    }
    void display(void)
    {
        cout << data << endl;
    }
};
class C2
{
    int data;
    friend void swapNum(C1 &, C2 &);

public:
    void intvalue(int n)
    {
        data = n;
    }
    void display(void)
    {
        cout << data << endl;
    }
};
void swapNum(C1 &a, C2 &b)
{

    int temp = a.data;
    a.data = b.data;
    b.data = temp;
}

int main()
{
    C1 obj1;
    obj1.intvalue(4);
    cout << "BEFORE Value of C1.data ->";
    obj1.display();

    C2 obj2;
    obj2.intvalue(6);
    cout << "BEFORE Value of C2.data ->";
    obj2.display();

    swapNum(obj1,obj2);

    cout << "AFTER Value of C1.data ->";
    obj1.display();

    cout << "AFTER Value of C2.data ->";
    obj2.display();

    cout << endl;
    return 0;
}