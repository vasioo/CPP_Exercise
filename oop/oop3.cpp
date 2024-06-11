#include<iostream>
using namespace std;

class Tradefair
{
    private:
    int coupon;

    public:
    void setCoupon(int v)
    {
        coupon=v;
    }
    int getCoupons()
    {
        return coupon;  
    }
};

int main()
{
    Tradefair t;
    t.setCoupon(510);

    cout<<"Coupon: "<<t.getCoupons();

    return 0;
}