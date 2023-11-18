#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll mod = 1e9 + 7;
    vector<vector<ll>> dp(1e6+2, vector<ll>(2, 0));
    dp[0][0] = 1;
    dp[0][1] = 1;
    ll ans = 0;
    for (ll i = 1; i < 1e6+2; i++){
        dp[i][0] = 4 * dp[i - 1][0] + dp[i - 1][1];
        dp[i][0] %= mod;
        dp[i][1] = dp[i - 1][0] + 2 * dp[i - 1][1];
        dp[i][1] %= mod;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll ans = 0;
        ans += dp[n-1][0];
        ans %= mod;
        ans += dp[n-1][1];
        ans %= mod;
        cout << ans << endl;
    }
    return 0;
}