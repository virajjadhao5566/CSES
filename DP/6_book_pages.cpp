#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int n,x;
    cin>>n>>x;
    vector<int> pri(n);
    for(int i = 0;i<n;i++){
        cin>>pri[i];
    }
    vector<int> pag(n);
    for(int i = 0;i<n;i++){
        cin>>pag[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    for(int i = 1;i<=n;i++){
        for(int j = 1;j<=x;j++){
            int pick = 0;
            if(j >= pri[i-1]) pick = pag[i-1] + dp[i-1][j-pri[i-1]];
            int notPick = dp[i-1][j];
            dp[i][j] = max(pick,notPick);
        }
    }
    cout<<dp[n][x]<<endl;
    return 0;
}