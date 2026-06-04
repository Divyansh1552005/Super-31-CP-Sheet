#include <bits/stdc++.h>
using namespace std;

// int operation(vector<int>& arr, int l, int r, int n){

//     int temp = arr[l];

//     for (int i = l; i < r; i++)
//     {
//         arr[i] = arr[i+1];
//     }

//     arr[r] = temp;

//     return arr[n-1] - arr[0];
    
// }
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        if(n == 1) {cout << 0 << "\n";
        continue;
    } 
        vector<int> a;

        for (int i = 0; i < n; i++)
        {   
            int x;
            cin >> x;
            a.push_back(x);
        }

        

        int ans = INT_MIN;

        for (int i = 1; i < n; i++) ans = max(ans, a[i] - a[0]);

        for (int i = 0; i < n - 1; i++) ans = max(ans, a[n - 1] - a[i]);

        for (int i = 1; i < n; i++) ans = max(ans, a[i - 1] - a[i]);

        cout << ans << '\n';
        

       
    }
    return 0;
}