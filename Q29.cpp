#include <bits/stdc++.h>
using namespace std;

bool isAllEqual(vector<int>& a){
    for (int i = 1; i < a.size(); i++){
        if (a[i] != a[0]) return false;
    }
    return true;
}

int main(){
    int t;
    cin>>t;

    while (t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for (int& x : a) cin>>x;

        if (isAllEqual(a)){
            cout<<"NO\n";
            continue;
        }

        sort(a.begin(), a.end());
        long long sum = 0;
        bool fixed = false;

        for (int i = 0; i < n; i++){
            if (sum == a[i]){
                if (!fixed && i < n - 1){
                    swap(a[i], a[n - 1]);
                    fixed = true;  
                }
            }
            sum += a[i];
        }

        cout << "YES\n";
        for (int x : a) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
