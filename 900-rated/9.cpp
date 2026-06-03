#include <bits/stdc++.h>
using namespace std;

bool is_sorted(vector<int> &p, int n){
    for(int i = 0; i < n; i++){
        // since its a permutation
        if(p[i] != i+1) return false;
    }

    return true;
}
int perform_operation(vector<int> &p , int k, int n){
    for (int i = 0; i < n; i++){   
        // if element is at correct position ie sorted, no need to perform operation here
            if(p[i] == i+1) continue;
            int j = i - k;
            if(j >= 0 && j < n) swap(p[i], p[j]);
        }

        if(is_sorted(p, n)) return k;
        else return -1;

}



int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> p;
        for(int i =0; i < n; i++){
            int x;
            cin >> x;
            p.push_back(x);
        }

        int k = 1;
        int max_k = INT_MIN;

        while(k < n){
            int val = perform_operation(p, k, n);

            if(val != -1) max_k = max(val , max_k);
            k++;
        }

        cout << max_k << "\n";
        
    }
    return 0;
}