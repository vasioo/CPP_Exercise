#include <iostream>
using namespace std;

class Parent
{
public:
    void print()
    {
        cout << "This is the base class !" << endl;
    }
};

class Child : public Parent
{
public:
    void print()
    {
        cout << "This is the child class !" << endl;
    }
};

int main()
{
    Child c;
    c.print();
    
    return 0;
}