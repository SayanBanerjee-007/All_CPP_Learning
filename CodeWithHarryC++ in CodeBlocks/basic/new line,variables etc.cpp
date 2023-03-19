#include<iostream>
int glo=45500;
using namespace std;
void emp()
{
     cout<<"\nGLOBAL VERIABLE VALUE: "<<glo;// ====> glo value is still same here
}
int main()
{
    int glo=745972;
    glo=957;//     ---->glo value only have changed in this main funcition;
    int num=10;
    float number=10.46;
    char ch='A';
    bool type=false;
    cout<<"Value of num: "<<num<<"\nValue of number: "<<number<<"\nValue of char: "<<ch<<"\nvalue type of boolean(1=true,0=false): "<<type;
    cout<<"\nGLOBAL VERIABLE VALUE IN THIS FUNCTION: "<<glo;
    emp();
    cout<<"\n\n\n";
    return 1;
}

