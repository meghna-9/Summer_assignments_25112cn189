#include<stdio.h>
void main()
{
int n, i;
    int  sum = 0;  

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 1) {
        printf("Please enter a valid natural number (greater than 0).\n");
    } else {
        // Looping from 1 to n and adding each value to sum
        for (i = 1; i <= n; ++i) {
            sum += i;
        }
        printf("The sum of the first %d natural numbers is: %d\n", n, sum);
    }

     
}