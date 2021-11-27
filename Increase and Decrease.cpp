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
using namespace std;
int main(){
    // int n,a,count=0;
    // cin >> n;
    // vector <int> seq;
    // for(int i=0 ; i<n ;i++){
    //     cin >> a;
    //     seq.push_back(a);
    // }
    // for(int i=1 ; i>0 ; i++){
    //     sort(seq.begin(), seq.end());
    //     seq.begin()++;
    //     seq.end()--;
    //     count++;
    // }


    int n, a, sum(0);
    cin >> n;
    for (int i = 0; i < n; ++i){
        cin >> a;
        sum += a;
    }
    if(sum%n==0) cout << n;
    else cout << n-1;
    return 0;
}