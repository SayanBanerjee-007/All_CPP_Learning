#include<iostream>

using namespace std;

class simple{
    int data1,data2;
    public:
    simple(int a,int b=75)
    {
        data1=a;
        data2=b;
    }
    void PrintNumber(void)
    {
        cout<<"The numbers are -> "<<data1<<" , "<<data2<<endl;
    }

};

int main()
{
    simple obj=simple(11654,9999);
    
    obj.PrintNumber();

    cout<<endl;
    return 0;
}