#include <iostream>

using namespace std;
class Number
{
    int num;

public:
    Number(void)
    {
        num = 0;
    }
    Number(int n)
    {
        num = n;
    }
    //WHEN NO COPY CONSTRUCTOR IS FOUND ,COMPILER SUPPLY ITS OWN COPY CONSTRUCTOR.
    Number(Number &obj) // COPY CONSTRUCTOR or in my way REFERENCE CONSTRUCTOR
    {
        num = obj.num;
        //obj.num=1112; // FULLY ACESS ON OBJ.NUM 
        //cout<<obj.num<<endl;
        cout<<"COPY CONSTRUCTOR IS CALLED"<<endl;
    }
    void display(void);
};
void Number::display(void)
{
    cout<<"The number for this object is -> "<<num<<endl;
}
int main()
{
    Number x,y,z(45);
    x.display();
    y.display();
    z.display();

    Number z1,z2;

    z1 = Number(z);//  z value is assigned to z2 by invoking copy constructor
    z1.display();
    
    z2=z;        // z value is assigned to z2 but copy constructor is not invoked
    z2.display();

    Number z3=z;//  z value is assigned to z2 by invoking copy
    z3.display();

    cout << endl;
    return 0;
}