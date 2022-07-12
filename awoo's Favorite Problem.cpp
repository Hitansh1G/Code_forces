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
    int tt;
  cin >> tt;
  while (tt--) {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> ns(1, 0);
    vector<int> nt(1, 0);
    string cs, ct;
    for (int i = 0; i < n; i++) {
      if (s[i] != 'b') {
        cs += s[i];
        ns.push_back(0);
      } else {
        ns.back() += 1;
      }
      if (t[i] != 'b') {
        ct += t[i];
        nt.push_back(0);
      } else {
        nt.back() += 1;
      }
    }
    int sum = 0;
    bool ok = true;
    if (cs == ct) {
      for (int i = 0; i < (int) ns.size() - 1; i++) {
        sum += ns[i] - nt[i];
        if (sum > 0 && cs[i] == 'a') {
          ok = false;
          break;
        }
        if (sum < 0 && cs[i] == 'c') {
          ok = false;
          break;
        }
      }
    }
    cout << (ok && cs == ct ? "YES" : "NO") << '\n';
  }
  return 0;
}