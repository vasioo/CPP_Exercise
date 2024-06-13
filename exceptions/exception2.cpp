#include <iostream>
using namespace std;

int main()
{
    int num;
    int denum;
    int output;

    cout << "Please enter the numbers to do the devision: ";
    cin >> num;
    cin >> denum;
    try
    {
        if (denum == 0)
        {
            throw(denum);
        }
        else
        {
            output = num / denum;
        }
    }
    catch (int d)
    {
        cout << "You cannot enter 0 in the denominator" << endl;
    }
    cout << "The output is: " << output << endl;
    return 0;
}