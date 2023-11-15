#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1] = {0};
    for(int i = 0;i<n-1;i++){
        int temp;
        cin>>temp;
        arr[temp] = 1;
    }
    for(int i = 1;i<=n;i++){
        if(arr[i] == 0){
            cout<<i<<endl;
            return 0;
        }
    }
    return 0;
}