#include <iostream>

using namespace std;

class Complex
{
    int a, b;

public:
    //Creating a constructor
    //Constructor is a special membe function with same name as of the class.
    //It is autometically invoked(call or execute) Whenever a object is created.
    //It is used to initialize the objects of its class
    Complex(void); //Constructor declaration
    void PrintNumber(void)
    {
        cout << "The sum is -> " << a << " + " << b << "i" << endl;
    }
};
Complex ::Complex(void)// This is called default constructor(it takes no parameters)
{
    a = 10;
    b = 5;
    //cout<<"Hello World"<<endl;
}
int main()
{
    Complex obj;
    obj.PrintNumber();

    cout << endl;
    return 0;
}
/* Characteristics of Constructors

1. It should be declared in the publilc sectoion of the class
2. They are automarically invoked whenever the object is created
3. They cannot return values and do not have return types
4. It can have default arguments
5. we cannot refer to their address

*/