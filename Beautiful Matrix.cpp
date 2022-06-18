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
    
        int arr[5][5];
        int cox,coy;
        for(int i=0 ; i<5 ; i++){
            for(int j=0 ; j<5 ; j++){
                cin >> arr[i][j];
                if(arr[i][j]==1){
                    cox = i;
                    coy = j;
                }
            }
        }
        cout<<abs(2-cox)+abs(2-coy)<<endl;


    return 0;
}