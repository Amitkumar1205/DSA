#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;

    m[1] = "amit";
    m[2] = "kumar";
    m[3] = "paswan";

    m.insert({4, "DSA"});

    cout << "before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout<<"finding -3-->"<<m.count(-3)<<endl;

    m.erase(3);

    cout<<"after erase"<<endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }
    cout<<endl<<endl;

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << endl;
    }
}