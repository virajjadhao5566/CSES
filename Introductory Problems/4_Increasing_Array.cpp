#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
    }
    ll sum = 0;
    for(ll i = 0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            sum+= arr[i]-arr[i+1];
            arr[i+1] = arr[i];
        }
    }
    cout<<sum<<endl;
    return 0;
}