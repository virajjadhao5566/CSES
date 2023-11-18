#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    ll max_len =1;
    ll len = 1;
    for(ll i = 0;i<s.length()-1;i++){
        if(s[i] == s[i+1]){
            len++;
        }else{
            len = 1;
        }
        max_len = max(max_len,len);
    }
    cout<<max_len<<endl;
    return 0;
}