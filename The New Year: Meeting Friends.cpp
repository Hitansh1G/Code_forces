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
    int a,b,c;
    cin >> a >> b >> c;
    vector<int>vec;
    vec.push_back(a);
    vec.push_back(b);
    vec.push_back(c);
    sort(vec.begin() ,vec.end());
    // int mini = min(a,min(b,c));
    // int maxi = max(a,max(b,c));
    cout<<-vec[0]+vec[2];
    

    return 0;
}