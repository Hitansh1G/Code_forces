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
    int test;
    cin >> test;
    while (test--)
    {
        int n;
        cin >> n;
        int arr[n];
        
        for(int i=0; i<n; i++) {
            cin >> arr[i];
        }
 
        int ans = 0;
        for(int i=1; i<n; i++) {
            if(arr[i-1] > arr[i]) {
                ans++;
                i++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}