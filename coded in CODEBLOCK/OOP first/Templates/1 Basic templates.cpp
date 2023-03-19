#include <iostream>

using namespace std;
template <class T>
class Vector
{
public:
    T *arr;
    int size;
    Vector(int size)
    {
        this->size = size;
        arr = new T[size];
    }
    T DotProduct(Vector &v)
    {
        T sum = 0;
        for (int i = 0; i < size; i++)
        {
            sum += this->arr[i] * v.arr[i];
        }
        return sum;
    }
};

int main()
{
    // Vector v1(3),v2(3);
    // v1.arr[0]=4;
    // v1.arr[1]=0;
    // v1.arr[2]=1;
    // v2.arr[0]=1;
    // v2.arr[1]=5;
    // v2.arr[2]=1;
    // cout<<v1.DotProduct(v2);

    Vector<float> v1(3);
    Vector<float> v2(3);
    v1.arr[0] = 4.2;
    v1.arr[1] = 0;
    v1.arr[2] = 1;
    v2.arr[0] = 1;
    v2.arr[1] = 5;
    v2.arr[2] = 1.2;
    cout << v1.DotProduct(v2);

    cout << endl;
    return 0;
}
