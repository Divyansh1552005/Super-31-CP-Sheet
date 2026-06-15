#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;
    while (t--){
        long long int a, b;

        cin >> a >> b;

        if (b > a) swap(a, b);
       
        if(a == b){
            cout << 0 << " " << 0 << endl;
            continue;
        }

        long long int gcd = a - b;

        long long moves = min(b % gcd, gcd - b % gcd);
        
        cout << gcd << " " << moves << endl;

    }
    return 0;
}