#include <iostream>
using namespace std;

enum captain
{
    Az,
    Tis,
    Toz
};

int main()
{
    captain cap = Az;
    if (cap == Az)
    {
        cout << "Our captain is Az and its value is: " << Az << endl;
    }
    else
    {
        cout << "He is not our captain" << endl;
    }
    return 0;
}