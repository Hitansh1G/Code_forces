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
void solve(){
    int n,sum=0,final=0;
    cin >> n;
    int arr[n];
    for(int i=0 ; i<n ; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    if(sum==n) cout<<0<<endl;
    else if(sum<n) cout<<1<<endl;
    else{
        cout<<sum-n<<endl;
    }
}
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        solve();
    }
        
    return 0;
}