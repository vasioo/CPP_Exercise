#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
    }
    cout << "Size is:" << v.size() << endl;

    v.resize(7);
    cout << "Resized size is: " << v.size() << endl;

    if (!v.empty())
    {
        cout << "It is not empty" << endl;
    }
    else
    {
        cout << "It is empty" << endl;
    }
    cout << "Elements of the vector: " << endl;
    for (auto i = v.begin(); i != v.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}