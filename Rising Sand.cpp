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
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        int count=0;
        for(int i=1 ; i<n-1 ; i++){
            if(arr[i]>arr[i-1]+arr[i+1]){
                count++;
            }
            
        }
        if(k==1){
            cout<<(n-1)/2<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
}