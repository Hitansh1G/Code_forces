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
        int n,m;
        cin >> n >> m;
        int arr[n][m];
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ; j++){
                cin >> arr[i][j];
            }
        }
        int maxi=0 , maxj=0;
        for(int i=0 ; i<n ; i++){
            for(int j=0; j<m ; j++){
                if (arr[i][j] > arr[maxi][maxj])
                    maxi = i, maxj = j;
            }
        }
        int h = max(maxi+1, n-maxi);
        int w = max(maxj+1, m-maxj);
        cout << h * w << endl;


    }
    return 0;
}