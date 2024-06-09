#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i <= 10; i++)
    {
        cout << i << endl;
    }
    int n = 0;
    while (n != 11)
    {
        cout << "Welcome" << n << endl;
        n++;
    }

    for(int i=1;i<=10;i++)
    {
        cout<<"\n";
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
    }

    return 0;
}