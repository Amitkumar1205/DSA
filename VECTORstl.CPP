// VECTOR DOUBLES IT'S SIZE
// DAYNAMIC
#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v;
    //vector me phle se integer assign kr skte haur usme value de skte h
    vector<int>a(5,1);
    cout<<"print a->"<<endl;
    for(int i:a){
        cout<<i<<" ";
    } cout<<endl;

    //ek vector me dusre vector ko kaise copy kre..yha pe last name ka ek vector bna aur usme a vector copy ho gya
    vector<int>last(a);

    cout<<"print last->"<<endl;
    for(int i:last){
        cout<<i<<" ";
    } cout<<endl;


    // capacity means total kitne elements ke liye esko memory allocate ki gyi hai
    // size means abhi total kitne elements present hai
    cout << "capacity->" << v.capacity() << endl;
    v.push_back(1);
    cout << "capacity->" << v.capacity() << endl;

    v.push_back(2);
    cout << "capacity->" << v.capacity() << endl;

    v.push_back(3);
    cout << "capacity->" << v.capacity() << endl;
    cout << "size->" << v.size() << endl;

    cout << "Element at 2nd Index" << v.at(2) << endl;

    cout << "front->" << v.front() << endl;
    cout << "back->" << v.back() << endl;

    cout << "befopre pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    v.pop_back();

    cout << "after pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    // capicity matlab kitni memory already asigned hua h
    // clear vector ke time sirf vector ki size zero hoti h capicity nhii..kyuki size btata hai vector me kitne elements present h

    
}