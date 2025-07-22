#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        vector<long long int> ans(n);

        // For each index i, simulate the game starting with a[i] as initial score
        for (int i = 0; i < n; i++){
            long long score = a[i]; // Start with a[i] as score after removing a[i]
            vector<long long int> remaining;
            
            // Create array of remaining elements (all except a[i])
            for (int j = 0; j < n; j++){
                if (j != i){
                    remaining.push_back(a[j]);
                }
            }
            
            // Sort remaining elements in ascending order for greedy approach
            sort(remaining.begin(), remaining.end());
            
            int count = 0;
            // Greedily remove elements: if score >= element, remove it and add to score
            for (long long element : remaining){
                if (score >= element){
                    score += element;
                    count++;
                } 
                else{
                    break; // Can't remove this element, and remaining are even larger
                }
            }
            
            ans[i] = count;
        }

        // Output the result
        for (int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }   
        
        cout << endl;
    }
    return 0;
}