#include<iostream>
using namespace std;

int main()
{
    for(int i=1;i<=10;i++){
    static int a=0;
    a = a + 1;    // Here a value should be always 1 but it will not possible as int is static
    cout<<"a -> "<<a<<endl; // values will be--> 1,2,3,4,5,6,7,8,9,10
    }
}
