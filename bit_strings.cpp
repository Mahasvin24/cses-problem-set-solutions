#include <iostream>

using namespace std;

int main() {
    long long x;
    cin >> x;

    x = (x * x) % (1e9 + 7)
    cout << x;

    return 0;
}