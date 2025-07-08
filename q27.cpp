// #include<bits/stdc++.h>
// using namespace std;


// int count_before_after(vector<int>&arr, int k , int n){
//     int ctb = 0, cta = 0;
//     for (int i = 0; i < k; i++)
//     {
//         if(arr[i] == 2) ctb++;
//     }
//     for (int i = k; i < n; i++)
//     {
//         if(arr[i] == 2) cta++;
//     }


//     if(ctb == cta) return k;
//     else return -1; 
    
// }
// int main() {
//     int t;
//     cin>>t;
//      while (t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> a(n);

//         for (int i = 0; i < n; i++)
//         {
//             cin>>a[i];
//         }

//         bool found = false;
//         for (int i = 1; i < n; i++)
//         {
//             if(count_before_after(a,i,n) != -1){
//                 cout<<i<<endl;
//                 found = true;
//                 break;
//             }
//         }
        
//         if(found == false) cout<<-1<<endl;

//     }
//     return 0;
// }



// optimised shit
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
        for (long long i = 0; i < n; i++) // n
            cin >> a[i];
        // inputs

        long long total_number_of_twos = 0;
        long long current_number_of_twos = 0;

        for (long long i = 0; i < n; i++) // n
        {
            if (a[i] == 2)
                total_number_of_twos++;
        } // before

        long long ans = -1;

        // prefix
        for (long long i = 0; i < n; i++) // n
        {
            if (a[i] == 2)
                current_number_of_twos++;

            if ((current_number_of_twos) == (total_number_of_twos - current_number_of_twos))
            {
                ans = i + 1;
                break;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

// tc - O(n) = O(1000)
// sc - O(n) = O(1000)