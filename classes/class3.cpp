#include<iostream>
using namespace std;

class Billboard
{
    private:
    string title;

    public:
    Billboard(string x)
    {
        setTitle(x);
    }

    string getTitle()
    {
        return title;
    }
    void setTitle(string a)
    {
        title = a;
    }
};

int main()
{
    Billboard bill("tOP SONG");

    cout<<bill.getTitle()<<endl;

    return 0;
}