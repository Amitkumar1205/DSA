//List me directly element ko acces nhii kr payenge like array,deque,vector 
//esme traverse krke jana pdega 
#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int>l;

l.push_back(1);
l.push_front(2);

for(int i:l){
    cout<<i<<" ";
}

cout<<endl;
//begin wale element ko erase kro
l.erase(l.begin());

cout<<"after erase"<<endl;
for(int i:l){
    cout<<i<<" ";
}

cout<<"size of list "<<l.size()<<endl;
}