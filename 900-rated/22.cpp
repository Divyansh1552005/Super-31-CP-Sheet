#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> arr(n);
        int ct_of_one = 0, ct_of_zeroes = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i] == 1) ct_of_one++;
            if(arr[i] == 0) ct_of_zeroes++;
        }

        long long sum = accumulate(arr.begin(), arr.end(), 0);

        // arr mein 1 hoga jibbe subseq kaam krega
        if(ct_of_one == 0){
            cout << 0 << "\n";
            continue;
        }

        long long nfsubseq_count = 1LL * ct_of_one * (1LL << ct_of_zeroes);

        // now for each zero 

        cout << nfsubseq_count << "\n";
        
    }
    return 0;
}