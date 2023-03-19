#include<iostream>

using namespace std;

int main()
{
    float n1,n2,n3;
    cout<<"Enter first numbers: ";cin>>n1;
    cout<<"Enter second numbers: ";cin>>n2;
    cout<<"Enter third numbers: ";cin>>n3;

    (n1>n2&&n1>n3)?(cout<<n1<<" Is The largest Among Three Numbers."):(n2>n3)?(cout<<n2<<" Is The largest Among Three Numbers."):(cout<<n3<<" Is The largest Among Three Numbers.");

    cout<<endl;
    return 0;
}