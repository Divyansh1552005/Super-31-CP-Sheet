#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;

        string s;
        for (int i = 0; i < n; i++)
        {
            char x;
            cin>>x;
            s.push_back(x);
        }

        
        

        int l = 0 , r = n-1;

        while(l < r){
            if((s[l] == '0' && s[r] == '1') || (s[l] == '1' && s[r] == '0')){
                l++;
                r--;
            }
            else break; // stop jab bhi equal aa jaaye dono taraf
        }


        cout<<r-l+1<<endl;
    }
    
    return 0;
}