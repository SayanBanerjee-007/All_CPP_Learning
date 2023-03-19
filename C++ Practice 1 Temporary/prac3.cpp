#include <iostream>

using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    static int counter;

public:
    void setPriceId(void);
    void displayPrice(void);
};
int Shop::counter;
void Shop ::setPriceId(void)
{
    
    cout << "Enter item Id(" << counter + 1 << "): ";
    cin >> itemId[counter];
    cout << "Enter item Price: ";
    cin >> itemPrice[counter];
    counter++;
    cout<<counter<<endl<<endl;
}
void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item Id(" << itemId[i] << ")"
             << " Price -->" << itemPrice[i]<<endl;
    }
}
int main()
{
    Shop dukan;
    dukan.setPriceId();
    dukan.setPriceId();
    

    dukan.displayPrice();

    cout << endl;
    return 0;
}