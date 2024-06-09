#include <iostream>
using namespace std;
//selection sort
int main()
{
    int num;
    int arr[30];
    int p;
    int temp;
    int min;

    cout << "Enter the number of elements: ";
    cin >> num;

    cout << "Enter the elements: \n";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < num - 1; i++)
    {
        min = arr[i];
        p = i;
        for (int j = i + 1; j < num; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                p = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[p];
        arr[p] = temp;
    }

    cout << "Sorted elements: ";

    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << "\t";
    }

    return 0;
}