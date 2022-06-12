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
        int n,m;
        cin >> n >> m;
        int arr[n];
        int sum=0;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
            sum += arr[i];
        }
        int diff = sum-m;
        if(diff>0)cout<<diff<<endl;
        else{
            cout<<0<<endl;
        }
        //sum will be the total energy he needs

    }
    return 0;
}