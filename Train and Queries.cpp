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

bool search(int arr[], int n, int x){
    if (arr[n - 1] == x)
    return true;
    
    int backup = arr[n - 1];
    arr[n - 1] = x;
    for (int i = 0;; i++) {
        if (arr[i] == x) {
            arr[n - 1] = backup;
            if (i < n - 1)
                return true;
            return false;
        }
    }
}

int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        vector<int> u(n);
        for (int i = 0; i < n; i++) {
            cin >> u[i];
        }
        map<int, int> first;
        map<int, int> last;
        for (int i = 0; i < n; i++) {
            if (first.find(u[i]) == first.end()) {
                first[u[i]] = i;
            }
            last[u[i]] = i;
        }
        while (k--) {
            int x, y;
            cin >> x >> y;
            if (first.find(x) == first.end() || last.find(y) == last.end()) {
                cout << "NO" << '\n';
                continue;
            }
            x = first[x];
            y = last[y];
            cout << (x <= y ? "YES" : "NO") << '\n';
        }
    }
    return 0;
}