#include<iostream>
using namespace std;

bool  isSorted(int *arr,int size){
//base case
if(size == 0)
return true;
if(arr[0]>arr[1])
return false;

else{
    bool remainingpart=isSorted( arr+1, size-1);
    return remainingpart;
    }

}

int main(){

    int arr[8]={1,2,3,4,5,6,7,8};
    int size=8;

    bool ans=isSorted( arr, size);

    if(ans){
        cout<<"array is sorted"<<endl;

    }
    else{
        cout<<"array is not sorted"<<endl;
    }




    return 0;
}
