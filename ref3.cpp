#include <iostream>
using namespace std;

void swap(int &n1, int &n2)
{
    int temp = n1;
    n1 = n2;
    n2 = temp;
}

int main()
{
    int x = 12;
    int y = 17;

    cout << "Before swap - x: " << x << endl;
    cout << "Before swap - y: " << y << endl;

    swap(x, y);

    cout << "After swap - x: " << x << endl;
    cout << "After swap - y: " << y << endl;

    return 0;
}