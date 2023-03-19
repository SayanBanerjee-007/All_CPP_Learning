#include <iostream>

using namespace std;
class Complex
{
    int x;
    int y;

public:
    void input(int xx, int yy)
    {
        x = xx;
        y = yy;
    }
        void sum(Complex o1, Complex o2)
        {

            x = o1.x + o2.x;
            y = o1.y + o2.y;
        }
        void display(void)
        {
            cout << "The sum is -> " << x << " + " << y << "i" << endl;
        }
    };

    int main()
    {

        Complex a, b, c;
        a.input(2, 5);
        a.display();

        b.input(9, 6);
        b.display();

        c.sum(a, b);
        c.display();

        cout << endl;
        return 0;
    }