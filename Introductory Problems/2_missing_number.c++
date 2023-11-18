#include<bits/stdc++.h>
using namespace std;

int main(){
    ll n;
    cin>>n;
    ll arr[n+1] = {0};
    for(ll i = 0;i<n-1;i++){
        ll temp;
        cin>>temp;
        arr[temp] = 1;
    }
    for(ll i = 1;i<=n;i++){
        if(arr[i] == 0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}