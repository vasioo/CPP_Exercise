#include<iostream>
using namespace std;

class Gambit
{

    public:
    Gambit()
    {
        cout<<"Hellow i am constructor"<<endl;
    }
    ~Gambit()
    {
        cout<<"I am destructor"<<endl;
    }
    void display()
    {
        cout<<"Hello,END"<<endl;
    }

};

int main()
{
    Gambit gam;

    gam.display();

    return 0;
}