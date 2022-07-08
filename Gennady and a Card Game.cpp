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
    string s, str;
    cin >> s;
    bool flag = false;
    for (int i = 0; i < 5; i++) {
        cin >> str;
        if (s[0] == str[0] || s[1] == str[1]) flag = true;
    }
    (flag) ? cout << "YES\n" : cout << "NO\n";
    return 0;
}