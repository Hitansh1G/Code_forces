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
        int n,m;
        cin >> n >> m;
        //1001
        //0110
        //0110
        //1001
        // for(int i=0 ; i<n ; i++){
        //     //for 1001
        //     if(i%5==1 || i%5==4){
        //         cout<<1<<" ";
        //     }
        //     cout<<endl;
        //     else if(i%5==2 || i%5==3){
        //         cout<<0<<" ";
        //     }
        //     cout<<endl;


        //     //for 0110
        //     if(i%5==1 || i%5==4){
        //         cout<<0<<" ";
        //     }
        //     cout<<endl;
        //     else if(i%5==2 || i%5==3){
        //         cout<<1<<" ";
        //     cout<<endl;


        // }
        for(ll i=1;i<=n;i++){
            for(ll j=1;j<=m;j++){
                cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
            }
        }
    }
    return 0;
}