#include<iostream>
#include<fstream>

using namespace std;

int main()
{
    string name,recive;
    cout<<"Enter your name: ";
    cin>>name;

    ofstream nameout("file38.txt");
    ifstream recive_data("file38b.txt");
    getline(recive_data,recive);
    nameout<<"My name is "+ name + recive;
    recive_data.close();
    nameout.close();


    cout<<endl;
    return 0;
}
