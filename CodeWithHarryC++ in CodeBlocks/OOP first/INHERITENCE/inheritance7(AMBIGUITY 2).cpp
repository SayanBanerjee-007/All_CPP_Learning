#include <iostream>

using namespace std;
class B
{
public:
    void say(void)
    {
        cout << "Hello World." << endl;
    }
};
class D
{
    int a;

public:
    void say(void)
    {
        cout << "Hello my beautiful people." << endl;
    }
};
class C : public D, public B
{
public:
void say(void)
    {
        cout << "Hello Everyone." << endl;
    }

};
int main()
{
    B b;
    b.say(); // Hello World
    D d;
    d.say(); // Hello my beautiful people.
    C c;
    c.say();
    cout << endl;
    return 0;
}
