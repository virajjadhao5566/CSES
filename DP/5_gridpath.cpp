#include <bits/stdc++.h>
using namespace std;
int main(){
    int mod = 1e9+7;
    int n;
    cin>>n;
    vector<vector<char>> grid(n,vector<char>(n));
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>> dp(n+1,vector<int>(n+1,0));
    if(grid[0][0] == '.') dp[1][1] = 1;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=n;j++){
            if(grid[i-1][j-1] != '*'){
                dp[i][j] = dp[i][j] + dp[i-1][j]+dp[i][j-1];
                dp[i][j] %= mod;
            }
        }
    }
    cout<<dp[n][n]<<endl;
    return 0;
}