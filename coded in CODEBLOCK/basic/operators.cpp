#include<iostream>
using namespace std;
int main()
{
    int a=5,b=7;
    cout<<"a = "<<a<<"\nb = "<<b<<endl<<endl;
    cout<<"ARITHMETIC OPERATERS"<<endl;
    cout<<"The value of a+b is: "<<a+b<<endl;
    cout<<"The value of a-b is: "<<a-b<<endl;
    cout<<"The value of a*b is: "<<a*b<<endl;
    cout<<"The value of a/b is: "<<a/b<<endl;
    cout<<"The value of a%b is: "<<a%b<<endl;
    cout<<"The value of a++ is: "<<a++<<endl;
    cout<<"The value of a-- is: "<<a--<<endl;
    cout<<"The value of ++a is: "<<++a<<endl;
    cout<<"The value of --a is: "<<--a<<endl;

    cout<<"\n\nCOMPERISION OPERATORS\n";
    cout<<"The value of a==b is: "<<(a==b)<<endl;
    cout<<"The value of a!=b is: "<<(a!=b)<<endl;
    cout<<"The value of a<=b is: "<<(a<=b)<<endl;
    cout<<"The value of a>=b is: "<<(a>=b)<<endl;
    cout<<"The value of a<b is: "<<(a<b)<<endl;
    cout<<"The value of a>b is: "<<(a>b)<<endl;

    cout<<"\n\nLOGICAL OPERATORS"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl;
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl;
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl;

    cout<<"\n\nBITWISE OPERATORS"<<endl;
    cout<<"The value of (a & b) is: "<<(a & b)<<endl;
    cout<<"The value of (a | b) is: "<<(a | b)<<endl;

    cout<<endl<<endl;
    return 0;
}
