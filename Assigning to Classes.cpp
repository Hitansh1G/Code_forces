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
        int n,a;
        cin >> n ;
        // int totalStudent = 2*n;
        // // int arr[totalStudent];
        // vector<int>arr;
        // for(int i=0 ; i<totalStudent ; i++){
        //     cin >> arr[i];
        // }
        // sort(arr.begin() , arr.end());
        // vector<int>first;
        // vector<int>second;
        // for(int i=0 ; i<totalStudent ; i++){
        //     // if(i==0)first.push_back(arr[i]);
        //     if(i%2==1)first.push_back(arr[i]);
        //     if(i%2==0)second.push_back(arr[i]);
        // }
        // int a=first[n/2];
        // int b=second[n/2];
        // cout<<abs(a-b)<<endl;
        ll idx = n;
        n = n * 2;

        vector<ll>v;
        for(ll i=0; i<n; i++){
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());

        ll ans = 0;
        ans = abs(v[idx-1]- v[idx]);

        cout<<ans<<endl;





    }
    return 0;
}