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
int32_t main(){
    Fast
    ll t;
    cin >> t;
    while(t--){
        ll n,k,b,s;
        cin >> n >> k >> b >> s;
        if(s<k*b || s>n*(k-1)+k*b){
            cout<<-1<<endl;
        }
        else{
            vector<ll> a(n,0);
            a[0] = k*b;
            s -= k*b;
            for(int i=0 ; i<n && s>0 ; i++){
                a[i] += min (k-1 ,s);
                s -= min(k-1,s);
            }
            for(int i=0 ; i<n ; i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}