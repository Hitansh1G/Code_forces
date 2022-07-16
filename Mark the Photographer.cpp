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
    cin>>t;
    while(t--)
    {
        int n,x;
        cin >> n >> x;
        int size=2*n;
        // int arr[size];
        vector<int>arr
        for(int i=0 ; i<size ; i++){
            cin>>arr[i];
        }
        // sort(arr,arr+size);
        sor(arr.begin() , arr.end());
        int k=0, l=n, flag=1;
        while(k<n){
            if(abs(arr[l]-arr[k])<x){
                flag=0;
                cout<<"NO"<<endl;
                break;
            }
            k++;
            l++;
        }
        if(flag==1) cout<<"YES"<<endl;
    }
    return 0;
}