#include<iostream>
using namespace std;

bool checkPlindrome(string str, int i, int j){
      
      //base case
      if(i>j)
      return true;

      if(str[i] != str[j])
      return false;

      else{
        //recursive call

        return checkPlindrome(str, i+1, j-1);
      }
}

int main(){
    string name="bookkoob";
    cout<<endl;

    bool isPlindrome=checkPlindrome(name,0,name.length()-1);

    if(isPlindrome){
        cout<<"it is a palindrome "<<endl;
    }

        else{
            cout<<"it is not a palindrome"<<endl;
        }
    
    return 0;
}