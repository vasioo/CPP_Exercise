#include <iostream>
using namespace std;
// quick sort

int divide(int arr[], int start, int end)
{
    int pivot = arr[end];
    int index = start;

    for (int i = start; i < end; i++)
    {
        if (arr[i] < pivot)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
            index++;
        }
    }
    int temp = arr[end];
    arr[end] = arr[index];
    arr[index] = temp;

    return index;
}

void Quick(int arr[], int start, int end)
{
    if (start < end)
    {
        int d = divide(arr, start, end);
        Quick(arr, start, (d - 1));
        Quick(arr, (d + 1), end);
    }
}

int main()
{
    int num;
    int arr[10];

    cout << "Enter the number of elements: ";
    cin >> num;

    cout << "Enter the elements: \n";
    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }

    Quick(arr, 0, (num - 1));

    cout << "After sorting: ";
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}