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
    int n , e=0, d=0;
    cin >> n;
    int p[n];
    p[0]=0;
    for (int i=1 ; i<=n ; i++){
        cin >> p[i];
        e += p[i-1]-p[i];
        if (e<0){
            d -= e;
            e = 0;
        }
    }
    cout <<d<< endl;

    return 0;
}