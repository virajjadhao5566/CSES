#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll helper(ll n){
    if(n == 0) return 0;
    if(n < 0) return 1e9;
    ll temp = n;
    ll ans = 1e9;
    while(temp != 0){
        ll rem = temp%10;
        if(rem != 0) ans = min(ans,1+helper(n-rem));
        temp/=10;
    }
    return ans;
}
ll helper2(ll n){
    vector<ll> dp(n+1,0);
    for(ll i = 1;i<=n;i++){
        ll temp = i;
        ll ans = 1e9;
        while(temp != 0){
            ll rem = temp%10;
            if(i-rem >= 0 && rem != 0) ans = min(ans,1+dp[i-rem]);
            temp/=10;
        }
        dp[i] = ans;
    }
    return dp[n];
}
int main(){
    ll n;
    cin>>n;
    cout<<helper2(n)<<endl;
    return 0;
}