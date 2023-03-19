#include<iostream>
#include<iomanip>
using namespace std;
const int n=74;
int main()
{
    const int n=5;         // Global constant will not work in function . if u want the variable to be constant , u have to declare constant in the function.
    cout<<"The value of n is: "<<n<<endl;
    //n=7;                        // u can not change the variable value . this is read only variable.
   // cout<<"The value of n is: "<<n<<endl; ---> this line will not work.
   cout<<"the global value of n is: "<<::n<<endl;

    int a=4,b=75,c=9724;

    cout<<"\nThe value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of c is: "<<c<<endl;

    cout<<"\nThe value of a is: "<<setw(4)<<a<<endl;
    cout<<"The value of b is: "<<setw(4)<<b<<endl;
    cout<<"The value of c is: "<<setw(4)<<c<<endl;

    // Operator Precedence --->Follow C reference website and search precedence.
    int x =3, y=4;
    // int z = (x*5)+y;
    int z = ((((x*5)+y)-45)+87);
    cout<<endl<<z;
    return 0;

}

