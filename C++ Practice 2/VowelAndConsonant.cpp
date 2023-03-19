#include<iostream>

using namespace std;

int main()
{
    char c;
    bool islowercase,isuppercase;
    cout<<"Enter an alphabet: ";cin>>c;
    islowercase = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    isuppercase = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
   // cout<<islowercase<<endl;
   // cout<<isuppercase;
    if(isalpha(c)){
        if(isuppercase||islowercase){
            cout<<"'"<<c<<"' is vowel.";
        }else{
            cout<<"'"<<c<<"' is consonant.";
        }
    }else{
        cout<<"The character you have entered is not an alphabet.";
    }

    cout<<endl;
    return 0;
}