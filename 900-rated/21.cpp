// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         string s;
//         cin >> s;

//         int ans = 1e9;

//         vector<string> targets = {"00", "25", "50", "75"};

//         for (string t : targets) {
//             int pos2 = -1, pos1 = -1;

//             // find second digit of target from right
//             for (int i = s.size() - 1; i >= 0; i--) {
//                 if (s[i] == t[1]) {
//                     pos2 = i;
//                     break;
//                 }
//             }

//             if (pos2 == -1) continue;

//             // find first digit of target before pos2
//             for (int i = pos2 - 1; i >= 0; i--) {
//                 if (s[i] == t[0]) {
//                     pos1 = i;
//                     break;
//                 }
//             }

//             if (pos1 == -1) continue;

//             int removals =
//                 (s.size() - 1 - pos2) +   // remove after second digit
//                 (pos2 - pos1 - 1);        // remove between digits

//             ans = min(ans, removals);
//         }

//         cout << ans << '\n';
//     }
// }



#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int ans = 1e9;
        vector<string> target = {"00", "25", "50", "75"};

        for (string x : target) {
            int j = s.size() - 1;

            // find second digit of target
            while (j >= 0 && s[j] != x[1]) j--;
            if (j < 0) continue;

            int i = j - 1;

            // find first digit of target
            while (i >= 0 && s[i] != x[0]) i--;
            if (i < 0) continue;

            int deletions = (s.size() - 1 - j) + (j - i - 1);
            ans = min(ans, deletions);
        }

        cout << ans << '\n';
    }

    return 0;
}