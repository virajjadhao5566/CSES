#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll helper(vector<ll>&arr,ll n,ll k){
    ll mod = 1e9+7;
    vector<ll> dp(k+1,0);
    dp[0] = 1;
    for(ll i = 1;i<=k;i++){
        for(ll j = n-1;j>=0;j--){
            if(i>=arr[j]) dp[i] = (dp[i]+dp[i-arr[j]])%mod;
        }
    }
    return dp[k];
}
ll comb2(vector<ll>&arr,ll n,ll k){
    ll mod = 1e9+7;
    vector<ll> dp(k+1,0);
    dp[0] = 1;
    for(ll i = 0;i<n;i++){
        for(ll j = 1;j<=k;j++){
            if(j >= arr[i]) dp[j] = (dp[j] + dp[j-arr[i]])%mod;
        }
    }
    return dp[k];
}
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> arr(n);
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
    }
    cout<<comb2(arr,n,k)<<endl;
    return 0;
}