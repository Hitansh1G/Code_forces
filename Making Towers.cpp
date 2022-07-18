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
        ll n;
        cin >> n;
        vector<int>v(n + 2);
        vector<int>u(n + 2);
        map<ll, vector<ll> >mp;
        for (ll i = 1; i < n + 1; i++) {
            cin >> v[i];
            mp[v[i]].push_back(i);
        }
        for (auto it : mp) {
            ll count = 1;
            for (ll i=1 ; i<it.second.size() ; i++) {
                if ((it.second[i] - it.second[i - 1]) % 2 != 1){
                    continue;
                }
                else
                count++;
            }
            u[it.first] = count;
        }
        for (ll i = 1; i < n + 1; i++)
            cout << u[i] << ' ';
        cout<<endl;

    }
    return 0;
}