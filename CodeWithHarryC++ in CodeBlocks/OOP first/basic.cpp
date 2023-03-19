#include<iostream>
using namespace std;

class Employee{

  private:
    int a,b,c;
  public:
    int x,y;
    void getdata(int aa, int bb, int cc);
    void showdata();
 /*{
        printf("value of a is : %d\n",a);
        printf("value of b is : %d\n",b);
        printf("value of c is : %d\n",c);
        printf("value of x is : %d\n",x);
        printf("value of y is : %d\n",y);
    }*/
};
void Employee :: getdata(int aa, int bb, int cc){

        a = aa;
        b = bb;
        c = cc;
}
void Employee::showdata()
{
        printf("value of a is : %d\n",a);
        printf("value of b is : %d\n",b);
        printf("value of c is : %d\n",c);
        printf("value of x is : %d\n",x);
        printf("value of y is : %d\n",y);
}
int main()
{
    Employee harry;
    //harry.a=7; // This will throw error as a,b,c private data...... LOL....
    harry.getdata(4,5,9);
    harry.x=457;
    harry.y=7549;
    harry.showdata();

    return 0;
}



