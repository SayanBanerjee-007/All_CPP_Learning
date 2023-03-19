#include<iostream>
using namespace std;

int main()
{
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age<18&&age>0)
    {cout<<"You are not eligible to enter the party.";}
    else if(age==18){
     cout<<"You will get a kid pass.";}
    else if(age<1){
     cout<<"You haven't born yet.";}
    else{
     cout<<"You can join the party.";}

    return 0;
}
