#include<iostream>
using namespace std;
bool palindrome(int x){
    int org=x;
    int rev=0;

      while(x>0){
        rev=rev*10+x%10;
        x/=10;
      }
      return org==rev;
}
int main(){
    int x;
    cout<<"enter a number:";
    cin>> x;

    if(palindrome(x))
    cout<<"It is a palindrome no.";
    else
    cout<<"It is not a palindrome no.";

    return 0;
    
}