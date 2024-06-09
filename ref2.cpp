#include <iostream>

using namespace std;

int main()
{
    int num = 70;
    int &n1 = num;
    int &n2 = num;

    cout<<"Num: "<<num<<endl;
    cout<<"N1: "<<n1<<endl;
    cout<<"N2: "<<n2<<endl;


    return 0;
}