#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        vector<int> frequency_of_characters(26, 0);
        for (int i = 0; i < n; i++) frequency_of_characters[s[i] - 'a']++;

        long long odd_frequency = 0;
        for (int i = 0; i < 26; i++) odd_frequency += (frequency_of_characters[i] % 2); // this freq[i] % 2 will give eiither 0 or 1 , 1 for odd , 0 for 1
        // also in a palindrome , if length is even , all characters should be even in count , for odd length , all char except 1 will even count and that one will be odd count.
        // so logic we can use it that if total odd count aale char <= k+1 hai , toh unko remove krke banaya jaa skta hai paldinrome  , also k + 1 islie coz k hata skte hai and + 1 for palindrome permites 1 char with odd count
        

        if (odd_frequency > k + 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
 