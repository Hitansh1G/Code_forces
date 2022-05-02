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
int main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        char first = int(s[0]);
        char second = int(s[1]);
        int sol=0;
        sol += (first-int('a'))*25;
        sol += (second-int('a'))+1;
        if(first<second){
            cout<<sol-1<<endl;
        }
        else cout<<sol<<endl;

    }
    return 0;
}