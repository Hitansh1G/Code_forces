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
        long long a, k;
        cin >> a >> k;
        --k;
        while (k--) {
            auto s = to_string(a);
            int mn = *min_element(begin(s), end(s)) - '0';
            int mx = *max_element(begin(s), end(s)) - '0';
            if (mn == 0) break;
            a += mn * mx;
        }
        cout << a << '\n';
    }
    return 0;
}