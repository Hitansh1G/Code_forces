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
    int i,j,k;
    int n,m,sum;
    cin >> n;

    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    m=1<<n;
    for(i=0 ; i<m ; i++){
        sum=0;
        for(j=0 ; j<n ; j++){
            if((1<<j)&i) sum+=a[j];
            else sum-=a[j];
        }

        if(sum%360==0){
            cout<<"YES"<<endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}