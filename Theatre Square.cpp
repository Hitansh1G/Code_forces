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
    ll n,m,a;
    cin >> n >> m >> a;

    ll len = n/a;
    if(n%a!=0) len++;
    ll bre = m/a;
    if(m%a!=0) bre++;
    
    cout<<len*bre<<endl;

    return 0;
}