#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex operator+(Complex obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;
        return temp;
    }
    void output()
    {
        cout<<"Output is: "<<real<<" + "<<imag<<"i"<<endl;
    }
    void input()
    {
        cout << "Enter real and imaginary parts: ";
        cin >> real;
        cin >> imag;
    }
};

int main()
{
    Complex c1, c2, res;

    cout << "Enter first complex number: ";
    c1.input();
    cout << "Enter second complex number: ";
    c2.input();

    res = c1 + c2;
    res.output();

    return 0;
}