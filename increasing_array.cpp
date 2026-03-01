#include <vector>
#include <iostream>

using namespace std;
typedef long long ll;

// Time complexity: O(n)
// Space complexity: O(n)
int main() {
    int size;
    cin >> size;

    vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        int val;
        cin >> val;
        arr[i] = val;
    }

    ll moves = 0;
    for (int i = 1; i < size; i++) {
        int diff = arr[i - 1] - arr[i];
        if (diff > 0) {
            arr[i] += diff;
            moves += diff;
        }
    }

    cout << moves << "\n";

    return 0;
}