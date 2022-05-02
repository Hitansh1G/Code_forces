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
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> x >> y;
        if(x>y){
            cout<<0<<" "<<0<<endl;
        }
        else {
            int temp = y/x;
            int flag = y%x;
            if(flag!=0){
                cout<<0<<" "<<0<<endl;
            }
            else{
                cout<<1<<" "<<temp<<endl;
            }

        }
        
    }
    return 0;
}