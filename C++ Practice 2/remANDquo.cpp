#include<iostream>

using namespace std;

int main()
{
    int divisor, dividend, quotient, remainder;
    cout<<"Enter dividend: ";cin>>dividend;
    cout<<"Enter divisor: ";cin>>divisor;
    quotient = dividend / divisor;
    remainder = dividend % divisor;
    cout<<"quotient = "<<quotient<<endl;
    cout<<"remainder = "<<remainder;

    cout<<endl;
    return 0;
}