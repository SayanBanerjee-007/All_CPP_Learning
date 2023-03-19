#include <iostream>

using namespace std;
class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "id of the item is " << id << endl;
        cout << "price of the item is " << price << endl;
    }
};
int main()
{
    int p;
    float q;
    int size = 4;
    Shop *ptr = new Shop[size];
    //ptr->setData(1,45.2);
    //ptr->getData();
    //(ptr+1)->setData(2,12.5);
    //(ptr+1)->getData();
    for (int i = 0; i < size; i++)
    {
        cout << "Enter itemNo." << i + 1 << " id: ";
        cin >> p;
        cout << "Enter itemNo." << i + 1 << " price: ";
        cin >> q;
        ptr[i].setData(p, q);
    }
    for (int i = 0; i < size; i++)
    {
        cout<<"ItemNo."<< i+1 <<endl;
        (ptr+i)->getData();
    }


    cout << endl;
    return 0;
}
