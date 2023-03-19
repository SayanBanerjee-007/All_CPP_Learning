#include <iostream>
#include <math.h>

using namespace std;

class Point
{
    int x, y;
    friend double DistanceClaculator(Point,Point);
    
public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint(void)
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
double DistanceClaculator(Point p, Point q)
{
    return (sqrt(((pow(q.x,2)-2*q.x*p.x+pow(p.x,2))+(pow(q.y,2)-2*q.y*p.y+pow(p.y,2)))));
}

int main()
{
    Point p(1, 0);
    p.displayPoint();

    Point q(70, 0);
    q.displayPoint();

    double distance=DistanceClaculator(p,q);
    cout<<"The difference between two point is "<<distance << endl;

    cout << endl;
    return 0;
}
