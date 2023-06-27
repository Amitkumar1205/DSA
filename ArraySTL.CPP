#include<iostream>
#include<array>

using namespace std;
int main(){
    //generally array is represented as
    int basic[3]={1,2,3};
    //but in STL 
    array<int,4>a={1,2,3,4};

    int size=a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<endl;

    }
    //O(1)
    cout<<"Element at 2nd Index->"<<a.at(2)<<endl;

    //returns boolean O(1)
    cout<<"Empty or not->"<<a.empty()<<endl;
    //O(1)
    cout<<"First Element->"<<a.front()<<endl;
    cout<<"last element->"<<a.back()<<endl;


}