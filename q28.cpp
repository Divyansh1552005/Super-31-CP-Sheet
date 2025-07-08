#include<bits/stdc++.h>
using namespace std;

int give_parity(int x){
    if((x & 1) == 1) return 1;
    else return 0;
}

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin>>a[i];

        vector<int> temp;
        temp.push_back(a[0]);
        int ct = 0;

        for (int i = 0; i < n-1; i++){
            if(give_parity(temp[i]) == give_parity(a[i+1])){
                ct++;
                int prod = temp[i] * a[i+1];
                temp.push_back(prod);
            } 
            else{
                temp.push_back(a[i+1]);
            }
        }

        cout<<ct<<endl;
    }
    
    return 0;
}