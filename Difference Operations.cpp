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
        cin >> n ;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }
        // for(int i=n-1 ; i>1 ; i--){
        //     if()
        // }
        int first = arr[0];
        bool flag=true;;
        for(int i=0 ; i<n ; i++){
            if(arr[i]%first!=0){
                // cout<<"NO"<<endl;
                flag = false;
                // return 0;
                break;
            }
        }
        if(flag==true)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}