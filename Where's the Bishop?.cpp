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
        bool flag=false;
        char arr[10][10];
        int n=8;
        for(int i=1 ; i<=n ; i++){
            for(int j=1 ; j<=n ; j++){
                cin >> arr[i][j];
            }
        }
        int first , second;
        for(int i=1 ; i<=n ; i++){
            int temp = 0;
            for (int j=1 ; j<=n ; j++){
                if(arr[i][j] == '#'){
                    temp++;
                    first = i;
                    second = j;
                }
            }
            if(temp>1)
                flag=true;
            if(flag==true && temp==1)
                break;
        }
        cout<<first<<" "<<second<<"\n";
    }
    return 0;
}