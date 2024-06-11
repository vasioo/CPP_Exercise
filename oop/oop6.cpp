#include <iostream>
using namespace std;

class Chemistry
{
public:
    int marks1;

    void chemistry_marks()
    {
        cout << "Enter the marks in chemistry: ";
        cin >> marks1;
    }
};

class Physics : public Chemistry
{
public:
    int marks2;

    void physics_marks()
    {
        cout << "Enter the marks in physics: ";
        cin >> marks2;
    }
};

class Maths : public Physics
{
public:
    int marks3;
    int total;

    void maths_marks()
    {
        cout << "Enter the marks in maths: ";
        cin >> marks3;
    }
    void result()
    {
        total = marks1 + marks2 + marks3;
        cout << total << endl;
    }
};

int main()
{
    Maths m;
    m.chemistry_marks();
    m.physics_marks();
    m.maths_marks();
    m.result();
    return 0;
}