#include <iostream>

using namespace std;

template <class T>
class Temp
{
    T data;

public:
    Temp(T data)
    {
        this->data = data;
    }
    void display(void);
};
template <class T>
void Temp<T>::display(void) // decalaration type
{
    cout << "Value of data is " << data << endl;
}
void func(int x)
{
    cout << "Value is " << x << endl;
}
template <class F>
void func(F x)
{
    cout << "Value is(by template) " << x;
}
int main()
{
    Temp<int> obj(7);
    obj.display();
    func(45); // run in the described func as exact match takes first priority
    func('A'); // ren in the template one....
    cout << endl;
    return 0;
}
