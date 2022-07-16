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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<ll> a(n + 1);
        for (int i = 1; i <= n; i ++ ) 
            cin >> a[i];
    
        ll cnt = 0, res = 0;
        for (int i = 1; i < n; i ++ ){
            cnt += a[i];
            if(!a[i] && cnt) res ++ ;
        }
    
        cout << res + cnt << '\n';
    }
    return 0;
}