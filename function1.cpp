#include <iostream>
using namespace std;

void maxb(int a, int b)
{
    if (a > b)
    {
        cout << "The larger number is: " << a << endl;
    }
    else
    {
        cout << "The larger number is: " << b << endl;
    }
}

int main()
{
    int n1, n2;

    cout << "Enter the first number: ";
    cin >> n1;

    cout << "Enter the second number: ";
    cin >> n2;

    maxb(n1, n2);

    return 0;
}