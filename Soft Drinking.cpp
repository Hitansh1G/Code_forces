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
    int n, k, l, c, d, p, nl, np;
    cin >> n>> k>> l>> c>>d>> p>> nl>> np;
    int drink =k*l;
    int slices = c*d;
    int a = drink/nl;
    int x = p/np;
    cout<<min(a,min(slices,x))/n<<endl;
    // int a=k*l/nl;
    // int b=c*d;
    // int x= p/np;
    return 0;
}