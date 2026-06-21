#include <iostream>
#include <math.h>
using namespace std;

int main(){
    long long binary;
    int decimal=0,i=0, dig;

    cin>> binary;

      while(binary!=0){
         dig =binary%10;
        decimal += dig *pow(2,i);
        binary/=10;
        i++;
      }
      cout << decimal;
      return 0;
}