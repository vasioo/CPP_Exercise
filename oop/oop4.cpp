#include<iostream>
using namespace std;

class Bevarage
{
    public:
    void drinks()
    {
        cout<<"All drinks are available"<<endl;
    }
};

class Coffee:public Bevarage
{
    public:
    void mocha()
    {
        cout<<"Mocha is the best"<<endl;
    }
};

int main()
{
    Coffee c;
    c.mocha();
    c.drinks();

    return 0;
}