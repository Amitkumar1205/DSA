#include<iostream>
using namespace std;
int power(int n){
    //base case
    //power(n)=2*power(n-1)

    if(n==0)
    return 1;

    return 2*power(n-1);
}

int main(){
    int n;
    cout<<"Enter the n"<<endl;
    cin>>n;

    int ans=power(n);
    cout<<ans<<endl;

    return 0;
    


}