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
    
    
    // int n,q;
    // cin >> n >> q;
    // // int arr[n]
    // vector<int> arr(n);
    // for(int i=0 ; i<n ; i++){
    //     cin >> arr[i];
    // }
    // // sort(arr,arr+n);
    // sort(arr.begin(), arr.end());
    // vector<int>largest;
    // vector<int>smallest;
   
    // sort(arr,arr+n);
    
    // int small=0;
    // for(int i=0 ; i<q ; i++){
    //     
    //     int k = n;
    //     int flag = x[i];
    //     while(flag--){
    //         //for x[i] largest number in arr
    //         largest.push_back(arr[k-1]);
    //         k--;
    //     }
    //     
    //     // sort(largest.begin(),largest.end());
    //     // int p = largest.size();
    //     while(y[i]--){
    //         small += largest[largest.size()-1];
    //         largest.pop_back();
    //         // p--;
    //     }

    //     cout<<small<<endl;
    // }
        
        int n, q;
  cin >> n >> q;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  vector<long long> pref(n + 1);
  for (int i = 0; i < n; i++) {
    pref[i + 1] = pref[i] + a[i];
  }
  while (q--) {
    int x, y;
    cin >> x >> y;
    cout << pref[n - (x - y)] - pref[n - x] << '\n';
  }
  return 0;
}