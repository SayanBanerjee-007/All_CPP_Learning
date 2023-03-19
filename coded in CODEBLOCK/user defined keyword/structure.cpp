#include<iostream>
using namespace std;

typedef struct employee{

   int Id;
   char ch;
   float salary;

}em;

int main()
{
    //struct employee e1;  ---> OLD type LOL...
    em e1;
    e1.Id=777;
    e1.ch='S';
    e1.salary=140000000;
    cout<<"Value of Id --->"<<e1.Id<<endl;
    cout<<"Value of ch --->"<<e1.ch<<endl;
    cout<<"Value of salary --->"<<e1.salary<<endl;
    cout<<sizeof(e1);
    return 0;
}
