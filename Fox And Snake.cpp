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
    int n,m;
    cin >> n >> m;
    // int arr[n][m];
    int oddness=0;
    for(int i=0 ; i<n ;  i++){
	    if(i%2==0){
	        for(int j=0;j<m;j++){
		        cout<<"#";}
	    }
		else {
			++oddness;
			for(int j=0;j<m;j++){
                if(oddness%2==1&&j==m-1){
                    cout<<"#";
                }
                else if(oddness%2==0&&j==0){
                    cout<<"#";
                }
                else {
                    cout<<".";
                }
			}
		}
	cout<<endl;
	}

	return 0;
}