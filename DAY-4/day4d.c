#include <stdio.h>
#include <math.h>

int main() {
    int start, end;

    scanf("%d%d", &start, &end);

    for(int num = start; num <= end; num++) {
        int temp = num, count = 0, sum = 0;

        while(temp) {
            count++;
            temp /= 10;
        }

        temp = num;

        while(temp) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if(sum == num)
            printf("%d ", num);
    }

    return 0;
}