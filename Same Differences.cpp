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
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int x;
        map <int,ll> mp;
        ll maxi = 0;
        for (int i=0 ; i<n ; i++) {
            cin >> x;
            maxi += mp[x-i];
            mp[x-i]++;
        }
        cout<<maxi<<endl;
    }
    return 0;
}