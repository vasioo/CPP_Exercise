#include <iostream>
using namespace std;

int n;

int& club()
{
    // Variables cannot be initialized

    return n;
}

int main()
{
    club() = 75;
    cout<<n;
    return 0;
}