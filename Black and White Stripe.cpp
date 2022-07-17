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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int> vec(n + 1);
        vec[0] = 0;
        for (int j = 0; j < n; j++){
            vec[j + 1] = vec[j];
            if (s[j] == 'W'){
                vec[j + 1]++;
            }
        }
        int ans = n;
        for (int j = 0; j <= n - k; j++){
            ans = min(ans, vec[j + k] - vec[j]);
        }
        cout << ans << endl;

        
    }
    return 0;
}