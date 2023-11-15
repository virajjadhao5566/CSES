#include<bits/stdc++.h>
using namespace std;
#define ll long long
int helper(int n){
    if(n == 0) return 0;
    if(n < 0) return 1e9;
    int temp = n;
    int ans = 1e9;
    while(temp != 0){
        int rem = temp%10;
        if(rem != 0) ans = min(ans,1+helper(n-rem));
        temp/=10;
    }
    return ans;
}
int helper2(int n){
    vector<int> dp(n+1,0);
    for(int i = 1;i<=n;i++){
        int temp = i;
        int ans = 1e9;
        while(temp != 0){
            int rem = temp%10;
            if(i-rem >= 0 && rem != 0) ans = min(ans,1+dp[i-rem]);
            temp/=10;
        }
        dp[i] = ans;
    }
    return dp[n];
}
int main(){
    int n;
    cin>>n;
    cout<<helper2(n)<<endl;
    return 0;
}