#include<iostream>

using namespace std;
//BASE class
class Employee{
   public:
   int id;
   float salary;
   Employee(int intid)
   {
       id=intid;
       salary=34.0;
   }
   Employee(){}

};
//DERIVED class
 // Derived Class syntax
/*class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}*/
/*Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited
*/
// Creating a Programmer class derived from Employee Base class
class Programmer :public Employee{
    public:
    int languageCode;
    Programmer(int intid)
    {
        id=intid;
        languageCode=9;
    }
    void getData(void)
    {
        cout <<id<<endl;
    }

};

int main()
{
    Employee sayan(1),barsha(2);
    cout<<sayan.salary<<endl;
    cout<<barsha.salary<<endl;
    Programmer skillf(10);
    cout<<skillf.languageCode<<endl;
    cout<<skillf.id<<endl;
    skillf.getData();

    cout<<endl;
    return 0;
}
