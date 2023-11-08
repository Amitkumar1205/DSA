#include<iostream>
using namespace std;

int sumarray(int arr[],int n){

    if(n == 0)
    return 0;

    if(n == 1){
        return arr[0];
    }

    return arr[0]+sumarray(arr+1, n-1);                                                        

}

int main(){

    int arr[6]={1,2,3,4,5,6};
    int size=6;

    int sum=sumarray(arr,size);

    cout<<"sum of array is:"<<sum<<endl;

    return 0;

}
