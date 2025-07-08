#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while (t--)
    {
        int x,k;
        cin>>x>>k;
        vector<int> ans;
        if(x < k){
            cout<<1<<endl
            <<x << endl;
        }
        else if(x % k != 0){
            cout<<1<<endl
            <<x<<endl;
        }
        else{
            int z = x % k;
            cout<<"2" << endl
            << z + k + 1<<" "<< x - (z+k + 1) << endl;
        }
    }


    
    return 0;
}