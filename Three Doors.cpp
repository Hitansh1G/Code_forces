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
        int x;
        cin >> x;
        int a,b,c;
        vector<int>v;
        cin >> a >> b >> c;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        int temp = x;
        if(v[temp-1]==0){
            cout<<"NO"<<endl;
        }
        else{
            int flag = v[temp-1];
            if(v[flag-1]==0){
                cout<<"NO"<<endl;
            }
            else cout<<"YES"<<endl;
        }
        // if(x==1){
        //     if(a==0){
        //         cout<<"NO";
        //     }
        //     else{
        //         int temp = v[0];
        //         if(v[temp]==0){
        //             cout<<"NO";
        //         }
        //         else cout<<"YES";
        //     }
        // }
        // else if(x==2){
        //     if(b==0){
        //         cout<<"NO";
        //     }
        //     else{
        //         int temp = v[1];
        //         if(v[temp]==0){
        //             cout<<"NO";
        //         }
        //         else cout<<"YES";
                
        //     }
        // }
        // else if(x==3){
        //     if(c==0){
        //         cout<<"NO";
        //     }
        //     else{
        //         int temp = v[2];
        //         if(v[temp]==0){
        //             cout<<"NO";
        //         }
        //         else cout<<"YES";
        //     }
        // }
        // cout<<endl;
    }
    return 0;
}