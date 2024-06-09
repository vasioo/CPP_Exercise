#include <iostream>
using namespace std;

void Salary_Change(int sal){
    sal =30000;
    cout<<"Value inside function: "<<sal<<endl;
}

int main()
{
    int sal =27000;
    Salary_Change(sal);
    cout<<"Value inside main: "<<sal<<endl;

    return 0;
}
