#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a,b,c;
        cin >> a >> b >> c;

        bool f1 = false, f2 = false, f3 = false;
        
        int oke = a+c;
        
        // checking b
        if(oke % (2*b) == 0){
            f2 = true;
        }

        // checking a
        int awein = 2*b - c;

        if(awein % a == 0 && awein != 0 && awein > 0) f1 = true;

        // checking c
        awein = 2 * b - a;
        
        if(awein % c == 0 && awein != 0 && awein > 0) f3 = true;

        if(f1 == false && f2 == false && f3 == false){
            cout << "NO \n";
        }
        else cout << "YES \n";

    }
    return 0;
}