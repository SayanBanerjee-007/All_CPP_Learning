#include <iostream>

using namespace std;
class Complex
{
    int real, imaginary;

public:
    void getdata(void)
    {
        cout << "Value of real part is: " << real << endl;
        cout << "Value of imaginary part is: " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    //Complex obj;
    //Complex *ptr = &obj;
    Complex *ptr = new Complex;

    //obj.setdata(45,7);
    //obj.getdata();
    //(*ptr).setdata(45, 7);
    ptr->setdata(45, 7);
    //(*ptr).getdata();
    ptr->getdata();

    cout << endl;
    return 0;
}