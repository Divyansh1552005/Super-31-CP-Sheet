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

        int moves = 0;

        for (int i = n-2; i >= 0; i--)
        {
            while(arr[i] >= arr[i+1]){
                moves++;
                arr[i] /= 2;
                if(arr[i] == 0) break;
            }
            if(arr[i] == 0 && arr[i+1] == 0){
                moves = -1; // impossible ho jayega equal banana
                break;
            }
        }

        cout << moves << endl;
        
        
        
    }
    return 0;
}