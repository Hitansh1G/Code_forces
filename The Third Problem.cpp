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
const ll NMAX=1e5+5,MOD=1e9+7;

ll v[NMAX],pos[NMAX];
void tc(){

    ll n,l,r,ans=1;

    cin>>n;

    for(ll i=0;i<n;i++){
        cin>>v[i];
        pos[v[i]]=i;
    }

    l = r = pos[0];

    for(ll i=1;i<n;i++){
        if(pos[i]<l) l = pos[i];

        else if(pos[i]>r) r = pos[i];

        else ans=ans*(r-l+1-i)%MOD;
    }
    cout<<ans<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0);
    ll t;
    cin>>t;
    while(t--)
        tc();
    return 0;
}