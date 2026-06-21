#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    int a = num1, b = num2;

    
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;
    int lcm = (num1 * num2) / gcd;

    cout << "LCM = " << lcm;

    return 0;
}