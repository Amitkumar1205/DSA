//starting me and ending me dono side push and pop operation kr skte h

#include<iostream>
#include<deque>
using namespace std;

int main(){
//deque d create ho gya h yha

deque<int>d;
d.push_front(2);
d.push_front(1);
d.push_back(3);
d.push_back(4);

for(int i:d){
    cout<<i<<" ";
}

d.pop_back();

cout<<endl;
for(int i:d){
    cout<<i<<" ";
}

d.pop_front();

cout<<endl;
for(int i:d){
    cout<<i<<" ";
}

cout<<endl;

for(int i:d){
    cout<<i<<" ";
}
cout<<endl;

cout<<"print first Index element->"<<d.at(0)<<endl;

cout<<"front "<<d.front()<<endl;
cout<<"back cou"<<d.back()<<endl;

cout<<"empty or not"<<d.empty()<<endl;


cout<<"before erase "<<d.size()<<endl;

//(kha se kha tk erase krna h esme likhna pdega nhi to error aayega.....like  d.begin()se start kro aur d.begin()+1 tak chlo)

d.erase(d.begin(),d.begin()+1);

cout<<"after erase "<<d.size()<<endl;

for(int i:d){
    cout<<i<<endl;
}

}