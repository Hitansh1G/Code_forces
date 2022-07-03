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
    ll t;
	cin>>t;
	while(t--){
	    ll a,b,c;
	    cin>>a>>b>>c;
	    ll x = pow(10,c-1);
	    ll y = pow(10,c-1);
	    // make X and Y of a and b digits
	    while(x<(ll)pow(10,a-1)){
	        // multiply X till it become of a digits
	        x*=2;
	    }
	    while(y<(ll)pow(10,b-1)){
	        // multiply Y till it become of b digits
	        y*=3;
	    }
	    
	    cout<<x<<" "<<y<<endl;
	}
    return 0;
}