#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

// Time complexity: O(n)
// Space complexity: O(n)
int main() {
    int x;
    cin >> x;

    vector<bool> seen(x, false);

    for (int i = 1; i < x; i++) { 
        int r;
        cin >> r;
        seen[r - 1] = true;
    }

    int sol = 0;
    for (size_t i = 0; i < seen.size(); i++) 
        if (!seen[i])
            sol = i;

    cout << sol + 1 << "\n";

    return 0;
}