#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int maxNO, minNO;
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter No." << i + 1 << " element: ";
        cin >> arr[i];
    }
    maxNO = INT_MIN;
    minNO = INT_MAX;
    // cout << maxNO << endl
    //      << minNO;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < minNO)
        {
            minNO = arr[i];
        }
        if (arr[i] > maxNO)
        {
            maxNO = arr[i];
        }
    }
    cout << "Number with maximum value is: " << maxNO << endl;
    cout << "Number with minimum value is: " << minNO << endl;

    cout << endl;
    return 0;
}