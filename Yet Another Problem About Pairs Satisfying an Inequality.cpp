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
// typedef long long ll;
using namespace std;

 
int t, n;
const int N = 2e5 + 7;
long long a[N];
int first[N];
long long dp[N];
 
int main () {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> t;
	while(t--) {
		cin >> n;
		long long count = 0;
		for(int i = 1; i <=n; i++) {
			cin >> a[i];
			if(a[i] < i) {
				first[i] = 1;
			}
		}
		for(int i = 1; i <= n; i++)
			dp[i] = dp[i-1] + first[i-1];
//		for(int i = 0; i < n; i++) {
//			cout << first[i] << " ";
//		}
//		cout << "\n";
//		for(int i = 0; i < n; i++) {
//			cout << dp[i] << " ";
//		}
//		cout << "\n";
		for(int i = 1; i <=n; i++) {
			if(first[i]) {
				count += dp[a[i]];
			} 
		}
		cout << count << "\n";
		memset(a, 0, sizeof(a));
		memset(first, 0, sizeof(first));
		memset(dp, 0, sizeof(dp));
	}	
	return 0;
}