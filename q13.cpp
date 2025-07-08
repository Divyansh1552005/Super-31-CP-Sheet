#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Step 1: Sort the array
    sort(a.begin(), a.end());

    vector<int> b, c;
    int min_element = a[0];

    // Step 2: Partition the array into b and c
    for (int i = 0; i < n; i++) {
        if (a[i] == min_element) {
            b.push_back(a[i]); // All occurrences of min_element go to b
        } else {
            c.push_back(a[i]); // All remaining go to c
        }
    }

    // Step 3: If c is empty, print -1
    if (c.empty()) {
        cout << -1 << endl;
    } else {
        cout << b.size() << " " << c.size() << endl;
        for (int num : b) cout << num << " ";
        cout << endl;
        for (int num : c) cout << num << " ";
        cout << endl;
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











