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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);
        for (int j = 0; j < n; j++){
            cin >> s[j];
        }
        vector<int> f(n);
        for (int j = 0; j < n; j++){
            cin >> f[j];
        }
        vector<int> s2(n);
        vector<int> d(n);
        s2[0] = s[0];
        for (int j = 0; j < n; j++){
            d[j] = f[j] - s2[j];
            if (j < n - 1){
                s2[j + 1] = max(f[j], s[j + 1]);
            }
        }
        for (int j = 0; j < n; j++){
            cout << d[j];
            if (j < n - 1){
                cout << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}