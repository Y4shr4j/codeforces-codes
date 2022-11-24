
#include<bits/stdc++.h>
#define ll long long
using namespace std;


void sub(string s, vector<string>&res){
    ll n = s.size();
    for(ll i=0; i<n; i++)
    {
        for(ll j = 1; j<=n-i; j++){
            res.push_back(s.substr(i, j));
        }
    }
}



void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0; i<n; i++){
        array<int, 10>cnt = {};
        int top = 0, dis = 0;
        for(int j=i; j<n && j-i+1<=100 ; j++){
            int c = s[j]-'0';
            dis += cnt[c]==0;
            cnt[c]++;
            top = max(top, cnt[c]);
            if(top <= dis){
                ans++;
            }
        }
    }
    cout<<ans<<" ";


}


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        solve();

    }
    return 0;
}