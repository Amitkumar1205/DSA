//set ke andar sare ke sare unique elements hote h...koi ek se jayada bar nhi aaata h
//eski implimentation bst ke use se kiya jata hai..
//esme koi bhi element dal chuke hai to usko modifie nhii kr skte h ya to dalo ya delete kro bs...
//sorted order me element return hote hai..
//unorderd set set se slow hota h ...esme element sorted way me nhii aate hai..

#include<iostream>
#include<set>
using namespace std;
int main(){
set<int> s;

//insert ki comlexity O(logn) hoti hai..
s.insert(5);
s.insert(5);
s.insert(6);
s.insert(6);
s.insert(4);
s.insert(3);
s.insert(2);
s.insert(1);

for(auto i:s){
    cout<<i<<endl;
}cout<<endl;

//s.begin() sirf begin wala element delete krega...
s.erase(s.begin());
for(auto i:s){
    cout<<i<<endl;
}cout<<endl;



//iterator begin ko donate krega phir it++ krne se begin chhodkr next wala delete ho jayega..
set<int>::iterator it=s.begin();
it++;

s.erase(it);
for(auto i:s){
    cout<<i<<endl;
}
cout<<endl;

//count btata hai element present hai ya nhii hai....

cout<<"-5 is present or not->"<<s.count(-5)<<endl;
set<int>::iterator itr=s.find(5);

for(auto it=itr;it!=s.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
}