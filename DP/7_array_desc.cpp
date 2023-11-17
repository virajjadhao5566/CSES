#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll helper(vector<ll>&arr,ll n,ll m){
    int mod = 1e9+7;
    vector<vector<ll>> dp(n,vector<ll>(m+1,0));
    if(arr[0] == 0){
        for(int i = 1;i<=m;i++){
            dp[0][i] = 1;
        }
    }else{
        dp[0][arr[0]] = 1;
    }
    for(int i = 1;i<n;i++){
        if(arr[i] == 0){
            for(int j = 1;j<=m;j++){
                dp[i][j] += dp[i-1][j];
                dp[i][j]%=mod;
                if(j > 0) dp[i][j] += dp[i-1][j-1];
                dp[i][j]%=mod;
                if(j < m) dp[i][j] += dp[i-1][j+1];
                dp[i][j]%=mod;
            }
        }else{
            dp[i][arr[i]] += dp[i-1][arr[i]];
            dp[i][arr[i]]%=mod;
            if(arr[i] > 0) dp[i][arr[i]] += dp[i-1][arr[i]-1];
            dp[i][arr[i]]%=mod;
            if(arr[i] < m) dp[i][arr[i]] += dp[i-1][arr[i]+1];
            dp[i][arr[i]]%=mod;
        }
    }
    ll ans = 0;
    for(int i = 1;i<=m;i++){
        ans += dp[n-1][i];
        ans%=mod;
    }
    return ans;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> arr(n);
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<helper(arr,n,m)<<endl;
    return 0;
}