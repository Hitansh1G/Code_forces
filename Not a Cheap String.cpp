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
        string s;
        cin >> s;
        int p;
        cin >> p;
        int n = (int) s.size();
        vector<vector<int> > at(26);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            int c = (int) (s[i] - 'a');
            sum += c + 1;
            at[c].push_back(i);
        }
        vector<bool> rem(n, false);
        for (int i = 25; i >= 0; i--) {
            while (sum > p && !at[i].empty()) {
                rem[at[i].back()] = true;
                at[i].pop_back();
                sum -= i + 1;
            }
        }
        for (int i = 0; i < n; i++) {
            if (!rem[i]) {
                cout << s[i];
            }
        }
        cout << '\n';
    }
        
    return 0;
}