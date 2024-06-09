#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int sum = 0;
    int sub = 0;
    int *ptr1;
    int *ptr2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    ptr1 = &num1;
    ptr2 = &num2;

    (*ptr1)++;
    (*ptr2)++;

    cout << "After increment ptr1: " << *ptr1 << endl;
    cout << "After increment ptr2: " << *ptr2 << endl;

    sum = *ptr1 + *ptr2;
    cout << "The sum is: " << sum << endl;

    (*ptr1)--;
    (*ptr2)--;

    cout << "After decrement ptr1: " << *ptr1 << endl;
    cout << "After decrement ptr2: " << *ptr2 << endl;

    sub = *ptr1 - *ptr2;
    cout << "The sum after substraction is: " << sub << endl;

    return 0;
}