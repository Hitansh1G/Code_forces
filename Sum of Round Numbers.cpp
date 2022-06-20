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
    int aa[100000];
    while(t--){
        // vector<int>vec;
        // int n; 
        // cin >> n ; 
        // // temp=0;
        // int i=1;
        // while(n>0){
        //     int temp = n%10;
        //     if(temp !=0 ){
        //         vec.push_back(i*temp);
        //         // cout<<i*temp<<" ";
        //     }
        //     n=n/10;
        //     i=i*10;
        // }
        // reverse(vec.begin(), vec.end());
        // for (int i = 0; i < vec.size(); i++)
        //     cout << vec[i] << " ";
        int n;
        int d=0,rem=0;
        cin>>n;
        if(n >= 1000){
            rem=n%1000;
            aa[d++]=n-rem;
            n%=1000;
        }
        if(n >= 100){
            rem=n%100;
            aa[d++]=n-rem;
            n%=100;
        }
        if(n >= 10){
            rem=n%10;
            aa[d++]=n-rem;
            n%=10;
        }
        if(n<10 && n>0){
            aa[d++]=n;
        }
        vector<int>va;
        for(int i=0; i<d; i++){
            va.push_back(aa[i]);
        }
        cout<<va.size()<<endl;
        for(int i=0; i<va.size(); i++){
            cout<<va[i]<<" ";
        }
        cout<<endl;
        

    }
    return 0;
}