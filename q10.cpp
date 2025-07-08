#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        vector<vector<char>> v(10, vector<char>(10));
        for (int i = 0; i < 10; i++){
            for (int j = 0; j < 10; j++)
            {
                cin>>v[i][j];
            }
            
        }

        int total_score = 0;

        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (v[i][j] == 'X'){
                    int score = min({i, j, 9 - i, 9 - j}) + 1;
                    total_score += score;
                }
            }
        }

       
        cout << total_score << endl;


        
    }
    
    return 0;
}