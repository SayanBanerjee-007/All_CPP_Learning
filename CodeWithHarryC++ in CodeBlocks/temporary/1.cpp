#include<iostream>
using namespace std;

int main()
{
    int a=5;
    int &b =a;
    cout<<"a -> "<<a<<endl;
    cout<<"b -> "<<b<<endl;
    cout<<"address of a -> "<<&a<<endl;
    cout<<"address of b -> "<<&b<<endl;
    return 0;
}
