#include <iostream>
#include <cmath>

using namespace std;
typedef long long ll;

int main() {
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        ll r, c;
        cin >> r; // 2
        cin >> c; // 3

        ll total = 0;
        if (c > r) {
            ll inner = (c - 1) * (c - 1);
            ll outer = c * c - inner;
            if (c % 2 == 0) {
                total += r;
            } else {
                total += outer - r + 1;
            }
            total += inner;
        } else {
            ll inner = (r - 1) * (r - 1);
            ll outer = r * r - inner;
            if (r % 2 == 1) {
                total += c;
            } else {
                total += outer - c + 1;
            }
            total += inner;
        }

        cout << total << "\n";
    }

    return 0;
}