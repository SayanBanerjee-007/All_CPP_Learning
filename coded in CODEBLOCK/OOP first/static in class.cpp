#include<iostream>
using namespace std;

class Employee{

private:
    static int count;// static variable default value is 0
    int id;
    void displaydata();
public:
    void getdata();
    static void getcount();
};
void Employee :: getdata(){

    cout<<"Enter Id: ";cin>>id;
    count+=1000;
    displaydata();
}
void Employee :: displaydata(){

    cout<<"Id is--> "<<id<<" and employee number--> "<<count<<endl;
}
void Employee :: getcount(){

//    count<<id;  // This will throw error as id is not a static variable.... LOL...
    cout<<"The value of count is"<<count<<endl;
}
int Employee :: count=1000;// if u want to initialize any specific value to static variable declare here LOL/....
int main(){

    Employee skb,idk,lol;
    skb.getdata();
    Employee::getcount();
    idk.getdata();
    Employee::getcount();
    lol.getdata();
    Employee::getcount();

    return 0;
}
