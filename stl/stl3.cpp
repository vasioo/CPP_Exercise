#include <iostream>
using namespace std;

int main()
{
    int i = 7;
    int j = 10;

    cout << "Value of i before swap: " << i << endl;
    cout << "Value of j before swap: " << j << endl;

    swap(i, j);
    cout << endl;

    cout << "Value of i after swap: " << i << endl;
    cout << "Value of j after swap: " << j << endl;

    return 0;
}