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
        int n,even=0,odd=0;
        cin >> n;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
            if(arr[i]%2==0)even++;
            if(arr[i]%2==1)odd++;
        }
        if(even<odd)cout<<even<<endl;
        else cout<<odd<<endl;
    }
    return 0;
}