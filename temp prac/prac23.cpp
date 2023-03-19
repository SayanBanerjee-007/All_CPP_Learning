#include <iostream>
#include <cmath>

using namespace std;
float InRadin(float);
class SimpleCalculator
{
protected:
    float num1_SimCal, num2_SimCal;

public:
    void SetNum_SimCal(void)
    {
        cout << "Enter FIRST number of Simple_Calculator: ";
        cin >> num1_SimCal;
        cout << "Enter SECOND number of Simple_Calculator: ";
        cin >> num2_SimCal;
        cout << endl;
    }
    void show_SimCal(void);
};
void SimpleCalculator ::show_SimCal(void)
{
    cout << "The sumation of " << num1_SimCal << " and " << num2_SimCal << " is -> " << num1_SimCal + num2_SimCal << endl;
    cout << "The subtraction of " << num1_SimCal << " and " << num2_SimCal << " is -> " << num1_SimCal - num2_SimCal << endl;
    cout << "The multipication of " << num1_SimCal << " and " << num2_SimCal << " is -> " << num1_SimCal * num2_SimCal << endl;
    cout << "The division of " << num1_SimCal << " and " << num2_SimCal << " is -> " << num1_SimCal / num2_SimCal << endl;
}
class ScientificCalculator
{
    friend float InRadin(float);
protected:
    float num1_SciCal, num2_SciCal;

public:
    void SetNum_SciCal()
    {
        cout << "Enter FIRST number of Scientific_Calculator: ";
        cin >> num1_SciCal;
        cout << "Enter SECOND number of Scientific_Calculator: ";
        cin >> num2_SciCal;
        cout << endl;
    }

    void show_SciCal(void);

// private:
//     float InRadin(float degree)
//     {
//         return (degree * 22) / (180 * 7);
//     }
};
void ScientificCalculator ::show_SciCal(void)
{
    cout << "The cos of " << num1_SciCal << " and " << num2_SciCal << " is respectively " << cos(InRadin(num1_SciCal)) << " and " << cos(InRadin(num2_SciCal)) << endl;
    cout << "The sin of " << num1_SciCal << " and " << num2_SciCal << " is respectively " << sin(InRadin(num1_SciCal)) << " and " << sin(InRadin(num2_SciCal)) << endl;
    cout << "The exp of " << num1_SciCal << " and " << num2_SciCal << " is respectively " << exp(num1_SciCal) << " and " << exp(num2_SciCal) << endl;
    cout << "The tan of " << num1_SciCal << " and " << num2_SciCal << " is respectively " << tan(InRadin(num1_SciCal)) << " and " << tan(InRadin(num2_SciCal)) << endl;
}
class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
};
int main()
{
    HybridCalculator hcal;
    hcal.SetNum_SimCal();
    hcal.show_SimCal();
    hcal.SetNum_SciCal();
    hcal.show_SciCal();
    cout << endl;
    return 0;
}
float InRadin(float degree)
{
    return (degree * 22) / (180 * 7);   
}