#include <iostream>
#include <fstream>
/*
The usefull classes for working with files in C++
1. fstreambase
2. ifstream -> derived from fstreambase
3. ofstream -> derived from fstreambase
*/

// In oder to work with files in C++, you will have to open it.Primarily, there are 2 ways to open a file:
// 1. Using the constructor
// 2. Using the member function open() of the class
using namespace std;

int main()
{
    string st1 = "skb";
    string st2;

    // Opening files using constructor and writting it:
    ofstream out("sample37a.txt");
    // Writting operation:
    out << st1;

    // Opening files using constructor and reading it:
    ifstream in("sample37b.txt");
    // reading operation:
    //in >> st2;        // For only reading one word.
    getline(in, st2); // For reading the whole line.
    cout << st2;

    cout << endl;
    return 0;
}
