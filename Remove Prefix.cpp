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

int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);   
}

int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        unordered_map<int,int>mp;
        int arr[n];
        for(int i=0 ; i<n ;i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }
        gcd(arr[0],arr[n-1]);
        unordered_map <int, int> m;
        int temp = -1;
        for(int i=n-1 ; i >= 0 ; i--){
            if(m.count(arr[i]) == 0){
                m[arr[i]] = 1;
            }
            else{
                temp = i;
                break;
            }
        }
        cout<<temp+1<<endl;
    }
    return 0;
}