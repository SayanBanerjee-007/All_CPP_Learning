#include<iostream>

using namespace std;

int main()
{
    int num,factorial = 1;

    cout<<"Enter an positive integer: ";cin>>num;
    if (num < 0)
        cout << "Error! Factorial of a negative number doesn't exist.";
    else {
        for(int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << "! = " << factorial;    
    }


    cout<<endl;
    return 0;
}