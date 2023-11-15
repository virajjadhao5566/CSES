#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int T;
    cin>>T;
    while(T--){
        long long int row,col;
        cin>>row>>col;
        if(col>=row){
            if(col%2 == 0){
                cout<<(col-1)*(col-1)+row<<endl;
            }else{
                cout<<(col*col)-row+1<<endl;
            }
        }else{
            if(row%2 == 0){
                cout<<(row*row)-col+1<<endl;
            }else{
                cout<<(row-1)*(row-1)+col<<endl;
            }
        }
    }
    return 0;
}