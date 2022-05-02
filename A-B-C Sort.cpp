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
int check(int *v, int *sorted_arr,int n){
    for(int i=0 ; i<n ; i++){
        if(v[i]!= sorted_arr[i])return 0;
    }
    return 1;
}
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n ;
        int v[n];
        int sorted_arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> v[i];
            sorted_arr[i]=v[i];
        }
        sort(sorted_arr,sorted_arr+n);
        for(int i=n-1;i>=1;i-=2){
            if(v[i-1]>v[i]) 
                swap(v[i-1],v[i]);
        }
        if(check(v,sorted_arr,n)==1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
 
    