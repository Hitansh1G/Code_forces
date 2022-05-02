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
bool allCharactersSame(string s){
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;
 
    return true;
}
int main(){
    Fast
    int T;
    cin >> T;
    while(T--){
        string s,t;
        cin >> s;
        cin >> t;
        bool flag = false;
        bool temp = false;
        //if t is just a then print 1
        //if t consist char then ans is -1
        //else print pow(2,len(s))
        flag = allCharactersSame(s);
        cout<<flag<<" ";
        for(int i=0 ; i<t.size() ; i++){
            if(t[i]=='a'){
                temp = true;
                break;
            }
        }
        if(allCharactersSame(s) == true )cout<<1<<endl;
        else if(temp == true) cout<< -1<<endl;
        else cout<<pow(2,s.length())<<endl;
    }
    return 0;
}