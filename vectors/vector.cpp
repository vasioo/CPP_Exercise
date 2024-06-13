#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> n;
    n.assign(9, 1);

    cout << "The contents are: "<<endl;
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i]<<"\t";
    }

    n.push_back(2);

    int no=n.size();

    cout << "Last element: "<<n[no-1]<<endl;

    n.pop_back();
    cout << "Now the contents are: "<<endl;
    for (int i = 0; i < n.size(); i++)
    {
        cout << n[i]<<"\t";
    }

    n.insert(n.begin(),7);
    cout<<"First element is: "<<n[0]<<endl;

    n.clear();
    cout<<"The size is: "<<n.size()<<endl;
    return 0;
}