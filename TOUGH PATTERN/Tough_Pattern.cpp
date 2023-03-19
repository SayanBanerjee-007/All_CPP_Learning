#include<iostream>
using namespace std;
int main()
{
    int row, col, count = 1, div1, div2, div3, div4;
    cout << "Enter row numbers: ";
    cin >> row;
    for (int i = 2; i < row; i++)
    {
        count += 2;
    }
    col = (row * 2) + count;
    //cout<<col<<endl;

    count = -2;
    for (int i = 1; i < row; i++)
    {
        count++;
    }
    div1 = row + 1;
    div2 = (div1 * 2) + count;
    div3 = (div1 * 3) + (count * 2);
    //cout<<div1<<div2<<div3<<endl;
    div4 = div1;

    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= col; j++)
        {
            if ((i + j) == div1 || (i + j) == div2 || (i + j) == div3)
            {
                cout << " *";
            }
            else if ((i + j) == div4 || (i + j) == div4 + ((row * 2) - 2))
            {
                cout << " *";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
        div4 += 2;
    }

    return 0;
}