#include <string>
#include <iostream>

using std::string, std::cin, std::cout;

// Time complexity: O(n)
// Space complexity: O(1)
int main() {
    std::string s;
    cin >> s;

    int max = 1;
    size_t i = 1;
    while (i < s.length()) {
        int count = 1;
        while (s[i] == s[i - 1]) {
            count++;
            i++;
        }

        if (count > max)
            max = count;

        i++;
    }

    cout << max << "\n";

    return 0;
}