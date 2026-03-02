#include <iostream>

using namespace std;

int main() {
    int tests;
    cin >> tests;

    for (int i = 0; i < tests; i++) {
        int r, c;
        cin >> r;
        cin >> c;

        int total = 0;
        if (c > r) {
            int inner = pow(c - 1, 2);
            int outer = pow(c, 2) - inner;
            if (c % 2 == 0) {
                total += r;
            } else {
                total += outer - r;
            }
            total += inner;
        } else {
            int inner = pow(r - 1, 2);
            int outer = pow(r, 2) - inner;
            if (r % 2 == 0) {
                total += c;
            } else {
                total += outer - c;
            }
            total += inner;
        }

        cout << total << "\n";
    }

    return 0;
}