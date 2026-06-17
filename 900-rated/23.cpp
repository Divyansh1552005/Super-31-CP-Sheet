#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        // and hamesha minimize hi krega value
        // so sbhi ka and lelo for minimum

        int ans = arr[0];

        for (int i = 1; i < n; i++)
        {
            ans &= arr[i];
        }

        cout << ans << "\n";
        
    }
    return 0;
}