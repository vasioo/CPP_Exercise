#include<iostream>
using namespace std;

class Franchise
{
    public:
    void KFC()
    {
        cout<<"WE HAVE BEST CHICKEN"<<endl;
    }
    void BurgerKing()
    {
        cout<<"We have best burgers"<<endl;
    }
};

int main()
{
    Franchise f;

    f.KFC();
    f.BurgerKing();
    
    return 0;
}