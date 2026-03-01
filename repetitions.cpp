#include <string>
#include <iostream>

using namespace std;

int main() {
    std::string s;
    cin >> s;
    cout << s << endl;

    int maxx = 0;
    int curr = 1;
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] == s[i-1]) {
            curr++;
        } else {
            curr = 1;
            maxx = max(maxx, curr);
        }
    }

    cout << maxx << "\n";
    return 0;
}