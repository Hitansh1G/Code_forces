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
// void helper(string &a)
int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n,m,k;
        cin >> n >> m >> k;
        string a,b;
        cin >> a;
        cin >> b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        // helper(a,b,n,m);
        int i=0,j=0,p=0,q=0;
	    string c="";
	    while(i<n && j<m){
            if((a[i]<b[j] && p<k) || q==k){
                c+=a[i]; p++;i++;q=0;
            }
            else{
                c+=b[j]; q++; j++; p=0;
            }
        }
        cout<<c<<endl;
    }
    return 0;
}