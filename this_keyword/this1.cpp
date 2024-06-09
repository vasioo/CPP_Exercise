#include<iostream>

using namespace std;

class A
{
    private:
    int x;
    int y;
    int z;

    public:
    void set(int x,int y,int z)
    {
        this->x=x;
        this->y=y;
        this->z=z;
    }
    void print()
    {
        cout<<"X value is: "<<x<<endl;
        cout<<"Y value is: "<<y<<endl;
        cout<<"Z value is: "<<z<<endl;
    }
};

int main()
{
    A obj;

    obj.set(20,54,65);
    obj.print();
    return 0;
}