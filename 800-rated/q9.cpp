#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++){cin>>arr[i];}

        long long number_is_present = 0;
        for (int i = 0; i < n; i++){
            if (arr[i] == k){
                number_is_present = 1;
                break;
            }
        }
 
        if (number_is_present == 1) {cout << "YES" << endl;}
        else {cout << "NO" << endl;}
    }
    return 0;
}