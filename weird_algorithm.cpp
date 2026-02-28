#include <iostream>

using std::cout;
using std::cin;

// Time: literally unkwown (collatz conjecture)
// Space: O(1)
int main() {
    long long n;
    cin >> n;

    while (n != 1) {
        cout << n << ' ';
        n = (n % 2) ? 3 * n + 1 : n / 2;
    }

    cout << n << '\n';
    return 0;
}