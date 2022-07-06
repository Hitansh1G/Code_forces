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
        ll sum=0;
        int n,m;
        cin >> n >> m;
        if(n==1 && m==1){
            cout<<1<<endl;
        }
        else{
            // n--;
            // m--;
            // for(int i=1; i<=m ; i++){
            //     sum += i;
            // }
            // int temp=m;
            // for(int i=m ; i<m*m ; m=m+temp){
            //     sum+=i;
            // }
            // //got the horizontal sum
            // cout<<sum<<endl;
            sum = (m*(m+1))/2;
            for(int i=2 ; i<=n ; i++){
                sum += (i-1)*m+m;
            }
            cout<<sum<<endl;
        }
        
    }
    return 0;
}