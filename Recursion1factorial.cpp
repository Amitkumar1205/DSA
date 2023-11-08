#include<iostream>
using  namespace std;

int factorial(int n){
    //base case
    if(n==0)
    return 1;

    //factorial(n)=n*factorial(n-1)

//eske jgah
    // int small=factorial(n-1);
    // int big=n*small;

    // return big;

//ye use kro

return n*factorial(n-1);


}
int main(){
    int n;
    cout<<"enter the number whose factorial you wants ";
    cin>>n;
    int ans=factorial(n);
    
    cout<<ans<<endl;

    return 0;
}