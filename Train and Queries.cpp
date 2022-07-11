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

bool search(int arr[], int n, int x){
    if (arr[n - 1] == x)
    return true;
    
    int backup = arr[n - 1];
    arr[n - 1] = x;
    for (int i = 0;; i++) {
        if (arr[i] == x) {
            arr[n - 1] = backup;
            if (i < n - 1)
                return true;
            return false;
        }
    }
}

int32_t main(){
    Fast
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
        }                                   
        // unordered_map<int,int>mp;
        // for(int i=0 ; i<n ; i++){
        //     mp[arr[i]]++;
        // }
        while(k--){
            int a,b;
            cin >> a >> b;
            if(search(arr,n,a) == true && search(arr,n,b)==true){
                for(int i=n-1 ; i>=0 ; i--){
                    if(arr[i]==b){
                        cout<<"yes"<<endl;
                        break;
                    }
                    else if(arr[i]==a) {
                        cout<<"no"<<endl;
                        break;
                    }
                    else continue;

                }
            }
            else{
                cout<<"no"<<endl;
            }
            
        }
    }
    return 0;
}