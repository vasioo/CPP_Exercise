#include <iostream>
using namespace std;

class Animal
{
public:
    void speed()
    {
        cout << "Who is faster?" << endl;
    }
};
class Cheetah : public Animal
{
    public:
    void speed()
    {
        cout<<"Cheetahs are faster"<<endl;
    }
};
class Dolphin : public Animal
{
    public:
    void speed()
    {
        cout<<"Dolphins are faster"<<endl;
    }
};

int main()
{
    Animal a;
    Cheetah ch;
    Dolphin d;

    a.speed();
    ch.speed();
    d.speed();

    return 0;
}