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
		string s;
		cin >> s;
		if(s[0]!='9'){
			for(int i=0 ; i<n ; i++){
				int x=s[i]-'0';
				x=9-x;
				cout << x;
			}
			cout << endl;
		}
		else{
			string ss;
			int p=1;
			for(int i=n-1 ; i>=0 ; i--){
				int x=s[i]-'0';
				if(p>=x){
					char xx='0'+(p-x);
					ss=xx+ss;
					p=1;
				}
				else{
					char xx='0'+(10+p-x);
					ss=xx+ss;
					p=0;
				}
			}
			cout<<ss<<endl;
		}
    }
    return 0;
}