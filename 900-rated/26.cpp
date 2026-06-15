#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long n;
        cin >> n;

        // odd numbers ka toh hovega hi >1 divisor vo khud
        if((n&1) == 1){
            cout << "YES \n";
            continue;
        }

        // even numbers ko 2 se divide krte raho, if odd aaye kisi bhi step pe then true else false
        bool flag = false;
        while(n != 0){
            n /= 2;
            if((n&1) == 1 && n != 1){
                flag = true;
                break;
            }
        }

        if(flag) cout << "YES \n";
        else cout << "NO \n";



    }
    return 0;
}