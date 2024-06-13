#include<iostream>
using namespace std;

int main()
{
    int age= 25;

    try
    {
        if(age>=24)
        {
            cout<<"The person is allowed to drink."<<endl;
        }
        else{
                throw(age);
        }
    }
    catch(int age)
    {
        cout<<"You dont have the access to drink alcholo"<<endl;
        cout<<age;
    }

    return 0;
}