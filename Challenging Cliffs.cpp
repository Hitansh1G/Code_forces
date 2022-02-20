// #include<iostream>
// #include<string>
// #include<algorithm>
// #include<vector>
// #include<map>
// #include<set>
// #include<list>
// #include<queue>
// #include<stack>
// #include<cstring>
// #include<cmath>
// #include<cstdlib>
// #include<unordered_map>
// #include<unordered_set>
// #include<iomanip>
// #define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
// typedef long long ll;
// using namespace std;

// const int M = 1e9+7;
// ll mod(ll x){
//     return (x%M + M)%M;
// }
 
// ll mul(ll a, ll b){
//     return mod((mod(a)*mod(b)));
// }
 
// ll add(ll a , ll b){
//     return mod(mod(a)+mod(b));
// }
 
// void solve(){
//     int n;
//     cin>>n;
//     vector<ll>a(n);
//     for(int i=0;i<n;i++) cin>>a[i];
//     int mini=2e9;
//     int ind=-1;
//     sort(a.begin(),a.end());
//     for(int i=1;i<n;i++){
//         if(abs(a[i]-a[i-1])<mini){
//             mini=abs(a[i]-a[i-1]);
//             ind=i;
//         }
//     }
//     vector<int>small,big;
//     for(int i=0;i<n;i++){
//         if(i==ind || i==ind-1) continue;
//         if(a[i]>a[ind-1]) big.push_back(a[i]);
//     }
//     for(int i=0;i<n;i++){
//         if(i==ind || i==ind-1) continue;
//         if(a[i]<=a[ind]) small.push_back(a[i]);
//     }
//     cout<<a[ind-1]<<" ";
//     for(int i=0;i<big.size();i++) cout<<i<<" ";
//     for(int i=0;i<small.size();i++) cout<<i<<" ";
//     cout<<a[ind]<<" "<<"\n";
// }  
// int main(){
//     Fast
//     cout<<fixed;
//     cout<<setprecision(10);
//     //        freopen("timber_input.txt", "r", stdin);
//     //        freopen("timber_output.txt", "w", stdout);
//     int t=1;
//     cin>>t;
//     for(int i=1;i<=t;i++){
//             //    cout<<"Case #"<<i<<": ";  
//         solve();
//     }
//     return 0;
// }
#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}
 
ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}
 
ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}
 
void solve(){
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++) cin>>a[i];
    int mini=2e9;
    int ind=-1;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if(abs(a[i]-a[i-1])<mini){
            mini=abs(a[i]-a[i-1]);
            ind=i;
        }
    }
    vector<int>small,big;
    for(int i=0;i<n;i++){
        if(i==ind || i==ind-1) continue;
        if(a[i]>a[ind-1]) big.push_back(a[i]);
    }
    for(int i=0;i<n;i++){
        if(i==ind || i==ind-1) continue;
        if(a[i]<=a[ind]) small.push_back(a[i]);
    }
    cout<<a[ind-1]<<" ";
    for(auto i : big) cout<<i<<" ";
    for(auto i : small) cout<<i<<" ";
    cout<<a[ind]<<" "<<"\n";
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}