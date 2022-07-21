#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<queue>
#include<stack>
#include<cstring>
#include<cmath>
#include<cstdlib>
#include<unordered_map>
#include<unordered_set>
#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
// void help(int a,b){
//     cout<<endl;
// }
int32_t main(){
    Fast
    int n,m;
    cin>>n>>m;
    ll a[n];
    for (int i=0 ; i<n ; ++i) {
        cin >> a[i];
    }
    ll f[n],b[n];
    f[0]=0;
    for (int i=1 ; i<n ; ++i) {
        if(a[i-1] <= a[i]) 
            f[i] = f[i-1];
        else 
            f[i] = f[i-1] + (a[i-1]-a[i]);
    }
    b[n-1]=0;
    for (int i=n-2 ; i>=0 ; --i) {
        if(a[i] >= a[i+1]) 
            b[i] = b[i+1];
        else 
            b[i] = b[i+1] + ( a[i+1]-a[i]);
    }
//    for (int i = 0; i < n; ++i) {
//        cout<<f[i]<<' ';
//    }
//    cout<<endl;
//    for (int i = 0; i <n ; ++i) {
//        cout<<b[i]<<' ';
//    }
//    cout<<endl;
    
    ll  s,t;
    for (int i=0 ; i<m ; i++) {
        cin >> s >> t;
        if(s<=t)
            cout<<f[t-1]-f[s-1]<<endl;
        else
            cout<<b[t-1]-b[s-1]<<endl;
    }
    return 0;
}