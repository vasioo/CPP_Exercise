#include<iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int *ptr;
    ptr = new int[size];

    cout<<"Enter the elements: ";
    for (int i = 0; i < size; i++)
    {
       cin>>ptr[i];
    }
    
    cout<<"Elements that you have entered: ";

    for (int i = 0; i < size; i++)
    {
        cout<<"Element: "<<ptr[i]<<endl;
    }

    delete[] ptr;    

    return 0;
}