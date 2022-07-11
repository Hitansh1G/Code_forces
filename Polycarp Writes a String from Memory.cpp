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
        string s;
        cin >> s;
        int ans=0;
        int temp=0;
        unordered_map<char,int>mp;
        set<char>st;
        for(int i=0 ; i<s.size() ; i++){
            mp[s[i]]++;
        }
        int n= mp.size();
        int i=0;
        while(s.size()>i){
            bool flag = false;
            st.insert(s[i]);
            if( st.find(s[i+1])==st.end() && st.size() == 3){
                ans += 1;
                st.clear();
            }
            i++;
        }
        int mob = st.size();
        if(mob>0)cout<<ans+1<<endl;
        else cout<<ans<<endl;
        
    }
    return 0;
}