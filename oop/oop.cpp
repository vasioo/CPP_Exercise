#include <iostream>
using namespace std;

class Parent
{
public:
    string name1 = "Harley";
};

class Child : public Parent
{
public:
    string name2="David";
};

int main()
{
    Child ch;
    cout << ch.name1 + " " + ch.name2 << endl;

    return 0;
}