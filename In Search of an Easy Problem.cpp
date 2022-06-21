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
    int n;
    cin >> n;
    int arr[n];
    bool temp=false;
    for(int i=0 ; i<n ; i++){ 
        cin >> arr[i];
        if(arr[i]==1) temp = true;
    }
    if(temp == true) cout<<"Hard"<<endl;
    else cout<<"Easy"<<endl;
    return 0;
}