#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    cin >> n;

    while (n > 0) {
        count += (n & 1);
        n = n >> 1;
    }

    cout << "Number of set bits = " << count;

    return 0;
}