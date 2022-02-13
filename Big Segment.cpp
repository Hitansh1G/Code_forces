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
using namespace std;
int main(){
    Fast
    // int n;
    // cin >> n;
    // vector<int>x;
    // vector<int>y;
    
    // while(n--){
    //     int a,b;
    //     cin >>a>>b;
    //     x.push_back(a);
    //     y.push_back(b);
    // }
    // int mini= *min_element(x.begin(), x.end());
    // int maxi= *max_element(y.begin(), y.end());
    // for(int i=0 ; i<x.size() ; i++){
    //     if(mini==x[i] && maxi==y[i]){
    //         cout<<i<<endl;
    //         break;
    //     }
    //     else {
    //         cout<<"-1"<<endl;
    //         break;
    //     }
            

    // }
    // // for (auto itr=cord.begin() ; itr!=cord.end(); ++itr) {
    // //     cout << itr->first
    // //          << '\t' << itr->second << '\n';
    // // }
    int n, l, r, minl, maxr, number(1);
    cin>> n >> minl >> maxr;
    for (int i = 2; i <= n; ++i){
        cin >> l >> r;
        if (l <= minl && r >= maxr){
            number = i;
        }
        else if (l < minl || r > maxr){
            number = -1;
        }
        minl = min(minl, l);
        maxr = max(maxr, r);
    }
    cout<< number;
    return 0;
}