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
        int n,m;
        cin >> n >>m ;
        gcd(n,m);
        if(n==1 && m==1){
            cout<<0<<endl;
        }
        else{
            ll temp=0;
            if(m>n){
                temp = 2*n+m-2;
            }
            else{
                temp = 2*m+n-2;
            }
            cout<<temp<<endl;
        }
    }
    return 0;
}