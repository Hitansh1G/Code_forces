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
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int l=s.length();
    int ans=0;
    for(int i=1; i<l; i++)
    {
        if(s[i]!=s[i-1])
            ans++;
    }
//    cout<<s<<endl;
//    cout<<ans<<endl;
    if(ans&1)
        cout<<"CHAT WITH HER!"<<endl;
    else
        cout<<"IGNORE HIM!"<<endl;

    return 0;
}