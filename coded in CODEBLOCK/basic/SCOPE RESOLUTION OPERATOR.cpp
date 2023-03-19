#include<iostream>
using namespace std;
int c=45;
int main()
{
    int a,b,c;
    cout<<"Enter value of a: ";
    cin>>a;
    cout<<"Enter value of b: ";
    cin>>b;
    c = a + b;
    cout<<"C (sum of a and b) is: "<<c;
    cout<<"\nTHE GLOBAL VALUE OF C is: "<<::c;//  :: ---> It is called SCOPE RESOLUTION OPERATOR

     // ************* Float, double and long double Literals****************
     float d=34.4F;
     long double e = 34.4L;
     cout<<"\n\nThe size of 34.4 is "<<sizeof(34.4)<<endl;  // by default decimal numbers are taken as double.
     cout<<"The size of 34.4f is "<<sizeof(34.4f)<<endl;
     cout<<"The size of 34.4F is "<<sizeof(34.4F)<<endl;
     cout<<"The size of 34.4l is "<<sizeof(34.4l)<<endl;
     cout<<"The size of 34.4L is "<<sizeof(34.4L)<<endl;
     cout<<"The value of d is "<<d<<endl<<"The value of e is "<<e;

     // *************Reference Variables****************
     // Rohan Das----> Monty -----> Rohu ------> Dangerous Coder
     float x = 752;
     float &y = x;
     cout<<"\n\nx = "<<x<<endl;
     cout<<"y = "<<y<<endl;

     // *************Typecasting****************
    int i = 45;
    float j = 45.46;
    cout<<"\n\nThe value of i is "<<(float)i<<endl;
    cout<<"The value of i is "<<float(i)<<endl;

    cout<<"The value of j is "<<(int)j<<endl;
    cout<<"The value of j is "<<int(j)<<endl;
    int k = int(b);

    cout<<"The expression is "<<i + j<<endl;
    cout<<"The expression is "<<i + int(j)<<endl;
    cout<<"The expression is "<<i + (int)j<<endl;


    return 0;
}
