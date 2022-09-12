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
        int a , b,c;
        cin >> a >> b >> c;
        int first = abs(a-1);
        int second ;
        if(b<c){
            second = abs(c+b-1);
        }
        else if(b>c){
            second = abs(abs(c-b)-1);
        }
        else second = b-1;




        int ans = a-1;
        int sol = abs(b-c) + c-1;
        
        if(ans> sol) 
            cout<<2<<endl;
        else if(ans<sol) 
            cout<<1<<endl;
        else 
            cout<<3<<endl;
    }
    return 0;
}