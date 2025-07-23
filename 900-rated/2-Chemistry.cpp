#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string & s){
    int start = 0 , end = s.size() - 1;
    while(start <= end){
        if(s[start] != s[end]) return false;
        start++;
        end--;
    }

    return true;
}

int main(){
    int t;
    cin >> t;
    while (t--){
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        
        // case without removing any character
        if(k == 0) {
            if(is_palindrome(s)){
                cout << "Yes" << endl;
                continue;
            }
            else {
                cout << "No" << endl;
                continue;
            }
        }

        

    }
    return 0;
}