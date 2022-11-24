#include<bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0; i<n; i++){
            cin>>a[i];
        }
        int cnt=0;
        for(ll i=0; i<n; i++){
            ll sum = 0;
            sum+=a[i];
            for(ll j=i+1; j<n; j++){
                if(a[j]==0){
                    a[j] = -sum;
                    cnt++;
                }
            }
        }
        cout<<cnt<<" ";



    }
    return 0;
}