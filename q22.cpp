#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin>>n>>k;
        // we took y = 0 or y = 1 in (if cds)
        if (n % 2 == 0 || (n - k) % 2 == 0)  cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}

// tc and sc are O(1)