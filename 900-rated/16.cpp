#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long test;
	cin >> test;
	while (test--)
	{
		string s, t;
		cin >> s >> t;

		int n = s.size();
		int m = t.size();

		vector<int> frequency_in_t(26, 0);
		for (int i = 0; i < m; i++) frequency_in_t[t[i] - 'A']++;


		for (int i = n - 1; i >= 0; i--){
			// If the character in s is needed in t, decrement its count
			if (frequency_in_t[s[i] - 'A'] > 0) frequency_in_t[s[i] - 'A']--;
			else
				// Otherwise, mark it as removed by setting it to '.'
				s[i] = '.';
		}

		// Construct the final string by excluding marked characters
		string final_string = "";
		for (int i = 0; i < n; i++) // Iterate over each character in s
		{
			if (s[i] != '.') final_string += s[i];
		}

		// Check if the constructed final string matches the target word t
		if (final_string == t) // Compare the final string with t
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}