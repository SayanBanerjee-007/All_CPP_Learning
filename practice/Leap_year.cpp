#include<iostream>

using namespace std;

int main()
{
    int year;
    cout<<"Enter the year: ";cin>>year;

    (year % 4 == 0 && year % 100 != 0)?(cout<<year<<" is Leap year."):(year % 400 == 0)?(cout<<year<<" is Leap year."):(cout<<year<<" is not Leap year.");  

    cout<<endl;
    return 0;
}