//#include<iostream>
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        if(n%2==0){
            cout<<n/2<<" ";
        }else{
            cout<<(n+1)/2<<" ";
        }
    }
    return 0;
}