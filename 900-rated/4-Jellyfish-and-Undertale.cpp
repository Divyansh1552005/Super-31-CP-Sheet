#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,n;
        cin >> a>> b >> n;

        vector<int> x(n); // tools timer array
        
        for (int i = 0; i < n; i++) cin >> x[i];

        long long maximum_time = b;

        for (int i = 0; i < n; i++) maximum_time += min(x[i], a - 1);
 
        cout << maximum_time << endl;
    
    }
    return 0;
}