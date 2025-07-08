#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int ones = 0, neg = 0;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == 1) ones++;
            else neg++;
        }

        int flips = 0;

        // Step 1: Fix sum
        int diff = neg - ones;
        if(diff > 0){
            int needed = (diff + 1) / 2;
            flips += needed;
            neg -= needed;
            ones += needed;
        }

        // Step 2: Fix product
        if(neg % 2 != 0){
            flips++;
        }

        cout<<flips<<endl;
    }
    return 0;
}
