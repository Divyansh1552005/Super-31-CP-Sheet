#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    bool has_zero = false;
    int min_operations = INT_MAX;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {has_zero = true;
        break;}
        min_operations = min(min_operations, abs(arr[i]));
    }

    
    if (has_zero) cout << 0 << endl;
    else cout << min_operations << endl;

    return 0;
}
