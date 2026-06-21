#include <iostream>
using namespace std;
int revNum (int n, int rev=0)
{
     if(n==0)
       return rev;
       else
     return revNum(n/10,rev*10+n%10);  
}

int main()
{
    int num;
    cout<< "enter a no. ";
    cin >> num;
    cout<<"reversed no.="<< revNum(num);
     
  return 0;  

}