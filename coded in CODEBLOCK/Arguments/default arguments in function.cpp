#include<iostream>
using namespace std;

float moneyReceived(int x,float y=1.04)// if we assign default value to the first variable in function you HAVE TO assign default values
{                                       //     TO ALL THE variables after the first variables.....
    return x*y;
}
int main()
{
    int money = 100000;

    cout<<"If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money)<< "Rs after 1 year"<<endl;//
    // for this (in calling function ) only money is send and y value is default

    cout<<"\nFor VIP: If you have "<<money<<" Rs in your bank account, you will recive "<<moneyReceived(money, 1.1)<< " Rs after 1 year";
    // we can also give y a new value and default value will be kicked out...LOL..

    cout<<"\n\n";
    return 0;
}

