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
        string m;
        cin >> m;
        int temp;
        int flag;
        if(m=="1"){
            cout<<0<<endl;
        }
        // else if(m.size()==1){
        //     cout<<9 - (stoi(m))<<endl;
        // }
        else{
            temp = floor(log10(stoi(m)));
            flag = pow(10,temp);
            cout<<stoi(m)-flag<<endl;
        }
    }
    return 0;
}