#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int i = -1,j = -1,k = -1;
        bool flag = false;

        for (int oke = 1; oke < n-1; oke++)
        {
            if(arr[oke] > arr[oke-1] && arr[oke] > arr[oke+1]){
                i = oke-1;
                j = oke;
                k = oke+1;
                flag = true;
                break;
            }
        }

        if(flag){
            // for 1 based indexing i did +1
            cout << "YES \n" << i+1 << " " << j+1 << " " << k+1 << "\n";
        }
        else{
            cout << "NO \n";
        }
        
    }
    return 0;
}