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
        int a,b,c,d;
        // int arr[2];
        vector<int>sum;
        cin >> a >>b >> c >>d;

        int count=0;
        sum.push_back(b);
        sum.push_back(c);
        sum.push_back(d);
        for(int i=0 ; i<sum.size() ; i++){
            if(sum[i]>a)count++;
        }
        // for(int i=0 ; i<3 ; i++){
        //     cin >>arr[i];
        //     if(arr[i]<a) count++;
        // }
        cout<<count<<endl;
        // if(a<b && a<c && a<d) cout<<3<<endl;

        // else if(a<b && a>c && a<d) cout<<2<<endl;
        // else if(a<b && a<c && a>d) cout<<2<<endl;
        // else if(a>b && a<c && a<d) cout<<2<<endl;

        
    }
    return 0;
}