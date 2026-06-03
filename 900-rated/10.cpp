#include <bits/stdc++.h>
using namespace std;


bool check_cds(vector<int> &a, int n, int l, int r, int k, int total_sum, vector<int> &precomp){
    // sum between l and r
    int x = 0;
    // for(int i = l; i <= r; i++) x += a[i];
    if (l == 0) x = precomp[r];
    else x = precomp[r] - precomp[l-1];
    
    int remaining_sum = total_sum - x;
    int replacement_sum = (r-l+1) * k;
    int final_sum = remaining_sum + replacement_sum;

    if((final_sum & 1) == 1) return true;
    else return false;
}


int main(){
    int t;
    cin >> t;
    while (t--){
        int n,q;
        cin >> n >> q;

        vector<int> a;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }

        int total_sum = accumulate(a.begin(), a.end(), 0);
        // precompute sum
        vector<int> precomp(n);
        precomp[0] = a[0];

        for (int i = 1; i < n; i++)
        {
            precomp[i] = precomp[i-1] + a[i]; 
        }
        

        while(q--){
            int l,r,k;
            cin >> l >> r >> k;
            l = l-1, r = r-1; // for zero based indexing

            if(check_cds(a, n, l,r,k, total_sum, precomp)) cout << "YES \n";
            else  cout << "NO \n";
        }
        
    }
    return 0;
}