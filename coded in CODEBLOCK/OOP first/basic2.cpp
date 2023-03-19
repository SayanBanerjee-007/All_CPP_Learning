// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// ********Nesting of member functions*******

#include<iostream>
#include<string>

using namespace std;

class Binary{

    private:
       string s;
       void chk_bin(void);

    public:
       void read(void);
       void interchange(void);
       void display(void);
};
void Binary :: read(void){
     cout<<"Enter a binary number: ";
     cin>>s;
     chk_bin();// ---> Nesting of member functions
}
void Binary :: chk_bin(void){
     for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"Incorrect binary format.";
            exit(0);
        }
     }

}
void Binary :: interchange(void){
     for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)= '0';
        }else{
            s.at(i)= '1';
        }
     }
}
void Binary :: display(void){
     cout<<"\nDisplaying binary number";
     for(int i=0;i<s.length();i++){
        cout<<s.at(i);
     }
}
int main()
{

    Binary b1;
    b1.read();
   // b1.chk_bin(); // this will throw error as this function is private.... LOl
    b1.display();
    b1.interchange();
    b1.display();
    cout<<endl;
    return 0;
}
