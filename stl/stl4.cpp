#include <iostream>
using namespace std;

class FunctionObj
{
public:
    int operator()(int x, int y)
    {
        return x * y;
    }
};

int main()
{
    FunctionObj fobj;

    int mult = fobj(4, 7);

    cout << "Multiplication of x and y is: " << mult << endl;

    return 0;
}