#include<iostream>
using namespace std;

void swap_by_Value(int a, int b);
void swap_by_Pointer(int *a, int *b);
int & swap_by_callReerenceVariables(int &a, int &b);

int main()
{
    int a,b;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    cout<<"\nValue of a -> "<<a<<"   Value of b -> "<< b;

    swap_by_Value(a,b);
    cout<<"\nValue of a -> "<<a<<"   Value of b -> "<< b;// value is still same...
    swap_by_Pointer(&a,&b);
    cout<<"\nValue of a -> "<<a<<"   Value of b -> "<< b;//value are exchanged....
    swap_by_callReerenceVariables(a,b)=777;// this value(777) becomes equal to the return value that is 'a' in this function so a=777 and b=b;
    cout<<"\nValue of a -> "<<a<<"   Value of b -> "<< b;//value are exchanged again so same value as first time...LOL..54

    cout<<endl;
    return 0;
}
void swap_by_Value(int a, int b)
{
    a=a+b-(b=a);
}
void swap_by_Pointer(int *a, int *b)
{
    *a=*a+*b-(*b=*a);
}
int & swap_by_callReerenceVariables(int &a, int &b)
{
    a=a+b-(b=a);
    return a;
}
