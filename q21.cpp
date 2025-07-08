#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }


        int len = 0 , max_len = 0 , l , r;
        // Find the first zero
        bool found_zero = false;
        for (int i = 0; i < n; i++) {
            if (v[i] == 0) {
                l = r = i;
                found_zero = true;
                break;
            }
        }

        // If no zero exists at all
        if (!found_zero){
            cout << 0 << endl;
            continue;
        }

        // using 2 pointer sliding window to solve this
        while (r < n)
        {
            if(v[r] == 0){
                len++;
                max_len = max(max_len, len);
                r++;
            }
            else{ // v[r] == 1

                while(r < n && v[r] != 0 ) r++;
                l = r;
                len = 0;
            }
        
        }

        cout<<max_len << endl;
        
    }
    
    return 0;
}
