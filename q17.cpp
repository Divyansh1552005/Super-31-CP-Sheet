#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, x;
        cin >> n >> k >> x;

        if (x != 1) {
            // If x is not 1, we can always use 1s to form n
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; i++) {
                cout << 1 << " ";
            }
            cout << endl;
        } 
        else if (k == 1){
            // If k == 1 and x == 1, we have no other choice but x → Impossible
            cout << "No" << endl;
        } 
        else {
            // Use {2,3,...k} to form sum n
            vector<int> a;
            if (n % 2 == 0) {
                // If n is even, just use 2s
                cout << "YES" << endl;
                cout << n / 2 << endl;
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << " ";
                }
                cout << endl;
            } 
            else {
                // If n is odd, we need at least one `3`, then use 2s
                if (k >= 3) {
                    cout << "YES" << endl;
                    cout << (n - 3) / 2 + 1 << endl;
                    for (int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << " ";
                    }
                    cout << 3 << endl;
                } 
                else {
                    cout << "No" << endl;
                }
            }
        }
    }
    return 0;
}
