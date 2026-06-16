#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;

        vector<int> arr;

        for (int i = 0; i < n; i++) {
            int val;
            cin >> val;
            arr.push_back(val);
        }

        long long a = 0, b ;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            a += ceil((double)arr[i] / x);
            sum += arr[i];
        }

        b = ceil((double)sum / x);

        cout << min(a, b) << " " << max(a, b) << "\n";
    }

    return 0;
}