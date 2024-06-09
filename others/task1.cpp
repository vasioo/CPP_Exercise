#include <iostream>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    cin >> str;
    cout << "Your string is: "<<str<<endl;
    str.push_back('A');
    cout << "Your string after push back: " << str << endl;
    str.pop_back();
    cout << "Your string after pop back: " << str << endl;
    return 0;
}