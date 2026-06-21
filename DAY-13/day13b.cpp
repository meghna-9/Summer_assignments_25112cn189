#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n], s = 0;

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s += arr[i];
    }

    cout << "Sum = " << s << endl;
    cout << "Average = " << (float)s / n;

    return 0;
}