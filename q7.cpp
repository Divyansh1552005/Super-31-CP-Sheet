#include<bits/stdc++.h>
using namespace std;


// Observation:
// For the array to be "good", i.e., all adjacent sums are equal:
// - From b1 + b2 = b2 + b3 --> b1 = b3 --> all odd indexed elements must be the same.
// - Similarly, all even indexed elements must be the same.
// So, there can be at most 2 distinct numbers (odd group & even group).
//
// BUT, just having 2 distinct numbers is not enough!
// - The most frequent number should not exceed ceil(n / 2) times.
//   (Because it has to fit into either odd or even positions)
//
// Steps:
// 1. If array has more than 2 distinct elements --> "No".
// 2. If array has exactly 1 distinct element --> "Yes" (trivially good).
// 3. If array has exactly 2 distinct elements:
//      - Check their counts:
//          max(count1, count2) <= ceil(n / 2) --> "Yes"
//          otherwise --> "No"
// 
// This ensures the elements can be placed alternately after permutation.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            freq[v[i]]++;
        }

        if (freq.size() > 2) {
            cout << "No" << endl;
            continue;
        }

        if (freq.size() == 1) {
            cout << "Yes" << endl;
            continue;
        }

        // If there are exactly 2 unique elements
        auto it = freq.begin();
        int count1 = it->second;
        it++;
        int count2 = it->second;

        int max_count = max(count1, count2);

        if (max_count <= (n + 1) / 2) {// alternatively place karne k liye count bhi toh <= n+1 / 2 hona chayie. or we can do it like below
            cout << "Yes" << endl;
        } 
        else{
            cout << "No" << endl;
        }

    }
    return 0;
}


// if (frequency_map.size() >= 3)
//         {
//             cout << "No" << endl;
//         }
//         else
//         {
//             // begin - first element
//             // rbegin - last element
//             long long freq_1 = frequency_map.begin()->second;
//             long long freq_2 = frequency_map.rbegin()->second;
//             if (freq_1 == freq_2)
//                 cout << "Yes" << endl;
//             else if (n % 2 == 1 && abs(freq_1 - freq_2) == 1)
//                 cout << "Yes" << endl;
//             else
//                 cout << "No" << endl;
//         }
//     }