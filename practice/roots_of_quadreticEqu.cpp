#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout<<"Enter coefficients of a: ";cin>>a;
    cout<<"Enter coefficients of b: ";cin>>b;
    cout<<"Enter coefficients of c: ";cin>>c;

    discriminant=pow(b,2)-(4*a*c);
    if(discriminant > 0){
        x1 = (-b+sqrt(discriminant))/(2*a);
        x2 = (-b-sqrt(discriminant))/(2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }else if(discriminant == 0){
        x1 = -b/(2*a);x2 = x1;
        cout << "Roots are real and same." << endl;
        cout << "x1 = x2 = " << x1 << endl;
    }else{
        realPart = -b/(2*a);
        imaginaryPart = sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    cout<<endl;
    return 0;
}