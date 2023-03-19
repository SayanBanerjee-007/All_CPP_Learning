#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int *ptr1 = &a;
    cout << "Value of a at address of ptr1 is: " << *ptr1 << endl;

    //int *ptr2 = new int(40);
    float *ptr2 = new float(47.2333);
    cout << "Value at address of ptr2 is: " << *ptr2 << endl;

    int *arr = new int[3];
    arr[0] = 75;
    arr[1] = 12;
    arr[2] = 91;
   // delete[] arr;
    cout<<"Value at address of arr[0] is: "<< arr[0]<<endl;    
    cout<<"Value at address of arr[1] is: "<< arr[1]<<endl;
    cout<<"Value at address of arr[2] is: "<< arr[2]<<endl;
    cout << endl;
    return 0;
}