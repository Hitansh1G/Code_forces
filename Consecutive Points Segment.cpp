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
        int n;
        cin >> n;
        vector<int>vec;
        for(int i=0 ; i<n ; i++){
            int x;
            cin >> x;
            vec.push_back(x);
        }
        int sum=0;
        for(int i=0 ; i<n-1 ; i++){
            sum = sum + vec[i+1]-vec[i]-1;
        }
        if(sum<=2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}