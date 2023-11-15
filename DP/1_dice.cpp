#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll helper(ll n){
    if(n == 0) return 1;
    if (n < 0) return 0;
    return helper(n-1) + helper(n-2) + helper(n-3) + helper(n-4) + helper(n-5) + helper(n-6);
}
ll func(ll n){
    int MOD = 1e9+7;
    vector<ll> dp(n+1,0);
    dp[0] = 1;
    if(n == 0) return dp[n];
    dp[1] = dp[0];
    if(n == 1) return dp[n];
    dp[2] = dp[0] + dp[1];
    if(n == 2) return dp[n];
    dp[3] = dp[0] + dp[1] + dp[2];
    if(n == 3) return dp[n];
    dp[4] = dp[0] + dp[1] + dp[2] + dp[3];
    if(n == 4) return dp[n];
    dp[5] = dp[0] + dp[1] + dp[2] + dp[3] + dp[4];
    if(n == 5) return dp[n];
    for(int i = 6;i<=n;i++){
        dp[i] = (dp[i] + dp[i-1])%MOD;
        dp[i] = (dp[i] + dp[i-2])%MOD;
        dp[i] = (dp[i] + dp[i-3])%MOD;
        dp[i] = (dp[i] + dp[i-4])%MOD;
        dp[i] = (dp[i] + dp[i-5])%MOD;
        dp[i] = (dp[i] + dp[i-6])%MOD;
    }
    return dp[n];
}
int main(){
    ll n;
    cin>>n;
    cout<<func(n)<<endl;
    return 0;
}
