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
    for (int i = 0; i < t; i++){
        int n;
        cin >> n;
        vector<string> s(n);
        for (int j = 0; j < n; j++){
            cin >> s[j];
        }
        set<string> st;
        for (int j = 0; j < n; j++){
            st.insert(s[j]);
        }
        string ans;
        for (int j = 0; j < n; j++){
            int L = s[j].size();
            bool ok = false;
            for (int k = 1; k < L; k++){
                if (st.count(s[j].substr(0, k)) == 1 && st.count(s[j].substr(k)) == 1){
                    ok = true;
                }
            }
            if (ok){
                ans += '1';
            } 
            else {
                ans += '0';
            }
        }
        cout << ans << endl;
    }
    return 0;
}