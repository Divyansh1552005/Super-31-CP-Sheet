#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    if (k == 1) {
        // If k == 1, we can only reverse 1 element at a time, so array must be already sorted
        if (is_sorted(arr.begin(), arr.end()))
            cout << "YES\n";
        else
            cout << "NO\n";
    } else {
        // If k >= 2, sorting is always possible
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
