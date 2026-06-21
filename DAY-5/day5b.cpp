#include <iostream>
using namespace std;

int main() {
    int n, temp, dig;
    int sum = 0;

    cout << "Enter a number: ";
    cin >> n;

    temp = n;

    while (temp > 0) {
        dig = temp % 10;

        int fact = 1;
        for (int i = 1; i <= dig; i++) {
            fact *= i;
        }

        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        cout << n << " is a Strong No.";
    else
        cout << n << " is not a Strong No.";

    return 0;
}