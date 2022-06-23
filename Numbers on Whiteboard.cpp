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
        // int n;
        // cin >> n;
        // vector<int>vec;
        // for(int i=1 ; i<=n ; i++){
        //     vec.push_back(i);
        // }
        // if(vec.size()>3){
        //     while(vec.size()!=3){
        //         vec[2]= (vec[2]+vec[vec.size()-1])/2;
        //     }
        // }
        // else{

        // }
        int n; 
        cin>>n; 
        cout<<2<<endl; 
        int a=n,b=n-1;
        for(int i=1;i<n;i++){
            cout<<a<<" "<<b<<endl;
            a=(a+b+1)/2;b--;
        }
        
    }
    return 0;
}