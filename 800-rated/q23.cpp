#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int moves = 0;
        // y karo
        if(b > d){
            cout<<-1<<endl;
            continue;
        }

        // making y equal first bcoz operations mein x ko ghata skte hai but y ti koni so ...
        while(b != d){
            b++;
            a++;
            moves++;
        }

        // now check conditions of x
        if(a < c){
            cout<<-1<<endl;
            continue;
        }

        while (a != c) {a--;
            moves++;
        }


        cout<<moves<<endl;

    }
    return 0;
}