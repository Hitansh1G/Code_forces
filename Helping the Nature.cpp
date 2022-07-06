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
        vector<int>a(n+1);
        for(int i=1 ; i<=n ; i++){
            cin >> a[i];
        }
        vector<int>diff(n);
        for(int i=1 ; i+1 <= n ; i++){
            diff[i] = a[i+1] - a[i];
        }
        int last=0;
        int prefix_steps = 0, suffix_steps = 0, total = 0;
        for(int i = no_of_elements - 1; i >= 0; i--){
            //difference[i] -= last_prefix;
            if(difference[i] < 0){
                prefix_steps += abs(difference[i]);
                last_prefix = abs(difference[i]);
            }
            else{
                suffix_steps += abs(difference[i]);
            }
        }
        A[1] -= prefix_steps;
        total += prefix_steps + suffix_steps + abs(A[1]);
        
        cout << total << "\n";
    }
    return 0;
}