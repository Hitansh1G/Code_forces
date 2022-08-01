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
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}
int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n,h,m;
        int mob=1440;
        cin >> n >> h >> m;

        int sol = h*60+m;
        int x,y;
        ll helper[n];

        for(int i=0 ; i<n ; i++){
            ll x,y;
            cin >> x >> y;
            x = x*60+y;

            helper[i]=x;
        }

        bool flag =false;
        ll bob = 0;

        sort(helper,helper+n);
        for(int i=0;i<n;i++){
            if(helper[i]>=sol){
                bob = abs(helper[i]-sol);
                flag = true;
                break;
            }
            
        }
       if(!flag){
        helper[0]+=mob;
        bob = abs(helper[0]-sol);
       }
       cout<<(bob/60);
       cout<<" ";
       cout<<(bob%60)<<endl;
        
    }
    return 0;
}