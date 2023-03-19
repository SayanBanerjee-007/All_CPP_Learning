// USE C PLUS PLUS REFERENCE WEBSITE
#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &vec1)
{
    for (int i = 0; i < vec1.size(); i++)
    {
        cout << vec1[i]<<" ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    vector<int> vec2(7, 5);
    vector<int> vec3;
    vec3.assign(2,555);

    int size, element;
    cout << "Enter size of vector: " << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter NO." << i + 1 << " element of vector: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
    display(vec2);
    display(vec3);

    cout << endl;
    return 0;
}