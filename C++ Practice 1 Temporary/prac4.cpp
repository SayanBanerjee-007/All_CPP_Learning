#include<iostream>

using namespace std;
class Employee{
    
    int id,salary=455;
    static int n;
    public:
    void setid(void){
        cout<<"Enter employee id: ";
        cin>>id;
    }
    void getid(void){
        cout<<"Employee id --> "<<id<<endl;
        cout<<n<<endl;n++;
    }
};
int Employee:: n;
int main()
{
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setid();
        fb[i].getid();
    }
    

    cout<<endl;
    return 0;
}