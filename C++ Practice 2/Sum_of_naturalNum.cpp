#include<iostream>

using namespace std;

int main()
{
    int num,res=0;
    cout<<"Enter limit: ";cin>>num;
    for(int i = 0;i <= num;i++){
        res+=i;
    }
    cout<<"Sum of 0 to "<<num<<" numbers is --> "<<res;

    cout<<endl;
    return 0;
}