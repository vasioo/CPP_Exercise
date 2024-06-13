#include<iostream>
using namespace std;

class Company
{
    private:
    int salary;

    public:
    void setSalary(int ft,int overtime)
    {
        salary = ft+overtime;
    }
    int getSalary()
    {
        return salary;
    }
};

int main()
{
    Company obj;
    obj.setSalary(30000,6000);
    cout<<"Total salary: "<<endl;
    cout<<obj.getSalary();
    return 0;
}