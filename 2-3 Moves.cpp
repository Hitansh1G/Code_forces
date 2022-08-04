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
        cin >> n;
        int count=0;
        if(n==1){
            count = 2;
        }
        else if(n==2){
            count=1;
        }
        else if(n%3==0){
            count=n/3;
        }
        else if(n%3==1){
            count=n/3+1;
        }
        else if(n%3==2){
            count = n/3+1;
        }
        cout<<count<<endl;
    }
    return 0;
}