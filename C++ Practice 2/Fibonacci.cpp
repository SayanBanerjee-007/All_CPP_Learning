#include<iostream>

using namespace std;

int main()
{
    int lim,n1=0,n2=1,sum;
    cout<<"Enter the limit of fibonacci series: ";cin>>lim;
    if(lim==0){
               cout<<"Fibonacci series of "<<lim<<" does not exist."<<endl;
               exit(1);
              }
    cout<<"Fibonacci series of "<<lim<<" is: "<<endl;
    
    if(lim==1){
                cout<<n1<<endl;
                exit(1);
              }
    if(lim==2){
                cout<<n1<<",";cout<<n2<<endl;
                exit(1);
              }
    cout<<n1<<","<<n2;
    for(int i =3; i<=lim; i++)
    {     
        sum = n1+n2;
        cout<<","<<sum;
        n1 = n2;
        n2 = sum;

    }

    cout<<endl;
    return 0;
}