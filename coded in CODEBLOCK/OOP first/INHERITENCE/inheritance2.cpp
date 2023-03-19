#include <iostream>

using namespace std;
class Base
{
protected:
    int a;

private:
    int b;
};
/*                        	Public Derivation      	Private Derivation    	Protected Derivation
Private members               Not Inherited            Not Inherited           Not Inherited
Protected members           	Protected               Private                  Protected
Public members           	     Public	                Private                  Protected
*/
class Derived : protected Base
{

};

int main()
{
    Base b;
    Derived d;
    //cout<<b.a;// Will not execute as protected [{(<LOLLLLLLoooooLL>)}]
    //cout<<d.a;// Will not execute as protected [{(<LOLLLLLLoooooLL>)}]
    cout << endl;
    return 0;
}
