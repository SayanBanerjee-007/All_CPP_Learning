#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    string str;
    ifstream in;
    in.open("file39.txt");
    //in>>str;
    //getline(in,str); // only one line
    while(in.eof()==0)
    {
        getline(in,str);
        cout<<str<<endl;
    }
    in.close();


    cout<<endl;
    return 0;
}