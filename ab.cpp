//#include<iostream>
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
        string res = "imurTu";
        string s;
        cin>>s;
    	sort(s.begin(), s.end());
    	cout<<(s == res)? "YES" : "NO";
        
    }
    return 0;
}