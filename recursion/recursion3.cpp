#include <iostream>

using namespace std;

int fibo(int number)
{
    if (number < 2)
    {
        return number;
    }
    else
    {
        return fibo(number-1)+fibo(number-2);
    }
}

int main()
{
    int number;

    cout << "Enter the desired value: ";
    cin >> number;

    for (int i = 0; i < number; i++)
    {
        cout << fibo(i) << " ";
    }

    return 0;
}