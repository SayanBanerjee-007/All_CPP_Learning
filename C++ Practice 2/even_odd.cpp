#include<iostream>

using namespace std;

int main()
{
    int num;cout<<"Enter an INTEGER number: ";cin>>num;
    //if(num==0){
    //    cout<<num<<" is nither EVEN nor ODD number.";
    //}else if(num % 2 == 0){
    //    cout<<num<<" is EVEN number.";
    //}else{
    //    cout<<num<<" is ODD number.";
    //}
    (num == 0)?(cout<<num<<" is nither EVEN nor ODD number."):(num%2==0)?(cout<<num<<" is EVEN number."):(cout<<num<<" is ODD number.");

    cout<<endl;
    return 0;
}