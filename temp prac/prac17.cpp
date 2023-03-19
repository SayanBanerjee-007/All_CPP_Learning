#include<iostream>

using namespace std;
int count=0;

class Num{
    public:
    Num()
    {
        count++;
        cout<<"Constructor is called for the object no -> "<<count<<endl;
    } 
    ~Num();
};
Num::~Num()
{
    cout<<"distructor is called for the object no -> "<<count<<endl;
    count--;
}

int main()
{
    cout<<"This is main "<<endl;
    cout<<"creating first object n1 "<<endl;
    Num n1;
    cout<<"Entering block"<<endl;
    {
        cout<<"creating two more object"<<endl;
        Num n2,n3;
        cout<<"exiting block"<<endl;
    }// distructor is called for n2 and n3 after exiting this block
    cout<<"Back to main"<<endl;

    cout<<endl;
    // distructor is called for n1 after executing endl and atlast before return function
    return 0;
}