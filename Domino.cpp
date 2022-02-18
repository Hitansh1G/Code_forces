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

// bool sumOfSecond(vector< pair <int,int> >sol){
//     int sum2=0;
//     for(int i=0 ; i<sol.size() ; i++){
//         sum2 += sol[i].second;
//     }
//     if(sum2%2==0)return true;
//     else return false;
// }

// bool sumOfFirst(vector< pair <int,int> >sol){
//     int sum1=0;
//     for(int i=0 ; i<sol.size() ; i++){
//         sum1 += sol[i].first;
//     }
//     if(sum1%2==0)return true;
//     else return false;
// }

// int check(vector< pair <int,int> >sol){
//     //first second true
//     //first true second false
//     //first false second true
//     //first second false
//     if(sumOfFirst(sol)==true && sumOfSecond(sol)==true){
//         return 1;
//     }
//     if(sumOfFirst(sol)==true && sumOfSecond(sol)==false){
//        
//       
//     }
// }

int main(){
    Fast
    int n,x,y, l=0 , r=0;
    cin >> n;
    bool s=false;
    // vector< pair <int,int> >sol;
    for(int i=0 ; i<n ; i++){
        cin >> x >> y;
        if(n==1 && x%2 + y%2 ==1){
            cout<<"-1"<<endl;
            return 0;
        }
        if(y%2 + x%2 == 1) s=true;
        l+=x;
        r+=y;
        // sol.push_back(make_pair(x,y));
    }
    if(l%2==0 && r%2==0) cout<<0<<endl;
    else if(l%2==1 && r%2==1 && s) cout<<1<<endl;
    else cout<<-1<<endl;
    // cout<<check(sol);
    return 0;
}