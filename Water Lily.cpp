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
#include<iomanip>

#define Fast ios_base::sync_with_stdio(false); cin.tie(NULL);
typedef long long ll;
using namespace std;
int32_t main(){
    Fast
    int i, j, k;
    int n, m;

    double H, L;
    cin >> H >> L;

    cout << fixed << setprecision(10) << ((L * L - H * H) / (2 * H));
    return 0;
}