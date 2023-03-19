#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float base,result=1;
    int power;
    cout<<"Enter the base: ";cin>>base;
    cout<<"Enter the power: ";cin>>power;
    cout<<base<<" ^ "<<power<<" = ";
    //while(power!=0){
    //    result*=base;
    //    --power;
    //}
    //cout<<result;
    result=pow(base,power);
    cout<<result;

    cout<<endl;
    return 0;
}