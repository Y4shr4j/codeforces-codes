//#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
//just adding some comments to check the git repository
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;//s
        cin>>n;
        string res = "imurTu";
        string s;
        cin>>s;
    	sort(s.begin(), s.end());
    	cout<<(s == res)? "YES" : "NO";
        
    }
    return 0;
}