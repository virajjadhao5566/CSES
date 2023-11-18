#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string str1,str2;
    cin>>str1>>str2;
    int n = str1.length();
    int m = str2.length();
    vector<vector<int>> dp(n+1,vector<int>(m+1,1e9));
    for(int i = 0;i<=n;i++) dp[i][0] = i;
    for(int i = 0;i<=m;i++) dp[0][i] = i;
    dp[0][0] = 0;
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=m;j++){
            if(str1[i-1] == str2[j-1]){
                dp[i][j] = min(dp[i][j],dp[i-1][j-1]);
            }
            dp[i][j] = min(dp[i][j],1+dp[i-1][j]);
            dp[i][j] = min(dp[i][j],1+dp[i][j-1]);
            dp[i][j] = min(dp[i][j],1+dp[i-1][j-1]);
        }
    }
    cout<<dp[n][m]<<endl;
    return 0;
}