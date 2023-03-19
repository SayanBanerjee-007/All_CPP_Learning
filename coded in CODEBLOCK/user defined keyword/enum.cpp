#include<iostream>
using namespace std;

int main()
{
    enum meal{breakfast,lunch,dinner};

    meal m1=lunch;// only do this in C++

    cout<<"breakfast --> "<<breakfast<<endl;// Using enum u can oder value
    cout<<"lunch --> "<<lunch<<endl;// Using enum u can oder value
    cout<<"dinner --> "<<dinner<<endl;// Using enum u can oder value

    cout<<"m1 ---> "<<m1<<endl;
    cout<<"(m1==breakfast)---> "<<(m1==breakfast); // this will print 0 as the condition is false. LOL
    return 0;
}
