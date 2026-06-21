#include<iostream>
#include<cmath>
using namespace std;
bool armstrong(int x) {
    int temp=x,s=0,dig=0;

    while(temp)
    {
        dig++;
        temp/=10;

    }
    temp=x;
    while(temp){
        int rem=temp%10;
        s += pow(rem,dig);
        temp/=10;   
     }
      return s==x;
    }
          int main(){
        int n;
        cin >> n;

        if(armstrong(n))
          cout <<"It is an armstrong number ";
        else
          cout <<"It is not an armstrong no. ";

    return 0;
     }
