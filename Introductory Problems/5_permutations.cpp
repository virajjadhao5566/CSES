#include<bits/stdc++.h>
using namespace std;
int main(){

    // Logic is that first prll all odd one by one and then even. there difference is always more than one.
    ll n;
    cin>>n;
    if(n == 1){
        cout<<"1";
        return 0;
    }
    if(n == 2 || n == 3){
        cout<<"NO SOLUTION"<<endl;
        return 0;
    }
    for(ll i = 2;i<=n;i = i+2){
        cout<<i<<" ";
    }
    for(ll i = 1;i<=n;i = i+2){
        if(i == n || i == n-1){
            cout<<i;
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}