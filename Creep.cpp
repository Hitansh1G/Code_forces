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
        int a, b;
        cin >> a >> b;
        if (a>b) {
            int diff = a-b;
            int temp=0,flag=0;
            while(temp<b){
                cout<< "01";
                temp++;
            }
            while(flag<diff){
                cout<<"0";
                flag++;
            }
            cout<<endl;
        } 
        else if(a<=b){
            int diff = b-a;
            int temp=0,flag=0;
            while(temp<a){
                cout<<"10";
                temp++;
            }
            while(flag<diff){
                cout<<"1";
                flag++;
            }
            cout<<endl;
        }

    }
    return 0;
}