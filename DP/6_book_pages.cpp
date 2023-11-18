#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x;
    cin>>n>>x;
    vector<ll> pri(n);
    for(ll i = 0;i<n;i++){
        cin>>pri[i];
    }
    vector<ll> pag(n);
    for(ll i = 0;i<n;i++){
        cin>>pag[i];
    }
    vector<vector<ll>> dp(n+1,vector<ll>(x+1,0));
    for(ll i = 1;i<=n;i++){
        for(ll j = 1;j<=x;j++){
            ll pick = 0;
            if(j >= pri[i-1]) pick = pag[i-1] + dp[i-1][j-pri[i-1]];
            ll notPick = dp[i-1][j];
            dp[i][j] = max(pick,notPick);
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}