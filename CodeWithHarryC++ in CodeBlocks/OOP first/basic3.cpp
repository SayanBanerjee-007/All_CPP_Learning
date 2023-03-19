#include<iostream>
using namespace std;

class shop{
   int itemid[100];
   int itemprice[100];
   int counter;
   public:
       void numcounter(){counter=0;}
       void setprice();
       void displayprice();
};
void shop :: setprice(){

   cout<<"Enter itemNo."<<counter+1<<" id:";cin>>itemid[counter];
   cout<<"Enter item price: ";cin>>itemprice[counter];
   cout<<endl;
   counter++;
}
void shop :: displayprice(){

   for(int i=0;i<counter;i++){
    cout<<"The item with id "<<itemid[i]<<" worths "<<itemprice[i]<<endl;
   }
}
int main()
{
    shop s1;
    s1.numcounter();
    s1.setprice();
    s1.setprice();
    s1.setprice();
    s1.displayprice();


    return 0;
}
