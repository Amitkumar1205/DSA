//FIRST IN FIRST OUT
#include<iostream>
#include<queue>

using namespace std;

int main(){
    queue<string>q;
    q.push("Amit");
    q.push("kumar");
    q.push("paswan");

    cout<<"first element->"<<q.front()<<endl;

    q.pop();

    cout<<"first element->"<<q.front()<<endl;

    cout<<"size after pop->"<<q.size()<<endl;
}