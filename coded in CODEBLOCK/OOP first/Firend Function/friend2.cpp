#include <iostream>

using namespace std;

//FORWARD DECLERATIOBN
class complex;

class Calculator
{
public:
    friend class complex;
    int add(int x, int y)
    {
        return (x + y);
    }
    int SumRealComplex(complex, complex);
    int SumComComplex(complex,complex);
};

class complex
{
    int a, b;
    // INDIVIDUALY DECLEAING FUNCTION AS FRIENDS

    /*friend int Calculator::SumRealComplex(complex, complex);
      friend int Calculator::SumComComplex(complex, complex);*/

    // DECLEARING THE ENTIRE CLASS AS FRIEND (WHEN YOU HAVE LOT OF FRIEND FUNCTION NEEDED)
    friend class Calculator;

public:
    void SetNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void PrintNumber(void)
    {
        cout << "The sum is -> " << a << " + " << b << "i" << endl;
    }
};
int Calculator::SumRealComplex(complex o1, complex o2){
    return (o1.a+o2.a);
}
int Calculator::SumComComplex(complex o1, complex o2){
    return (o1.b+o2.b);
}
int main()
{
    complex o1,o2;
    o1.SetNumber(4,6);
    o2.SetNumber(9,2);
    Calculator calc;
    int REALres = calc.SumRealComplex(o1,o2);
    int COMres= calc.SumComComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is -> "<<REALres<<endl;
    cout<<"The sum of real part of o1 and o2 is -> "<<COMres<<"i"<<endl;

    cout << endl;
    return 0;
}
