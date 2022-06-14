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
        int n,count=0;
        cin >> n;
        int arr[n];
        // unordered_map<int,int>mp;
        // for(int i=0 ; i<n ; i++){
        //     cin >> arr[i];
        //     mp[arr[i]]++;
        // }
        int a = n;
        vector<ll>vec;
        set<ll>temp;
        map<ll, ll>mp;
        for (ll i = 0; i < n; i++) {
            int x;
            cin >> x;
            vec.push_back(x);
            temp.insert(x);
            mp[x] += 1;
        }
        vec.assign(temp.begin(), temp.end());
        for (ll i = 0; i < vec.size(); i++) {
            n = n - (mp[vec[i]] - 1);
        }
        if ((a - n) % 2 == 1)
            n--;
        cout << n <<endl;
        
        // for (auto x : mp){
        //     if(x.second%2 == 1) count++;
        //     else continue;
        // }
        // cout<<count<<endl;
        /*
        ll n;
  cin >> n;
  ll a = n;
  vector<ll>v;
  set<ll>s;
  map<ll, ll>m;
  for (ll i = 0; i < n; i++) {
    ll x;
    cin >> x;
    v.push_back(x);
    s.insert(x);
    m[x] += 1;
  }
  v.assign(s.begin(), s.end());
  for (ll i = 0; i < v.size(); i++) {
    n -= (m[v[i]] - 1);
  }
  if ((a - n) % 2 == 1)
    n -= 1;
  cout << n;*/


    }
    return 0;
}