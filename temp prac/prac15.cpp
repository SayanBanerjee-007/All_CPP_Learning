#include <iostream>

using namespace std;

class BankDeposite
{
    int principle;
    int year;
    float interestRate;
    float ReturnValue;

public:
    BankDeposite(void){};// HEY , GIVE YOUR ATTENTION HERE. YOU WILL THINK WHAT IS THE NEED OF THIS USE OF THIS CONSTRUCTOR. BUT BELIVE ME THIS IS REALLY VERY NEEDED WHEN YOU WILL CREATE OBJECT WITH IMPICIT CALL. ENOUGH KNOWLEDGE , NOW GO AND FUCK THE WORLD UP!!!!!!!!! 
    BankDeposite(int, int, float);
    BankDeposite(int, int, int);
    void show();
};
BankDeposite::BankDeposite(int p, int t, float r)
{
    principle = p;
    year = t;
    interestRate = r;
    ReturnValue = p + (p * t * r);
}
BankDeposite::BankDeposite(int p, int t, int R)
{
    principle = p;
    year = t;
    interestRate = R;
    ReturnValue = p + (p * t * R / 100);
}
void BankDeposite::show()
{
    if (interestRate < 1)
    {
        cout << "The principle vlaue: " << principle << " after " << year << " year with " << interestRate * 100
             << " % interest is -> " << ReturnValue << endl;
    }
    else
    {
        cout << "The principle vlaue: " << principle << " after " << year << " year with " << interestRate
             << " % interest is -> " << ReturnValue << endl;
    }
}
int main()
{
    BankDeposite obj1, obj2, obj3;// USE EXPLICIT CALL TO AVOID THE USE OF USELESS CONSTRUCTOR.lol !!!!!!!!
    int p, t;
    float r;
    int R;

    cout << "Enter the principle amount: ";
    cin >> p;
    cout << "Enter the time period in year: ";
    cin >> t;
    cout << "Enter interestRate in decimal: ";
    cin >> r;
    obj1 = BankDeposite(p, t, r);
    obj1.show();

    cout << endl
         << endl;

    cout << "Enter the principle amount: ";
    cin >> p;
    cout << "Enter the time period in year: ";
    cin >> t;
    cout << "Enter interestRate in percentage: ";
    cin >> R;
    obj2 = BankDeposite(p, t, R);
    obj2.show();

    cout << endl;
    return 0;
}