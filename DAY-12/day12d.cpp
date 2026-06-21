#include <iostream>
using namespace std;

bool perfect(int n)
{
    int sum = 0;

    for(int i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main()
{
    int n;
    cin >> n;

    if(perfect(n))
        cout << "It is Perfect Number";
    else
        cout << "It is Not Perfect Number";

    return 0;
}