#include <iostream>
using namespace std;

class Base
{
public:
    virtual void print()
    {
        cout<<"This is the base class."<<endl;
    }
};

class Child : public Base
{
    public:
    void print()
    {
        cout<<"This is the child class."<<endl;
    }
};

int main()
{
    Base* b;
    Child c;
    //The pointer goes to the highest of the initialization
    b=&c;
    b->print();
    return 0;
}