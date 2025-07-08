#include<bits/stdc++.h>
using namespace std;

bool is_sorted(const vector<int> &v)
{
    for(int i = 0; i < v.size() - 1; i++){
        if(v[i] > v[i + 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--)
    {   
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(is_sorted(v)){
            cout << "YES" << endl;
            continue;
        }
        bool sorted = false;
        for (int i = 1; i <= n - 2; i++)
        {
            if(v[i] > v[i + 1] && v[i] > v[i - 1]){
                swap(v[i], v[i + 1]);
                if(is_sorted(v)){
                    cout << "YES" << endl;
                    sorted = true;
                    break;
                }
            }
        }
        if(!sorted){
            cout << "NO" << endl;
        }
    }
    return 0;
}