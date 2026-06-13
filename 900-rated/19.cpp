#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll x, n;
        cin >> x >> n;

        // for (int i = 1; i <= n; i++)
        // {
        //     if((x&1) == 0){
        //         // x is even
        //         x = x - i;
        //     }
        //     else x = x + i;
        // }
        
        // har 4 operations k baad cancel outs -> x - 1, x + 2, x+3 , x+4 so net x same rahega 
       if (x % 2 == 0){
            if (n % 4 == 1) x -= n;
            else if (n % 4 == 2) x += 1;
            else if (n % 4 == 3) x += n + 1;
        } 
        else{
            if (n % 4 == 1) x += n;
            else if (n % 4 == 2) x -= 1;
            else if (n % 4 == 3) x -= (n + 1);
        }

        cout << x << "\n";
    }
    return 0;
}