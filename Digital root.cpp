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
    ll t,k,x;
    cin>>t;
    while(t--){
        cin>>k>>x;
        ll res=9*(k-1)+x;
        cout<<res<<endl;
    }
    return 0;
}