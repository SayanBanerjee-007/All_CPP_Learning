#include <iostream>
#include <string>

using namespace std;
class Binary
{
private:
    string s;

public:
    void read(void);
    void chk_bin(void);

private:
    void same(void);
    void display(void);
};
void Binary ::read(void)
{
    cout << "Enter a binary number: ";
    cin >> s;
}
void Binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "The number is not a binary number." << endl;
            exit(0);
        }
    }
    cout << "The number is a binary number." << endl;
    cout<<"Before changing -->"<<s<<endl;
    same();
}
void Binary ::same(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    display();
}
void Binary ::display(void)
{
    cout<<"After changing -->"<<s;
}

int main()
{
    Binary ex;
    ex.read();
    ex.chk_bin();

    cout << endl;
    return 0;
}