#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int a, b, xk, yk, xq, yq;
        cin >> a >> b;
        cin >> xk >> yk >> xq >> yq;
        
        set<pair<int, int>> knight_positions;
        
        // All possible knight moves: (±a, ±b) and (±b, ±a)
        vector<pair<int, int>> moves = {
            {a, b}, {a, -b}, {-a, b}, {-a, -b},
            {b, a}, {b, -a}, {-b, a}, {-b, -a}
        };
        
        // Find all positions that can attack the king
        for (auto move : moves){
            int x = xk - move.first;
            int y = yk - move.second;
            knight_positions.insert({x, y});
        }
        
        int ct = 0;
        // Check which of these positions can also attack the queen
        for (auto pos : knight_positions){
            int x = pos.first;
            int y = pos.second;
            
            for (auto move : moves){
                if (x + move.first == xq && y + move.second == yq){
                    ct++;
                    break; // Found that this position can attack queen, no need to check other moves
                }
            }
        }
        
        cout << ct << endl;
    }
    return 0;
}