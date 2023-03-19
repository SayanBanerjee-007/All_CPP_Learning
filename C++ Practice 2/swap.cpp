#include<iostream>

using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter num1: ";cin>>num1;
    cout<<"Enter num2: ";cin>>num2;
    cout<<"Before swaping: \n";
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2<<endl;
    num1 = num1 + num2 - (num2 = num1);
    cout<<"After swaping: \n";
    cout<<"num1 = "<<num1<<endl;
    cout<<"num2 = "<<num2;

    cout<<endl;
    return 0;
}