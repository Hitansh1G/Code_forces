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
int permutation(int x,int y){
    if(y==0){
        return 1;
    }
    if(y==x) return x;
    int ans = permutation(x,y/2);
    if(y%2==0){
        return ans*ans;
    }
    return ans *ans *x;
}
bool allCharactersSame(string s)
{
    return (s.find_first_not_of(s[0]) == string::npos);
}
int main(){
    Fast
    int T;
    cin >> T;
    while(T--){
        string s,t;
        int ans=1,count=0;
        cin >> s;
        cin >> t;
        bool flag = false;
        bool temp = false;
        //if t is just a then print 1
        //if t consist char then ans is -1
        //else print pow(2,len(s))

        for(int i=0 ; i<t.size() ; i++){
            if(t[i]=='a'){
                temp = true;
                count++;
                break;
            }
        }
        // if(t=="a")cout<<1<<endl;
        // else if(temp == true) cout<< -1<<endl;
        // else {
        //     for(int i=1 ; i<=s.length() ; i++){
        //         int ans = ans*2;
        //     }
        //     cout<<ans<<endl;
        //     // cout<<pow(2,s.length())<<endl;
        // }
        if(count==0){
            cout<<permutation(2,s.length())<<endl;
            // for(int i=1 ; i<=s.length() ; i++){
            //     int ans = ans*2;
            // }
            // cout<<ans<<endl;
        } 
        else if(count==1 && t.length()==1) cout<<1<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
