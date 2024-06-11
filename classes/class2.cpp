#include<iostream>
using namespace std;

class Billboard
{

    private:
    string title;

    public:
    void setTitle(string x)
    {
        title = x;
    }
    string getTitle()
    {
        return title;
    }
};

int main()
{
    Billboard billboard;

    billboard.setTitle("title_new");
    cout<<billboard.getTitle()<<endl;

    return 0;
}