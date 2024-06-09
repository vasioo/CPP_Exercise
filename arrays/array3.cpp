#include<iostream>

using namespace std;

int main()
{
    int mdarray[3][3] = 
    {
        {1,2,3},
        {3,4,5},
        {5,6,7}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<mdarray[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}