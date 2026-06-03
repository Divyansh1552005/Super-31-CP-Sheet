#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n;
        cin >> s;

        int longest = 1;
        int cur = 1;

        for (int i = 1; i < n; i++) {
            if (s[i] == s[i - 1]) {
                cur++;
            } else {
                cur = 1;
            }

            longest = max(longest, cur);
        }

        cout << longest + 1 << '\n';
    }
}