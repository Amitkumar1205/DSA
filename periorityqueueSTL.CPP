//AISI QUEUE JISKA FIRST ELEMENT HMESA GREATEST HOGA

#include<iostream>
#include<queue>

using namespace std;
int main(){
    //es trha se queue bnane pr jb bhi koi element bahar nikalenge wo hamesa greatest hoga
    //jitne bhi element es periority queue me hai
    //esko max heap bhi bolte hai
    priority_queue<int>maxi;

    //es trha se queue bnane pr jb bhi koi element bahar nikalenge wo hamesa sbse chhota hoga
    //jitne bhi element es periority queue me hai
    //esko min heap bhi bolte hai

    priority_queue<int,vector<int>,greater<int> >min;
    maxi.push(1);
    maxi.push(2);
    maxi.push(3);
    maxi.push(4);

    cout<<"size->"<<maxi.size()<<endl;
    int n=maxi.size();
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    cout<<endl;

    min.push(1);
    min.push(2);
    min.push(3);
    min.push(4);

    
    int m=min.size();
    for(int i=0;i<m;i++){
        cout<<min.top()<<" ";
        min.pop();
    }
    cout<<endl;

    cout<<"khali h kya ?"<<min.empty()<<endl;




}