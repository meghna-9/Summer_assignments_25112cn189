#include<stdio.h>
void main()
{
    int n,i;
    unsigned long long fact =1;
    printf("Enter an integer:");
    scanf("%d",&n);
    if(n<0)
      printf("Factorial of negative number does not exist");
    else{
        for(i=1;i<=n;++i){
            fact*=i;
        }
        printf("Factorial of %d =%llu",n,fact);
    }  
        
}