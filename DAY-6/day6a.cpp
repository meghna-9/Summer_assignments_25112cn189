#include<iostream>
using namespace std;

    int main(){
        int n;
        cin>>n;
         
         int binary=0,pl=1;
            
           while(n>0){
            int rem=n%2;
            binary+= rem*pl;
            pl*=10;
            n/=2;

           }
        cout << "Binary= "   <<binary;
         
        return 0;
    }
