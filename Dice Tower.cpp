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
    ll t,x;
       cin>>t;
       while(t--){
           cin>>x;
           if(x>14 && x%14>=1&&x%14<=6) cout<<"YES"<<endl;
           else cout<<"NO"<<endl;
       }
    return 0;
}