#include <bits/stdc++.h>
using namespace std;



int wex(int l, int r, vector<int> &arr){
    int ct = 0;

    for (int i = l; i <= r; i++)
    {
        if(ct == arr[i]) ct++;
    }


    
}
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;

        vector<int> arr;

        int ct = 0;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if(x == 0) ct++;
            arr.push_back(x);
        }

        // find the zeroes in the array
        // if it does not have zero then poori range mein select karke zero kr skte hai then ek step
        if(ct == 0){
            cout << 1 << "\n";
            continue;
        }
        else if(ct == n){
            cout << 0 << "\n";
            continue;
        }

        bool found_zero = false; // Flag to check if there is any zero between non-zero elements
		int left = 0;
		int right = n - 1;

		// Find the first non-zero element from the left
		while (arr[left] == 0) left++;
		// Find the first non-zero element from the right
		while (arr[right] == 0) right--;

		// Check if there is any zero between the first and last non-zero elements
		for (int i = left; i <= right; i++)
		{
			if (arr[i] == 0) found_zero = true;
		}


        if (found_zero == false) // Case 1: No zero between non-zero elements
			cout << 1 << endl;
		else // Case 2: There is at least one zero between non-zero elements
			cout << 2 << endl;


    }
    return 0;
}