// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i = 1;i<=n;i++){
//         // cout<<(((i*i)*((i*i)-1)) - 8 - 24 - ((i-4)*16) - 16 - ((i-4)*24) - ((i-4)*(i-4)*8))/2<<endl;
//         // cout<<((i*i)*((i*i)-1))/2 - (4*(i-1)*(i-2))<<endl;
//         cout << i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << endl;
//     }
//     return 0;
// }
#include <iostream>

#define lli long long int
#define li long int
#define ld long double
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    lli k;
    cin >> k;
    for (lli i = 1; i <= k; i++)
    {
        cout<<(((i*i)*((i*i)-1)) - 8 - 24 - ((i-4)*16) - 16 - ((i-4)*24) - ((i-4)*(i-4)*8))/2<<endl;
    }
    return 0;
}