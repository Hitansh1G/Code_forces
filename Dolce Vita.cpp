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
        ll n, k;
        cin >> n >> k;
        ll a[n], i, sum = 0;
 
        for(i = 0; i < n; i++){
            cin >> a[i];
            sum+=a[i];
        }
        sort(a, a+n);
        i = n-1;
        ll c = 0, x, p;
        ll ans = 0;
        while(i >= 0){
            x = k - sum;
            sum-=a[i];
            if(x < 0) i--;
            else{
                p = x/(i+1) - c;
                ans = ans + (i+1)*(p+1);
                c+=(p+1);
                i--;
            }
        }
        cout<<ans;
        cout<<endl;
    }
    return 0;
}