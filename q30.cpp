#include<bits/stdc++.h>
using namespace std;

int count_extremely_round(int n){
    int count = 0;

    // For each digit 1 to 9
    for (int d = 1; d <= 9; ++d){
        int val = d;

        // Keep multiplying by 10 while it's ≤ n
        while (val <= n){
            count++;
            val *= 10;
        }
    }

    return count;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        cout << count_extremely_round(n) << endl;
    }
    return 0;
}
