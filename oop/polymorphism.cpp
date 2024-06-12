#include <iostream>
using namespace std;

class King{
    public :
        void Pro(int a, int b){
            cout << a <<"\t"<< b << endl;
}

void Pro(int a, int b, int c, int d, int e)
{
    cout << (a+b+c+d+e) <<endl;
}
};

int main()
{
    King k;
    k.Pro(5,1);
    k.Pro(1,2,3,4,5);

    return 0;
}