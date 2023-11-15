#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll memo(int n,int sum,vector<ll>&arr){
    if(sum == 0) return 0;
    if(n == 0) return 1e9;
    ll pick = 1e9;
    if(arr[n-1] <= sum) pick = 1 + memo(n,sum-arr[n-1],arr);
    ll notPick = memo(n-1,sum,arr);
    return min(pick,notPick);
}
ll helper(vector<ll>&arr,ll n,ll sum){
    vector<ll> dp(sum+1,1e9);
    dp[0] = 0;
    for(int i = 1;i<=sum;i++){
        for(int j = n-1;j>=0;j--){
            if(i >= arr[j]) dp[i] = min(dp[i],1+dp[i-arr[j]]);
        }
    }
    if(dp[sum] == 1e9) return -1;
    return dp[sum];
}
int main(){
    ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    cout<<helper(v,n,k)<<endl;
}