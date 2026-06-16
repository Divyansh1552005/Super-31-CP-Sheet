#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        int n = s.size();

        int zero_ct = 0, one_ct = 0;

        for(char &ch : s){
            if(ch == '0') zero_ct++;
            else one_ct++;
        }

        if((min(one_ct, zero_ct)) & 1){
            cout << "DA \n";
        }
        else cout << "NET \n";
        
    }
    return 0;
}

