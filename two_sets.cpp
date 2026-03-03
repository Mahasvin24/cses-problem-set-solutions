#include <iostream>
#include <vector>
#include <string>

using namespace std;
typedef long long ll;

int main() {    
    ll n;
    cin >> n;

    ll s = (n * (n + 1)) / 2;
    // Odd -- no sol
    if (s % 2 == 1) {
        cout << "NO\n";
        return 0;
    }

    ll target = s / 2;
    vector<int> v1, v2;
    for (int i = n; i > 0; i--) {
        if (target >= i) {
            v1.push_back(i);
            target -= i;
        } else {
            v2.push_back(i);
        }
    }

    cout << "YES\n";
    cout << v1.size() << "\n";
    for (const int& x : v1) {
        cout << x << ' ';
    }
    cout << "\n";
    cout << v2.size() << "\n";
    for (const int& x : v2) {
        cout << x << ' ';
    }
    cout << "\n";

    return 0;
}