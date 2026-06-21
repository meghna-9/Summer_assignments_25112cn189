#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"enter 2 numbers; ";
    cin>>num1>>num2;
     while(num2!=0)
     {
        int num =num2;
        num2=num1%num2;
        num1=num;

     }
     cout<<"GCD of input number= "<<num1<<" and"<<num2<<" is :";
     return 0;
}