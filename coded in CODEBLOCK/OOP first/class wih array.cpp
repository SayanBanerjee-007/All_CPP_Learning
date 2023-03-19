#include<iostream>
#include<string>
using namespace std;

class Employee{

   private:
       static int count;
       string name;
       int id;
       float salary;
       void salarynum(){salary = 4500.55;}
       void displaydata();

   public:
       void getdata(){
       cout<<"Enter No."<<count+1<<" employee name: ";fflush(stdin);cin>>name;
       cout<<"Enter Id--> ";cin>>id;
       salarynum();
       displaydata();
       }
};
void Employee :: displaydata(){

       cout<<"Employee No."<<count+1<<"Name -> "<<name<<" , Id --> "<<id<<" , Salary -> "<<salary<<endl<<endl;
       count++;
}
int Employee :: count;

int main()
{
//    int lim;
//    Employee *arr;

//    cout<<"Enter numbers of employee you want to write: ";cin>>lim;
//    if((arr = malloc(lim * sizeof(Employee))==0){
//        cout<<"Error!!You don't have required memory available in F**KING old computer.\nUpgrade it. LOL***";
//        exit(0);
//    }

    Employee arr[4];
    for(int i=0;i<4;i++){
        arr[i].getdata();
    }
    return 0;
}

