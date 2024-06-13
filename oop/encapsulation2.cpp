#include <iostream>
using namespace std;

class Ball
{

private:
    float area;

public:
    void setArea(int radius)
    {
        area = 3.14 * radius * radius;
    }
    float getArea()
    {
        return area;
    }
};

int main()
{
    Ball obj;
    obj.setArea(6);
    cout << "Area of ball is: " << endl;
    cout << obj.getArea();
    return 0;
}