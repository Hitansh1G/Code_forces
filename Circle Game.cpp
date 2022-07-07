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
    cin>>t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0 ; i<n ; i++){
	        cin>>a[i];
	    }
	    if(n%2==1){
	        cout<<"Mike"<<endl;
	    }
	    else{
            int minm = INT_MAX;
            for(int i=0 ; i<n ; i++){
                minm = min(minm,a[i]);
            }
            for(int i=0 ; i<n ; i++){
                a[i]=a[i]-minm;
            }
            for(int i=0 ; i<n ; i++){
                if(a[i]==0){
                    if(i%2){
                        cout<<"Mike"<<endl;
                        break;
                    }
                    else{
                        cout<<"Joe"<<endl;
                        break;
                    }
                }
            }
	    
	    }
    }
    return 0;
}