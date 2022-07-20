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
    string s, t;
	cin >> s >> t;
	ll a = abs(int(s[0])-int(t[0]));
	ll b = abs(int(s[1])-int(t[1]));
	string ss = "";
	string tt = "";
	if (s[0]<t[0]) {
		for (ll i=0; i<a; i++) ss+="R";
	}
	else if (s[0]>t[0]) {
		for (ll i=0; i<a; i++) ss+="L";
	}
	if (s[1]<t[1]) {
		for (ll i=0; i<b; i++) tt+="U";
	}
	else if (s[1]>t[1]) {
		for (ll i=0; i<b; i++) tt+="D";
	}
	cout << max(a,b) << endl;
	for (ll i=0; i<max(a,b); i++) {
		if (i>=a) {
			cout << tt[i] << endl;
		}
		else if (i>=b) {
			cout << ss[i] << endl;
		}
		else {
			cout << ss[i] << tt[i] << endl;
		}
	}

    return 0;
}