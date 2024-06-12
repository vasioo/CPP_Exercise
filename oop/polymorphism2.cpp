#include<iostream>
using namespace std;

class Overload
{
    private:
    int n1;
    int n2;

    public:
    Overload(int a, int b)
    {
        int res;
        n1=a;
        n2=b;
        res=n1-n2;
        cout<<"The substraction is: "<<res<<endl;
    }

    void operator-()
    {
        n1=-n1;
        n2=-n2;
    }

    void display()
    {
        cout<<"n1 is: "<<n1<<endl;
        cout<<"n2 is: "<<n2<<endl;
    }
};

int main()
{
    Overload o1(6,8);
    -o1;
    o1.display();
    return 0;
}