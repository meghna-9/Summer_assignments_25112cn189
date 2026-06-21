#include<stdio.h>
int main()
{
    int i,j,prime,begin=10,end=30;
     

      for(i=begin;i<=end;i++)
      {
        if(i<=1)
        continue;
        prime=1;
      for(j=2;j*j<=i;j++)
         {
            if(i%j==0){
                prime=0;
                break;
            }
         }
      if (prime)  
        printf("%d ",i);
      }
    return 0;  
}