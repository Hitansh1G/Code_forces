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
        long long a, b, c;
        cin >> a >> b >> c;
        cout << a + b * (long long) 1e9 << " " << b << " " << c << '\n';
    }
    return 0;
}