#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<map>
#include<set>
#include<list>
#include<bitset>
#include<cstring>
#include<climits>

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
long fact(const ll& p){
    if (p <= 1)
        return 1;
    return p * fact(p - 1);
}
 
bool isPrimee(const ll& p){
    if (p == 4)
        return false;
    return bool(fact(p >> 1) % p);
}
bool isPrime(ll n){
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0 || n % 3 == 0)
        return false;
    for (ll i = 5; i * i <= n; i = i + 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
 
    return true;
}
ll gcd_recursive(ll a, ll b){
    if (b)
        return gcd_recursive(b, a % b);
    else
        return a;
}


int32_t main(){
    Fast
    ll t;
    cin >> t;
    while(t--){
        ll n,l,r;
        cin >> n >> l >> r;
        ll vis[n];
        gcd_recursive(l,r);
        isPrime(n);
        isPrime(l);
        isPrime(r);

        for(int i=0 ; i<n ; i++){
            vis[i]=0;
        }

        vector<ll>ans;
        vector<ll>sol(n);
        for(ll i=1 ; i<=n ; i++){
            if(l%i!=0){
                ll temp=l/i;
                ll x=(temp+1)*i;
                if(x<=r){
                    ans.push_back(x);
                    continue;
                }
                else{
                    break;
                }
            }
            else{
                ans.push_back(l);
            }
        }
        int size = ans.size();
        if(size!=n){
            cout<<"NO"<<endl;
        }
        else {
            cout<<"YES"<<endl;
            for(ll i=0 ; i<size ; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        }
        // ll n,l,r;
        // cin >> n >> l >> r;
        // vector<ll>vec;
        // ll count=n;
        // // ll count=0;
        // if(r-l+2<n){
        //     cout<<"NO"<<endl;
        // }
        // else{
        //     ll i=l;
        //     while(count--){
        //         if(isPrime(i)==false){
        //             vec.push_back(i);
        //             i++;
        //         }
        //         else{
        //             count++;
        //             i++;
        //             continue;
        //         }
        //     }
            
            
        //     cout<<"YES"<<endl;
        //     for(ll i=0 ; i<n ; i++){
        //         cout<<vec[i]<<" ";
        //     }
        //     cout<<endl;
        // }
        

    }
    return 0;
}

/*
void solve(){

ll n,m,k;
cin>>n>>m>>k;
ll vis[n];
memset(vis,0,sizeof(vis));
vector<ll>v;
ll ok=0;
for(ll i=1;i<=n;i++){
    if(m%i==0){
        v.push_back(m);
    }
    else{
        ll x=((m/i)+1)*i;
        if(x>k){
            ok=1;
            break;
        }
        else{
            v.push_back(x);
        }
    }
}
if(v.size()==n){
    yy
    for(ll i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
else nn
}
*/