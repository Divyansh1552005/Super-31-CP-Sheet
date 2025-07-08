// #include<bits/stdc++.h>
// using namespace std;

// int apply(vector<int> arr, int k, int n){
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = arr[i] ^ k;
//     }


//     // now take xor of all transformed elements
//     int ans = arr[0];    
//     for (int i = 1; i < n; i++)
//     {
//         ans ^= arr[i];
//     }

//     if(ans == 0) return k;
//     else return -1;
    
// }


// int main() {

//     int t;
//     cin>>t;
//     while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }

//         int lt = pow(2,8);
//         bool found = false;

//         for(int i = 0; i < lt ; i++){
//             if(apply(a,i,n) != -1) {cout<<i<<endl;
//                 found = true;
//             break;}
//         }

//         if(found == false) cout<<-1<<endl;


        
//     }
    
//     return 0;
// }


// optimised code

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) // n
            cin >> a[i];
        // inputs

        long long total_xor = 0;
        for (int i = 0; i < n; i++) // n
            total_xor ^= a[i]; // 1
        // xor of all elements in the array

        if (n % 2 == 1) // if n is odd
        {
            cout << total_xor << endl;
        }
        else // if n is even
        {
            if (total_xor == 0)
                cout << total_xor << endl;
            else
                cout << -1 << endl;
        }
    }
    return 0;
}

// tc - O(n) = O(1000)
// sc - O(n) = O(1000)