#include<iostream>
using namespace std;

void Increment(int &s)
{
    s+=3000;
    cout<<"Salary after updating it: "<<s<<endl;
}

int main()
{
    int sal=27000;
    Increment(sal);
    cout<<"Salary inside main: "<<sal<<endl;
    return 0;
}