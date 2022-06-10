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
        int n;
        cin >> n;
        int arr[n];
        int ones=0,zeros=0;
        for(int i=0 ; i<n ; i++){
            cin >> arr[i];
            
        }
        for(int i=0 ; i<n ; i++){
            if(arr[i]==1){
                ones++;
            }
            if(arr[i]==0){
                zeros++;
            }
        }
        int temp=1;
        while(zeros--){
            temp = temp*2;
        }
        cout<<ones*temp<<endl;
    }
    return 0;
}