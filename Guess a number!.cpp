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
    int t=0, n=0;
    int m=0,k=0,num=0,ans=0;
    cin >> n;
    string str;
    int maxi =2000000000;
    int mini= -1*maxi;
    char ch;
    for(int i=0 ; i<n ; i++){
        cin >> str >> k >> ch;
        if(str == ">"){
            if(ch == 'Y'){
                mini = max(mini,k);
            }
            else{
                maxi = min(maxi,k+1);
            }
        }
        if(str == "<"){
            if(ch == 'Y'){
                maxi = min(maxi,k);
            }
            else{
                mini = max(mini,k-1);
            }
        }
        if(str == ">="){
            if(ch == 'Y'){
                mini = max(mini,k-1);
            }
            else{
                maxi = min(maxi,k);
            }
        }
        if(str == "<="){
            if(ch == 'Y'){
                maxi=min(maxi,k+1);
            }
            else{
                mini = max(mini,k);
            }
        }
    }
    if(mini >= maxi-1)
        cout << "Impossible";
    else
        cout << mini+1;
    return 0;
}