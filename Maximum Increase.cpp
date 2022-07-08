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
    int n;
	cin >> n;
	int a[n];
	int now=0,ans=0;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		if(a[i]>a[i-1]) ++now;
		else now=1;
		ans=max(ans,now);
	}
	cout << ans;   
    return 0;
}