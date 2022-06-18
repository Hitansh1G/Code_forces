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

    // string s;
    // cin >> s;
    // char first = s[0] - '0';
    // if(first == 9)s[0]='9';
    // else{
    //     if(first > 4){
    //         s[0] =  (9-first)+'0';
    //     }
    // }
    // for(int i=1 ; i<s.size() ; i++){
        
    //     if(s[i]<='5') continue;
    //     else{
    //         if(s[i]=='9')s[i]='0';
    //         else if(s[i]=='8')s[i]='1';
    //         else if(s[i]-'0'=='7')s[i]='2';
    //         else if(s[i]=='6')s[i]='3';
    //     }
    // }
    // cout<<s;
    char s[20];
    int i;
    cin >> s; 
    if( s[0]>52 && s[0]!= 57)
        s[0]=57 - s[0] + 48;
    for(i=1 ; i<strlen(s) ; i++){
        if(s[i]>52)
        s[i]=57-s[i]+48;
    }
    cout<<s;

        
    
    return 0;
}