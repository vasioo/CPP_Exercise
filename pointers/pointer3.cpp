#include <iostream>
using namespace std;

int main()
{
    int *ptr;
    int array[] = {1, 2, 3, 4};

    ptr = array;

    for (int i = 0; i < 4; i++)
    {
        cout<<*ptr<<endl;
        ptr++;
    }
    return 0;
}