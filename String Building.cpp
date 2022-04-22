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
void solve(string str){
    // string str;
    // cin>>str;
    char temp = str[0];
    int count = 1;

    for(int i=1;i<str.size();i++){
        if(str[i] == temp)count++;
        else {
            if(count < 2){
                cout << "NO\n";
                return;
            }
            count = 1 , temp = str[i];
        }
    }

    if(count <= 1){
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        string str;
        cin >> str;
        solve(str);
        // if(s=="aaaaabbbbb" || s=="aaaaabbbbb" || s=="aabbbaaabb" || s=="aabbbaaabb" || s=="aabbaaabbb" || s=="aabbbbbaaa") cout<<"YES"<<endl;
        // else if(s=="aaaaabbbbb" || s=="aaaaabbbbb" || s=="aaabbbbbaa" || s=="aaabbbaabb" || s=="aaabbaabbb" || s=="aaabbbbbaa")cout<<"YES"<<endl;
        // else if(s=="bbaaaaabbb" || s=="bbaabbbaaa" || s=="bbaaaaabbb" || s=="bbaaabbbaa" || s=="bbbbbaaaaa" || s=="bbbbbaaaaa")cout<<"YES"<<endl;
        // else if(s=="bbbaaaaabb" || s=="bbbaabbaaa" || s=="bbbbbaaaaa" || s=="bbbbbaaaaa" || s=="bbbaaaaabb" || s=="bbbaaabbaa")cout<<"YES"<<endl;
        // else cout<<"NO"<<endl;
        // solution(str);
    }
    return 0;
}